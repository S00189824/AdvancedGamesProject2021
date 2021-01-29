// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "KeyCards.h"
#include "Doors.h"
#include "MyPlayerState.generated.h"


/**
 * 
 */
UCLASS()
class ADVGAMESPROJECT_API AMyPlayerState : public APlayerState
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	FString PName;

	UPROPERTY(VisibleAnywhere)
	TArray<Type> KeyCardType;

	UFUNCTION(BlueprintCallable)
	void AddKey(Type keycardstoAdd);

	UFUNCTION(BlueprintCallable)
		void KeyCard(ADoors* KeyReq);

	
	
};
