// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "ScardyCat.h"
#include "ScardyCatGameMode.h"
#include "ScardyCatCharacter.h"

AScardyCatGameMode::AScardyCatGameMode()
{
	// set default pawn class to our character
	DefaultPawnClass = AScardyCatCharacter::StaticClass();	
}
