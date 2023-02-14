#include "GoKart.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/GameStateBase.h"
#include "Net/UnrealNetwork.h"

FString GetEnumText(ENetRole Role)
{
	switch (Role)
	{
	case ROLE_None: return "None";
	case ROLE_SimulatedProxy: return "SimulatedProxy";
	case ROLE_AutonomousProxy: return "AutonomousProxy";
	case ROLE_Authority: return "Authority";
	default: return "ERROR";
	}
}

AGoKart::AGoKart()
{
 	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;

	MovementComponent = CreateDefaultSubobject<UGoKartMovementComponent>(TEXT("GoKartMovementComponent"));
	ReplicationComponent = CreateDefaultSubobject<UGoKartReplicationComponent>(TEXT("MovementReplicator"));
}

void AGoKart::BeginPlay()
{
	Super::BeginPlay();

	if (HasAuthority())
	{
		NetUpdateFrequency = 10;
		SetReplicateMovement(false);
	}
}

void AGoKart::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("MoveForward", this, &AGoKart::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AGoKart::MoveRight);
}

void AGoKart::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Debug role
	DrawDebugString(GetWorld(), FVector(0, 0, 100), GetEnumText(GetLocalRole()), this, FColor::White, DeltaTime);
}

void AGoKart::MoveForward(float Axis)
{
	MovementComponent->SetThrottle(Axis);
}

void AGoKart::MoveRight(float Axis)
{
	MovementComponent->SetSteeringThrow(Axis);
}