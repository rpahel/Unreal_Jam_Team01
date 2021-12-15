// Fill out your copyright notice in the Description page of Project Settings.


#include "GameManager.h"
#include "Present.h"

// Sets default values
AGameManager::AGameManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AGameManager::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AGameManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (!makeRandom)
	{
		if (AllPresent.Num() == numberOfPresent)
		{
			if (maxKey > 0)
			{
				int random = rand() % AllPresent.Num();
				APresent* thisPresent = Cast<APresent>(AllPresent[random]);
				thisPresent->HasAKey = true;
				maxKey -= 1;
				AllPresent.Remove(AllPresent[random]);
			}
		}
	}
}

