// Copyright Epic Games, Inc. All Rights Reserved.

#include "uetpscppGameMode.h"
#include "uetpscppCharacter.h"
#include "UObject/ConstructorHelpers.h"

AuetpscppGameMode::AuetpscppGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
