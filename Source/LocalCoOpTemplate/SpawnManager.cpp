// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnManager.h"
#include "Kismet/GameplayStatics.h"

#define PRINT_ERROR(text) if (GEngine) GEngine->AddOnScreenDebugMessage(-5,2.f, FColor::Red,TEXT(text),false)
#define PRINT(text) if (GEngine) GEngine->AddOnScreenDebugMessage(-1,2.f, FColor::Green,TEXT(text),false)
#define PRINT_COMPLEX(x,...) if (GEngine) {GEngine->AddOnScreenDebugMessage(-1,2.f, FColor::Green,FString::Printf(TEXT(x), __VA_ARGS__));}


// Sets default values
ASpawnManager::ASpawnManager()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
}


// Called when the game starts or when spawned
void ASpawnManager::BeginPlay()
{
	Super::BeginPlay();
	if (bUseCustomCharacters)
		SpawnPlayerCustom();
	else
		SpawnPlayerDefault();
}

void ASpawnManager::SpawnPlayerDefault()
{
	if (SpawnLocations.Num() > 0 && Players> 0)
	{
		FActorSpawnParameters SpawnParameters;
		SpawnParameters.SpawnCollisionHandlingOverride =
            ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
		for (int i = 0; i < Players; i++)
		{
			APawn* Player = GetWorld()->SpawnActor<APawn>(DefaultCharacterToSpawn, SpawnLocations[i],
			                                              FRotator::ZeroRotator, SpawnParameters);

			if (Player)
			{
				UGameplayStatics::CreatePlayer(GetWorld(), i);
				APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), i);

				if (PlayerController)
				{
					PlayerController->Possess(Player);
					PRINT_COMPLEX("Created player %d", i);
				}
			}
		}
	}else
	{
		PRINT_ERROR("Check Blueprint Parameters");
	}
	
}

void ASpawnManager::SpawnPlayerCustom()
{
	if (SpawnLocations.Num() > 0 && CustomCharacterToSpawn.Num() >= Players)
	{
		FActorSpawnParameters SpawnParameters;
		SpawnParameters.SpawnCollisionHandlingOverride =
			ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
		for (int i = 0; i < Players; i++)
		{
			APawn* Player = GetWorld()->SpawnActor<APawn>(CustomCharacterToSpawn[i], SpawnLocations[i],
			                                              FRotator::ZeroRotator, SpawnParameters);

			if (Player)
			{
				UGameplayStatics::CreatePlayer(GetWorld(), i);
				APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), i);

				if (PlayerController)
				{
					PlayerController->Possess(Player);
					PRINT_COMPLEX("Created player %d", i);
				}
			}
		}
	}else
	{
		PRINT_ERROR("Check Blueprint Parameters");
	}
}
