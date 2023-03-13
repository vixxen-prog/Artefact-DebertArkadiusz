// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/RotatingMovementComponent.h"
#include "Components/BoxComponent.h"
#include "HealthPickup.generated.h"

UCLASS()
class PROJECTZ_API AHealthPickup : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AHealthPickup();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void Tick(float DeltaTime);

	void NotifyActorBeingOverlap(AActor* OtherActor);

	//3 different components, Mesh, Box Collision, and the rotating movement component for the heart to rotate around
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Components")
		UBoxComponent* BoxComp;
	UPROPERTY(EditAnywhere, Category = "Components")
		UStaticMeshComponent* HeartComp;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Components")
		URotatingMovementComponent* RotatingMov;

public:
};
