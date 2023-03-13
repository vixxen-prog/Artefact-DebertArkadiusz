// Fill out your copyright notice in the Description page of Project Settings.


#include "SlipperySurface.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"

// Sets default values
ASlipperySurface::ASlipperySurface()
{
    //BoxComponent is setup so it the player will be able to trigger the event.
    //The plane is setup so it will be visible in the editor, has no collision so it does not impact the player's movement.
    BoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
    BoxComp->SetBoxExtent(FVector(50, 50, 10));
    BoxComp->SetupAttachment(RootComponent);
    BoxComp->SetCollisionProfileName("OverlapAllDynamic");

    PlaneComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Plane"));
    PlaneComp->SetCollisionProfileName("NoCollision");
    PlaneComp->SetStaticMesh(LoadObject<UStaticMesh>(NULL, TEXT("StaticMesh'/Engine/BasicShapes/Plane.Plane'")));
    PlaneComp->SetupAttachment(BoxComp);

    ShowPlane = true;
    Size = 1;
}

void ASlipperySurface::NotifyActorBeginOverlap(AActor* OtherActor)
{
    Super::NotifyActorBeginOverlap(OtherActor);
}
