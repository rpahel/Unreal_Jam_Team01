// Fill out your copyright notice in the Description page of Project Settings.


#include "Present.h"
#include "GameManager.h"
// Sets default values
APresent::APresent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = MeshComponent;
	this->Tags.Add(FName("Present"));
}

// Called when the game starts or when spawned
void APresent::BeginPlay()
{
	Super::BeginPlay();
	if (this == nullptr)
	{
		return;
	}
	else
	{
		gameManager->AllPresent.Add(this);
	}
}

// Called every frame
void APresent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

