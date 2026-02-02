// Fill out your copyright notice in the Description page of Project Settings.


#include "Procedural/WorldGenerator.h"
#include "Procedural/Rooms/RB_Room_1.h"


AWorldGenerator::AWorldGenerator()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AWorldGenerator::BeginPlay()
{
	Super::BeginPlay();
}

void AWorldGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AWorldGenerator::SpawnStarterRoom()
{
	ARB_Room_1* SpawnedStarterRoom = this->GetWorld()->SpawnActor<ARB_Room_1>(StarterRoom);
}