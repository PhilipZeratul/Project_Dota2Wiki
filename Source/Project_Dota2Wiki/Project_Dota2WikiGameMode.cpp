// Copyright Epic Games, Inc. All Rights Reserved.

#include "Project_Dota2WikiGameMode.h"
#include "Project_Dota2WikiCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProject_Dota2WikiGameMode::AProject_Dota2WikiGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
