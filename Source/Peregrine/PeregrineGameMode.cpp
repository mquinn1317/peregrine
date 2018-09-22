// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "PeregrineGameMode.h"
#include "PeregrinePlayerController.h"
#include "PeregrinePawn.h"

APeregrineGameMode::APeregrineGameMode()
{
	// no pawn by default
	DefaultPawnClass = APeregrinePawn::StaticClass();
	// use our own player controller class
	PlayerControllerClass = APeregrinePlayerController::StaticClass();
}
