// Fill out your copyright notice in the Description page of Project Settings.


#include "Launchpad.h"

// Sets default values
ALaunchpad::ALaunchpad()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Mesh Component Setup for the Launchpad Mesh and Trigger Box Component Setup for the trigger to Launch the player.
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetupAttachment(RootComponent);

	TriggerBox = CreateDefaultSubobject<UBoxComponent>(TEXT("TriggerBox"));
	TriggerBox->SetupAttachment(MeshComp);

}

// Called when the game starts or when spawned
void ALaunchpad::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ALaunchpad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

