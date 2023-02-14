#pragma once
#include "CoreMinimal.h"
#include "GoKartMovementComponent.h"
#include "Components/ActorComponent.h"
#include "GoKartReplicationComponent.generated.h"

USTRUCT()
struct FGoKartState
{
	GENERATED_BODY()

	UPROPERTY()
	FGoKartMove LastMove;

	UPROPERTY()
	FVector Velocity;

	UPROPERTY()
	FTransform Transform;
};

struct FHermiteCubicSpline
{
	FVector StartLocation, StartDerivative, TargetLocation, TargetDerivative;

	FVector InterpolateLocation(float LerpRatio) const
	{
		return FMath::CubicInterp(StartLocation, StartDerivative, TargetLocation, TargetDerivative, LerpRatio);
	}
	FVector InterpolateDerivative(float LerpRatio) const
	{
		return FMath::CubicInterpDerivative(StartLocation, StartDerivative, TargetLocation, TargetDerivative, LerpRatio);
	}
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CRAZYKARTS_API UGoKartReplicationComponent : public UActorComponent
{
	GENERATED_BODY()

	// Lifecycle //
	// ========= //
public:
	UGoKartReplicationComponent();
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
protected:
	virtual void BeginPlay() override;

	// State //
	// ===== //
private:
	UPROPERTY(ReplicatedUsing = OnRep_ServerState)
	FGoKartState ServerState;

	TArray<FGoKartMove> UnacknowledgedMoves;

	float ClientTimeSinceUpdate;

	float ClientTimeBetweenLastUpdates;

	FTransform ClientStartTransform;

	FVector ClientStartVelocity;

	float ClientSimulatedTime;

	// References //
	// ========== //
private:
	UPROPERTY()
	APawn* PawnOwner;

	UPROPERTY()
	UGoKartMovementComponent* MovementComponent;

	UPROPERTY()
	USceneComponent* MeshOffsetRoot;

	// Methods //
	// ======= //
public:
	UFUNCTION(BlueprintCallable)
	void SetMeshOffsetRoot(USceneComponent* Root) { MeshOffsetRoot = Root; }

	// Subroutines //
	// =========== //
private:
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SendMove(FGoKartMove Move);

	void ClearAcknowledgedMoves(FGoKartMove LastMove);

	void UpdateServerState(const FGoKartMove& Move);

	void ClientTick(float DeltaTime);

	FHermiteCubicSpline CreateSpline();

	void InterpolateLocation(float LerpRatio, const FHermiteCubicSpline& Spline);

	void InterpolateVelocity(float LerpRatio, const FHermiteCubicSpline& Spline);

	void InterpolateRotation(float LerpRatio);

	float VelocityToDerivative();

	// Event Response //
	// ============== //
private:
	UFUNCTION()
	void OnRep_ServerState();

	void SimulatedProxy_OnRep_ServerState();

	void AutonomousProxy_OnRep_ServerState();
};