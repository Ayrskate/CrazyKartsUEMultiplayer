#pragma once
#include "CoreMinimal.h"
#include "GoKartMovementComponent.h"
#include "GoKartReplicationComponent.h"
#include "GameFramework/Pawn.h"
#include "GoKart.generated.h"

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


	// Subobjects //
	// ========== //
private:
	UPROPERTY(VisibleAnywhere)
	UGoKartMovementComponent* MovementComponent;

	UPROPERTY(VisibleAnywhere)
	UGoKartReplicationComponent* ReplicationComponent;


	// Subroutines //
	// =========== //
	void MoveForward(float Axis);

	void MoveRight(float Axis);
};