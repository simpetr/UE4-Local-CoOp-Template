// Fill out your copyright notice in the Description page of Project Settings.


#include "CoOpGameInstance.h"

UCoOpGameInstance::UCoOpGameInstance(const FObjectInitializer& ObjectInitializer):Super(ObjectInitializer)
{
}

void UCoOpGameInstance::Init()
{
	Super::Init();
}

int UCoOpGameInstance::GetPlayers() const
{
	return Players;
}
