// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "KeyCards.h"
#include "Doors.generated.h"

UCLASS()
class ADVGAMESPROJECT_API ADoors : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADoors();

	




protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* StaticMesh = nullptr;

	USceneComponent* SceneComponent = nullptr;

	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Compare keycard to a door
	UPROPERTY(EditAnywhere)
	Type typeofcard;

	float StartPosition;
	float CurrentDoorPosition;

	UPROPERTY(EditAnywhere)
		float EndPosition = 150;

	UPROPERTY(EditAnywhere)
		float DoorSpeed = 0.2f;

	void OpenDoor(float DeltaTime);

	bool open = false;
};
