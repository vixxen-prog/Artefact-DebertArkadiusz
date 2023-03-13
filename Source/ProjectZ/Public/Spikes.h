// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Spikes.generated.h"

UCLASS()
class PROJECTZ_API ASpikes : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpikes();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//2 Components, Mesh for the Spikes and the Trigger Box for damaging the player.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spikes")
		class UBoxComponent* SpikesCollision;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spikes")
		class UStaticMeshComponent* SpikesMesh;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
