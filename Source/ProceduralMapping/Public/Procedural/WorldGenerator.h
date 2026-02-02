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
	
	UFUNCTION(BLueprintCallable)
	void SpawnStarterRoom();

protected:

	virtual void BeginPlay() override;
	
};
