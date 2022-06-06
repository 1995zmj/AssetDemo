// Copyright Epic Games, Inc. All Rights Reserved.

#include "AssetDemoGameMode.h"
#include "AssetDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAssetDemoGameMode::AAssetDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
