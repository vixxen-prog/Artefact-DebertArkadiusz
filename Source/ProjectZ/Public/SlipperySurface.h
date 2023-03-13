// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "SlipperySurface.generated.h"

UCLASS()
class PROJECTZ_API ASlipperySurface : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASlipperySurface();

protected:

    //2 Components and 2 Variables, one for the trigger so it knows when to activate and one for the plane so you can see the area in the editor,
    //the variables are for hiding and showing the plane in the game and the double is for the size of the plane.
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Components")
        UBoxComponent* BoxComp;
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Components")
        UStaticMeshComponent* PlaneComp;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables")
        bool ShowPlane;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables")
        double Size;

public:
    virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
};
