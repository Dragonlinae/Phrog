// Copyright Epic Games, Inc. All Rights Reserved.

#include "PhrogGameMode.h"
#include "PhrogCharacter.h"
#include "UObject/ConstructorHelpers.h"

APhrogGameMode::APhrogGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
