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
public:
	//UCoOpGameInstance(const FObjectInitializer& ObjectInitializer);
	/*virtual void Init() override;
	virtual void Shutdown() override;
	virtual void StartGameInstance() override;*/
	//int GetPlayers() const;
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category = "Settings")
	int Players =3;

	
};
