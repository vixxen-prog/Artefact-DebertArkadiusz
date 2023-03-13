// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "FallingPlatform.generated.h"

UCLASS()
class PROJECTZ_API AFallingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFallingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Adds 2 components, a static mesh and a box component for collision detection.
	//You are able to see them anywhere as well as read them in blueprints.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Platform")
		class UStaticMeshComponent* MeshComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Platform")
		class UBoxComponent* TriggerBox;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
