// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Components/TextRenderComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Sign.generated.h"

UCLASS()
class PROJECTZ_API ASign : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASign();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//3 Components, Mesh for the SignBox, Text Render so the player is able to know that they can interact with it, and a Box Component for the trigger
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sign")
		class UStaticMeshComponent* SignMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sign")
		class UTextRenderComponent* SignText;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sign")
		class UBoxComponent* SignTrigger;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
