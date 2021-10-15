// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnManager.h"
#include "CoOpGameInstance.h"
#include "LocalCoOpTemplateCharacter.h"
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
	UCoOpGameInstance* GI = Cast<UCoOpGameInstance>(GetWorld()->GetGameInstance());
	if (GI)
	{
		//Players = GI->GetPlayers();
		UE_LOG(LogTemp, Warning, TEXT("%d"), Players)
	}

	if (SpawnLocations.Num() > 0)
	{
		for (int i = 0; i < 3; i++)
		{
			FActorSpawnParameters SpawnParameters;
			SpawnParameters.SpawnCollisionHandlingOverride =
				ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
			ACharacter* Player = GetWorld()->SpawnActor<ACharacter>(CharacterToSpawn, SpawnLocations[i],
			                                                        FRotator::ZeroRotator, SpawnParameters);
			if (!Player)
				PRINT_ERROR("PLAYER NULL");
			UGameplayStatics::CreatePlayer(GetWorld(), i);
			APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), i);

			if (Player && PlayerController)
			{
				PRINT_COMPLEX("Creato giocatore %d", i);
				PlayerController->Possess(Player);
			}
		}
	}
}
