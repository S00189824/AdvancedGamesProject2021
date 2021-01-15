// Copyright Epic Games, Inc. All Rights Reserved.

#include "AdvGamesProjectGameMode.h"
#include "AdvGamesProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAdvGamesProjectGameMode::AAdvGamesProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
