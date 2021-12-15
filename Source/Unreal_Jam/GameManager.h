// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameManager.generated.h"

UCLASS()
class UNREAL_JAM_API AGameManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGameManager();

	UPROPERTY(EditAnywhere)
	TArray<AActor*> AllPresent;
	
	UPROPERTY(EditAnywhere)
	int numberOfPresent;

	UPROPERTY(EditAnywhere)
	int maxKey;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY()
	bool makeRandom;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
