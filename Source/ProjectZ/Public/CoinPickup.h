// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CoinPickup.generated.h"

class USphereComponent;
class UDecalComponent;

UCLASS()
class PROJECTZ_API ACoinPickup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACoinPickup();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Adds 2 components, a sphere and a decal to represent the coin and shine.
	//They are both able to be edited anywhere.
	UPROPERTY(EditAnywhere, Category = "Components")
	USphereComponent* SphereComp;

	UPROPERTY(EditAnywhere, Category = "Components")
	UDecalComponent* DecalComp;


public:	
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
};
