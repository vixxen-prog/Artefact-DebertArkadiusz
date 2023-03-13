// Fill out your copyright notice in the Description page of Project Settings.


#include "Sign.h"

// Sets default values
ASign::ASign()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//The Sign Text and Trigger will be attached to the SignMesh and then edited in the Blueprint.
	SignMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SignMesh"));
	SignText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("SignText"));
	SignTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("SignTrigger"));
	
	RootComponent = SignMesh;
	SignText->SetupAttachment(RootComponent);
	SignTrigger->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void ASign::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASign::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

