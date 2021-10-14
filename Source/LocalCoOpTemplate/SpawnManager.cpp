// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnManager.h"
#include "CoOpGameInstance.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ASpawnManager::ASpawnManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpawnManager::BeginPlay()
{
	Super::BeginPlay();
	UCoOpGameInstance* GI = Cast<UCoOpGameInstance>(GetWorld()->GetGameInstance());
	if(GI)
	{
		Players = GI->GetPlayers();
		UE_LOG(LogTemp,Warning,TEXT("%d"),Players)
	}
	
}

// Called every frame
void ASpawnManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

