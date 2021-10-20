// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnManager.generated.h"

class APawn;
UCLASS()
class LOCALCOOPTEMPLATE_API ASpawnManager : public AActor
{
	GENERATED_BODY()


	
public:	
	// Sets default values for this actor's properties
	ASpawnManager();

	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category = "Settings")
	int Players = 4;

	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category = "Settings")
	TArray<FVector> SpawnLocations;
	
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category = "Settings")
	TSubclassOf<APawn> DefaultCharacterToSpawn;

	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category = "Settings")
	uint32 bUseCustomCharacters:1;
	
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category = "Settings",meta=(EditCondition="bUseCustomCharacters"))
	TArray<TSubclassOf<APawn>> CustomCharacterToSpawn;


		

	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
private:
	void SpawnPlayerDefault();
	void SpawnPlayerCustom();
	


};
