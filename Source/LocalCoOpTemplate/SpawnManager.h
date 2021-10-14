// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "SpawnManager.generated.h"

class ACharacter;
UCLASS()
class LOCALCOOPTEMPLATE_API ASpawnManager : public AActor
{
	GENERATED_BODY()


	
public:	
	// Sets default values for this actor's properties
	ASpawnManager();
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category = "Settings")
	TSubclassOf<ACharacter> CharacterToSpawn;

	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category = "Settings")
	TArray<FVector> SpawnLocations;
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	int Players;



};
