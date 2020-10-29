// Copyright Epic Games, Inc. All Rights Reserved.

#include "GeometrixGameMode.h"
#include "GeometrixCharacter.h"
#include "MyPawn.h"
#include "UObject/ConstructorHelpers.h"

AGeometrixGameMode::AGeometrixGameMode()
{
	// set default pawn class to our Blueprinted character
//	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
//	if (PlayerPawnBPClass.Class != NULL)
//	{
//		DefaultPawnClass = PlayerPawnBPClass.Class;
//	}
    DefaultPawnClass = AMyPawn::StaticClass();
}
