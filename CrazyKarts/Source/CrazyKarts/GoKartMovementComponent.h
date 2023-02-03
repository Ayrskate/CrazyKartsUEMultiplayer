#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GoKartMovementComponent.generated.h"

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

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CRAZYKARTS_API UGoKartMovementComponent : public UActorComponent
{
	GENERATED_BODY()

	// Configuration //
	// ============= //
public:
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

	// State //
	// ===== //
private:
	FVector Velocity;

	float Throttle;

	float SteeringThrow;

	FGoKartMove LastMove;

	// Accessors //
	// ========= //
public:
	FVector GetVelocity() const { return Velocity; }
	FGoKartMove GetLastMove() const { return LastMove; }

	// Lifecycle //
	// ========= //
public:
	UGoKartMovementComponent();
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
protected:
	virtual void BeginPlay() override;

	// Methods //
	// ======= //
public:
	void SetThrottle(float Axis);
	void SetSteeringThrow(float Axis);
	void SetVelocity(FVector NewVelocity);
	void SimulateMove(const FGoKartMove& Move);

	// Subroutines //
	// =========== //
private:
	FGoKartMove CreateMove(float DeltaTime);

	FVector GetAirResistance();

	FVector GetRollingResistance();

	void ApplyRotation(float DeltaTime, float InSteeringThrow);

	void UpdateLocationFromVelocity(float DeltaTime);
};