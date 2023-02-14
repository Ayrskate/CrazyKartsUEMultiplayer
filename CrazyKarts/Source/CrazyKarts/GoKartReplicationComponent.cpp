#include "GoKartReplicationComponent.h"
#include "Net/UnrealNetwork.h"

UGoKartReplicationComponent::UGoKartReplicationComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	SetIsReplicatedByDefault(true);
}

void UGoKartReplicationComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UGoKartReplicationComponent, ServerState);
}

void UGoKartReplicationComponent::BeginPlay()
{
	Super::BeginPlay();
	PawnOwner = Cast<APawn>(GetOwner());
	MovementComponent = GetOwner()->FindComponentByClass<UGoKartMovementComponent>();
}

void UGoKartReplicationComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!IsValid(MovementComponent)) return;

	const FGoKartMove LastMove = MovementComponent->GetLastMove();

	// Listen Server
	if (GetOwnerRole() == ROLE_Authority && PawnOwner->IsLocallyControlled())
	{
		UpdateServerState(LastMove);
	}

	// Client
	if (GetOwnerRole() == ROLE_AutonomousProxy)
	{
		UnacknowledgedMoves.Add(LastMove);
		Server_SendMove(LastMove);
	}

	// Other clients
	if (GetOwnerRole() == ROLE_SimulatedProxy)
	{
		ClientTick(DeltaTime);
	}
}

void UGoKartReplicationComponent::Server_SendMove_Implementation(FGoKartMove Move)
{
	ClientSimulatedTime += Move.DeltaTime;
	MovementComponent->SimulateMove(Move);
	UpdateServerState(Move);
}

bool UGoKartReplicationComponent::Server_SendMove_Validate(FGoKartMove Move)
{
	float ProposedTime = ClientSimulatedTime + Move.DeltaTime;
	bool ClientNotRunningAhead = ProposedTime < GetWorld()->TimeSeconds;
	if (!ClientNotRunningAhead)
	{
		UE_LOG(LogTemp, Error, TEXT("Client is going too fast"));
		return false;
	}

	if (!Move.IsValid())
	{
		UE_LOG(LogTemp, Error, TEXT("Received invalid move"));
		return false;
	}

	return true;
}

void UGoKartReplicationComponent::ClearAcknowledgedMoves(FGoKartMove LastMove)
{
	TArray<FGoKartMove> NewMoves;
	for (const FGoKartMove& Move : UnacknowledgedMoves)
	{
		if (Move.Time > LastMove.Time)
		{
			NewMoves.Add(Move);
		}
	}
	UnacknowledgedMoves = NewMoves;
}

void UGoKartReplicationComponent::UpdateServerState(const FGoKartMove& Move)
{
	ServerState.LastMove = Move;
	ServerState.Transform = GetOwner()->GetActorTransform();
	ServerState.Velocity = MovementComponent->GetVelocity();
}

void UGoKartReplicationComponent::ClientTick(float DeltaTime)
{
	ClientTimeSinceUpdate += DeltaTime;

	if (ClientTimeBetweenLastUpdates < KINDA_SMALL_NUMBER) return; // XD
	if (!IsValid(MovementComponent)) return;

	float LerpRatio = ClientTimeSinceUpdate / ClientTimeBetweenLastUpdates;
	FHermiteCubicSpline Spline = CreateSpline();

	// Location
	InterpolateLocation(LerpRatio, Spline);

	// Velocity
	InterpolateVelocity(LerpRatio, Spline);

	// Rotation
	InterpolateRotation(LerpRatio);
}

void UGoKartReplicationComponent::InterpolateLocation(float LerpRatio, const FHermiteCubicSpline& Spline)
{
	FVector NewLocation = Spline.InterpolateLocation(LerpRatio);
	if (IsValid(MeshOffsetRoot))
	{
		MeshOffsetRoot->SetWorldLocation(NewLocation);
	}
}

void UGoKartReplicationComponent::InterpolateVelocity(float LerpRatio, const FHermiteCubicSpline& Spline)
{
	FVector NewDerivative = Spline.InterpolateDerivative(LerpRatio);
	FVector NewVelocity = NewDerivative / VelocityToDerivative();
	MovementComponent->SetVelocity(NewVelocity);
}

void UGoKartReplicationComponent::InterpolateRotation(float LerpRatio)
{
	FQuat TargetRotation = ServerState.Transform.GetRotation();
	FQuat StartRotation = ClientStartTransform.GetRotation();
	FQuat NewRotation = FQuat::Slerp(StartRotation, TargetRotation, LerpRatio);
	if (IsValid(MeshOffsetRoot))
	{
		MeshOffsetRoot->SetWorldRotation(NewRotation);
	}
}

FHermiteCubicSpline UGoKartReplicationComponent::CreateSpline()
{
	FHermiteCubicSpline Spline;
	Spline.TargetLocation = ServerState.Transform.GetLocation();
	Spline.StartLocation = ClientStartTransform.GetLocation();
	Spline.StartDerivative = ClientStartVelocity * VelocityToDerivative();
	Spline.TargetDerivative = ServerState.Velocity * VelocityToDerivative();
	return Spline;
}

float UGoKartReplicationComponent::VelocityToDerivative()
{
	return ClientTimeBetweenLastUpdates * 100;
}

void UGoKartReplicationComponent::OnRep_ServerState()
{
	switch (GetOwnerRole())
	{
	case ROLE_AutonomousProxy:
		AutonomousProxy_OnRep_ServerState();
		break;

	case ROLE_SimulatedProxy:
		SimulatedProxy_OnRep_ServerState();
		break;

		default:
			break;
	}
}

void UGoKartReplicationComponent::SimulatedProxy_OnRep_ServerState()
{
	if (!IsValid(MovementComponent)) return;

	ClientTimeBetweenLastUpdates = ClientTimeSinceUpdate;
	ClientTimeSinceUpdate = 0;

	if (IsValid(MeshOffsetRoot))
	{
		ClientStartTransform.SetLocation(MeshOffsetRoot->GetComponentLocation());
		ClientStartTransform.SetRotation(MeshOffsetRoot->GetComponentQuat());
	}
	ClientStartVelocity = MovementComponent->GetVelocity();

	// Move the actual actor to the position, only the MeshOffsetRoot is moving
	GetOwner()->SetActorTransform(ServerState.Transform);
}

void UGoKartReplicationComponent::AutonomousProxy_OnRep_ServerState()
{
	if (!IsValid(MovementComponent)) return;

	GetOwner()->SetActorTransform(ServerState.Transform);
	MovementComponent->SetVelocity(ServerState.Velocity);
	ClearAcknowledgedMoves(ServerState.LastMove);

	// Resimulate all the moves
	for (const FGoKartMove& Move : UnacknowledgedMoves)
	{
		MovementComponent->SimulateMove(Move);
	}
}