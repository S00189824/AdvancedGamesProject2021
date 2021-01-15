// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "KeyCards.generated.h"


UENUM(BlueprintType)
enum Type
{
	Red,
	Blue,
	Green
};

UCLASS()
class ADVGAMESPROJECT_API AKeyCards : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AKeyCards();

	

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* StaticMesh = nullptr;

	USceneComponent* SceneComponent = nullptr;//root Component

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USphereComponent* SphereComponent = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<Type>Type;



public:
	// Sets default values for this actor's properties
	virtual void Tick(float DeltaTime) override;

public:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

};
