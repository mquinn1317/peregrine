// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "PeregrinePlayerController.h"

APeregrinePlayerController::APeregrinePlayerController()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableTouchEvents = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}
