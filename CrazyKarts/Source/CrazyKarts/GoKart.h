// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GoKart.generated.h"

UCLASS()
class CRAZYKARTS_API AGoKart : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AGoKart();

	UPROPERTY(VisibleAnywhere, category = "Kart Parameters")
	FVector Velocity;

	//Kg
	UPROPERTY(EditAnywhere, category = "Kart Parameters")
	float Mass = 1000;

	UPROPERTY(EditAnywhere, category = "Kart Parameters")
	float MaxDrivingForce = 10000;

	UPROPERTY(EditAnywhere, category = "Kart Parameters")
	float MaxDegreesPerSecond = 90;

	float Throttle;
	float SteeringThrow;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void ApplyRotation(float DeltaTime);

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	void MoveForward(float Axis);
	void MoveRight(float Axis);
	void UpdateLocationFromVelocity(float DeltaTime);

};
