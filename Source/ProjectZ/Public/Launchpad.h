// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Launchpad.generated.h"

UCLASS()
class PROJECTZ_API ALaunchpad : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALaunchpad();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//2 Components, 1 Static Mesh for the LaunchPad Mesh and the Box Component for the player to be able to trigger it and get launched upwards.
	UPROPERTY(EditAnywhere, Category = "Launchpad")
		class UStaticMeshComponent* MeshComp;
	UPROPERTY(EditAnywhere, Category = "Launchpad")
		class UBoxComponent* TriggerBox;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
