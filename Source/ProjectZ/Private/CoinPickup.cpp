// Fill out your copyright notice in the Description page of Project Settings.

#include "CoinPickup.h"
#include "Components/SphereComponent.h"
#include "Components/DecalComponent.h"

// Sets default values
ACoinPickup::ACoinPickup()
{
	//The Sphere Component and Decal Component are created and attached to the root component.
	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp")); 
	SphereComp->SetSphereRadius(75); 
	RootComponent = SphereComp;

	//The Decal Component is set to a size so it reflects onto the player.
	DecalComp = CreateDefaultSubobject<UDecalComponent>(TEXT("DecalComp"));
	DecalComp->SetRelativeLocation(FVector(0.0f, 0.0f, 5));
	DecalComp->DecalSize = FVector(70, 70, 70);
	DecalComp-> SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ACoinPickup::BeginPlay()
{
	Super::BeginPlay();
}

void ACoinPickup::NotifyActorBeginOverlap(AActor* OtherActor)
{	
	Super::NotifyActorBeginOverlap(OtherActor);
}
