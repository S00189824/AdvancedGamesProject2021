// Fill out your copyright notice in the Description page of Project Settings.


#include "KeyCards.h"
#include "Doors.h"

// Sets default values
ADoors::ADoors()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	
	PrimaryActorTick.bCanEverTick = true;

	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	RootComponent = SceneComponent;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	StaticMesh->SetupAttachment(RootComponent);

	
}

// Called when the game starts or when spawned
void ADoors::BeginPlay()
{
	Super::BeginPlay();
	StartPosition = GetActorLocation().Z;
	CurrentDoorPosition = StartPosition;
}


//If Overlap with keycard then Open Specified door

void ADoors::OpenDoor(float DeltaTime)
{
	CurrentDoorPosition = FMath::FInterpConstantTo(CurrentDoorPosition, StartPosition - EndPosition, DeltaTime, DoorSpeed);
	FVector OpenDoorPosition = GetActorLocation();
	OpenDoorPosition.Z = CurrentDoorPosition;

	SetActorLocation(OpenDoorPosition);
}

// Called every frame
void ADoors::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (open)
		OpenDoor(DeltaTime);
}



