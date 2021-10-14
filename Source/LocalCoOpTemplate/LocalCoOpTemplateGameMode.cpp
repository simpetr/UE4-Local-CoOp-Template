// Copyright Epic Games, Inc. All Rights Reserved.

#include "LocalCoOpTemplateGameMode.h"
#include "LocalCoOpTemplateCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALocalCoOpTemplateGameMode::ALocalCoOpTemplateGameMode()
{
	// set default pawn class to our Blueprinted character
	/*static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}*/
}
