// Fill out your copyright notice in the Description page of Project Settings.


#include "StarPickup.h"

// Sets default values
AStarPickup::AStarPickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Components are added, The box component is set to overlap all dynamic objects so the player can trigger it,
	//the star is attached to the box component, and the rotating movement component is attached to the box component.
	BoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	BoxComp->SetBoxExtent(FVector(25, 25, 25));
	BoxComp->SetupAttachment(RootComponent);
	BoxComp->SetCollisionProfileName("OverlapAllDynamic");

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	MeshComp->SetupAttachment(BoxComp);

	RotatingMov = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("RotatingMov"));
	RotatingMov->RotationRate = FRotator(0, 90, 0);
	RotatingMov->UpdatedComponent = BoxComp;

}

// Called when the game starts or when spawned
void AStarPickup::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStarPickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

