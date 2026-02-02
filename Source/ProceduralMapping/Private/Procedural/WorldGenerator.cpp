// Fill out your copyright notice in the Description page of Project Settings.


#include "Procedural/WorldGenerator.h"
#include "Procedural/Rooms/RB_Room_1.h"
#include "Procedural/RoomBase.h"


AWorldGenerator::AWorldGenerator()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AWorldGenerator::BeginPlay()
{
	Super::BeginPlay();
	
	SpawnStarterRoom();
	SpawnNextRoom();
}

void AWorldGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AWorldGenerator::SpawnStarterRoom()
{
	ARB_Room_1* SpawnedStarterRoom = this->GetWorld()->SpawnActor<ARB_Room_1>(StarterRoom);
	
	SpawnedStarterRoom->SetActorLocation(this->GetActorLocation());
	
	SpawnedStarterRoom->ExitPointsFolder->GetChildrenComponents(false, Exits);
}

void AWorldGenerator::SpawnNextRoom()
{
	ARoomBase* LatestSpawnedRoom = this->GetWorld()->SpawnActor<ARoomBase>(SpawnableRoomsArray[rand() % SpawnableRoomsArray.Num()]);
	
	USceneComponent* SelectedExitPoint = Exits[rand() % Exits.Num()];
	
	LatestSpawnedRoom->SetActorLocation(SelectedExitPoint->GetComponentLocation());
	LatestSpawnedRoom->SetActorRotation(SelectedExitPoint->GetComponentRotation());
	
	MaxSpawnableRooms = MaxSpawnableRooms - 1;
	
	if (MaxSpawnableRooms > 0)
	{
		SpawnNextRoom();
	}
}
