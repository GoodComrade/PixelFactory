// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "PixelFactoryGameMode.h"
#include "PixelFactoryHUD.h"
#include "PixelFactoryCharacter.h"
#include "UObject/ConstructorHelpers.h"

APixelFactoryGameMode::APixelFactoryGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = APixelFactoryHUD::StaticClass();
}
