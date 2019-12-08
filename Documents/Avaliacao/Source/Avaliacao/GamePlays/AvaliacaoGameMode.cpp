// Fill out your copyright notice in the Description page of Project Settings.


#include "AvaliacaoGameMode.h"
#include "Character/AvaliacaoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAvaliacaoGameMode::AAvaliacaoGameMode()
{
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
