#pragma once
#include "CoreMinimal.h"
#include "GoKartMovementComponent.h"
#include "GameFramework/Pawn.h"
#include "GoKart.generated.h"

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

UCLASS()
class CRAZYKARTS_API AGoKart : public APawn
{
	GENERATED_BODY()

	// Lifecycle //
	// ========= //
public:
	AGoKart();
	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// State //
	// ===== //
private:
	UPROPERTY(ReplicatedUsing = OnRep_ServerState)
	FGoKartState ServerState;

	UFUNCTION()
	void OnRep_ServerState();

	TArray<FGoKartMove> UnacknowledgedMoves;

	// Subobjects //
	// ========== //
private:
	UPROPERTY(EditAnywhere)
	UGoKartMovementComponent* MovementComponent;


	// Subroutines //
	// =========== //
	void MoveForward(float Axis);

	void MoveRight(float Axis);

	void ClearAcknowledgedMoves(FGoKartMove LastMove);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SendMove(FGoKartMove Move);
};