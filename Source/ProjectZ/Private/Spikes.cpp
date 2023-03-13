// Fill out your copyright notice in the Description page of Project Settings.


#include "Spikes.h"

// Sets default values
ASpikes::ASpikes()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Creates the mesh for the spikes and sets it as the root component, then creates the collision box and attaches it to the root component.
	SpikesMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SpikesMesh"));
	RootComponent = SpikesMesh;

	SpikesCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("SpikesCollision"));
	SpikesCollision->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ASpikes::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASpikes::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

