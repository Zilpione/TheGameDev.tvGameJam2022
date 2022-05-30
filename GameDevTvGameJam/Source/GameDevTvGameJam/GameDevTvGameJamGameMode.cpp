// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameDevTvGameJamGameMode.h"
#include "GameDevTvGameJamCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGameDevTvGameJamGameMode::AGameDevTvGameJamGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/BP_Player"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
