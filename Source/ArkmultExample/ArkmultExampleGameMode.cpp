// Copyright Epic Games, Inc. All Rights Reserved.

#include "ArkmultExampleGameMode.h"
#include "ArkmultExampleCharacter.h"
#include "UObject/ConstructorHelpers.h"

AArkmultExampleGameMode::AArkmultExampleGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
