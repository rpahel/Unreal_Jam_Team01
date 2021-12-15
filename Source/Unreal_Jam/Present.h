// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Present.generated.h"

UCLASS()
class UNREAL_JAM_API APresent : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APresent();

	UPROPERTY(BlueprintReadWrite)
	bool HasAKey;

	UPROPERTY(EditAnywhere)
	class AGameManager* gameManager;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* MeshComponent;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
