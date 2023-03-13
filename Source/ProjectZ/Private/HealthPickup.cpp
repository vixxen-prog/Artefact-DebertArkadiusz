// Fill out your copyright notice in the Description page of Project Settings.

#include "HealthPickup.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/RotatingMovementComponent.h"

// Sets default values
AHealthPickup::AHealthPickup()
{

	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Components are added, The box component is set to overlap all dynamic objects so the player can trigger it,
	//the heart is attached to the box component, and the rotating movement component is attached to the box component.
	BoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	BoxComp->SetBoxExtent(FVector(25, 25, 25));
	BoxComp->SetupAttachment(RootComponent);
	BoxComp->SetCollisionProfileName("OverlapAllDynamic");

	HeartComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Heart"));
	HeartComp->SetupAttachment(BoxComp);

	RotatingMov = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("RotatingMov"));
	RotatingMov->RotationRate = FRotator(0, 90, 0);
	RotatingMov->UpdatedComponent = BoxComp;
}

// Called when the game starts or when spawned
void AHealthPickup::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AHealthPickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

