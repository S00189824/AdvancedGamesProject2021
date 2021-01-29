// Fill out your copyright notice in the Description page of Project Settings.

#include "AdvGamesProjectCharacter.h"
#include "KeyCards.h"


// Sets default values
AKeyCards::AKeyCards()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	RootComponent = SceneComponent;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	StaticMesh->SetupAttachment(RootComponent);

	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	SphereComponent->SetupAttachment(RootComponent);
	SphereComponent->InitSphereRadius(100.0f);
	SphereComponent->SetGenerateOverlapEvents(true);
	SphereComponent->ShapeColor = FColor::Red;
	SphereComponent->SetupAttachment(RootComponent);

	UE_LOG(LogTemp, Warning, TEXT("Test"));
}

// Called when the game starts or when spawned
void AKeyCards::BeginPlay()
{
	Super::BeginPlay();
	
}

void AKeyCards::NotifyActorBeginOverlap(AActor* OtherActor)
{
	UE_LOG(LogTemp, Warning, TEXT("Overlapping"));
	if (OtherActor)
	{
		// creating a method for overlap on object
		if (OtherActor->IsA(AAdvGamesProjectCharacter::StaticClass()))
		{
			Destroy();
		}
	}
}

// Called every frame
void AKeyCards::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

