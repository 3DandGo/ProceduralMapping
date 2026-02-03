// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WorldGenerator.generated.h"

class ARoomBase;

UCLASS()
class PROCEDURALMAPPING_API AWorldGenerator : public AActor
{
	GENERATED_BODY()
	
public:	
	AWorldGenerator();
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(EditAnywhere, Category = "Rooms")
	TSubclassOf<class ARB_Room_1> StarterRoom;
	
	UPROPERTY(EditAnywhere, Category = "Rooms")
	TArray<TSubclassOf<ARoomBase>> SpawnableRoomsArray;
	
	UPROPERTY(EditAnywhere, Category = "Rooms")
	int32 MaxSpawnableRooms;
	
	UPROPERTY()
	TArray<USceneComponent*> Exits;
	
	UPROPERTY()
	ARoomBase* LatestSpawnedRoom;
	
	UPROPERTY()
	bool bCanSpawn;
	
	UFUNCTION(BLueprintCallable)
	void SpawnStarterRoom();
	
	UFUNCTION(BLueprintCallable)
	void SpawnNextRoom();

	UFUNCTION(BLueprintCallable)
	void RemoveOverlappingRooms();
	
protected:

	virtual void BeginPlay() override;
	
};
