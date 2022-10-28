#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GoKart.generated.h"

USTRUCT()
struct FGoKartMove
{
	GENERATED_BODY()

	UPROPERTY()
	float Throttle;

	UPROPERTY()
	float SteeringThrow;

	UPROPERTY()
	float DeltaTime;

	UPROPERTY()
	float Time;
};

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

	// Configuration //
	// ============= //
	// Kg
	UPROPERTY(EditAnywhere, category = "Kart Parameters")
	float Mass = 1000;

	// Newtons
	UPROPERTY(EditAnywhere, category = "Kart Parameters")
	float MaxDrivingForce = 10000;

	// Kg * m
	UPROPERTY(EditAnywhere, category = "Kart Parameters")
	float DragCoefficient = 16.0f;

	// Higher means more rolling resistance
	UPROPERTY(EditAnywhere, category = "Kart Parameters")
	float RollingResistanceCoefficient = 0.015f;

	// Meters
	UPROPERTY(EditAnywhere, category = "Kart Parameters")
	float MinimumTurningRadius = 10.0f;


	// Lifecycle //
	// ========= //
public:
	// Sets default values for this pawn's properties
	AGoKart();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	// State //
	// ===== //
private:
	UPROPERTY(ReplicatedUsing = OnRep_ServerState)
	FGoKartState ServerState;

	UFUNCTION()
	void OnRep_ServerState();

	FVector Velocity;

	UPROPERTY(Replicated)
	float Throttle;

	UPROPERTY(Replicated)
	float SteeringThrow;


	// Subroutines //
	// =========== //
	FVector GetAirResistance();

	FVector GetRollingResistance();

	void ApplyRotation(float DeltaTime);

	void MoveForward(float Axis);

	void MoveRight(float Axis);

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SendMove(FGoKartMove Move);

	void UpdateLocationFromVelocity(float DeltaTime);
};