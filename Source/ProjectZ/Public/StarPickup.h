// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/RotatingMovementComponent.h"
#include "Components/BoxComponent.h"
#include "StarPickup.generated.h"

UCLASS()
class PROJECTZ_API AStarPickup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStarPickup();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//3 different components, Mesh, Box Collision, and the rotating movement component for the star to rotate around
	UPROPERTY(EditAnywhere, Category = "Components")
		class UStaticMeshComponent* MeshComp;
	UPROPERTY(EditAnywhere, Category = "Components")
		class UBoxComponent* BoxComp;
	UPROPERTY(EditAnywhere, Category = "Components")
		class URotatingMovementComponent* RotatingMov;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
