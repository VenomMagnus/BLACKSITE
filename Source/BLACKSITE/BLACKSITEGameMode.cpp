// Copyright Epic Games, Inc. All Rights Reserved.

#include "BLACKSITEGameMode.h"
#include "BLACKSITECharacter.h"
#include "UObject/ConstructorHelpers.h"

ABLACKSITEGameMode::ABLACKSITEGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
