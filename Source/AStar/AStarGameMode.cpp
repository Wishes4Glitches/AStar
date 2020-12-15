// Copyright Epic Games, Inc. All Rights Reserved.

#include "AStarGameMode.h"
#include "AStarCharacter.h"

AAStarGameMode::AAStarGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AAStarCharacter::StaticClass();	
}
