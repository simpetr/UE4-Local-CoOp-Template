// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "CoOpGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class LOCALCOOPTEMPLATE_API UCoOpGameInstance : public UGameInstance
{
	GENERATED_BODY()

	UCoOpGameInstance(const FObjectInitializer& ObjectInitializer);
	virtual void Init() override;

	UPROPERTY()
	int Players;

public:
	UFUNCTION()
	int GetPlayers() const;
};
