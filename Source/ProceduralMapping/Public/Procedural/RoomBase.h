// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RoomBase.generated.h"

class UStaticMeshComponent;
class USceneComponent;

UCLASS()
class PROCEDURALMAPPING_API ARoomBase : public AActor
{
	GENERATED_BODY()
	
public:	
	
	ARoomBase();
	virtual void Tick(float DeltaTime) override;

protected:
	
	virtual void BeginPlay() override;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components");
	USceneComponent* DefaultSceneRoot;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components");
	USceneComponent* GeometryFolder;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components");
	USceneComponent* OverlapFolder;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components");
	USceneComponent* ExitPointsFolder;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* Cube_1;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components");
	UStaticMeshComponent* Cube_2;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components");
	UStaticMeshComponent* Cube_3;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components");
	UStaticMeshComponent* Cube_4;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components");
	UStaticMeshComponent* Cube_5;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components");
	UStaticMeshComponent* Cube_6;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components");
	UStaticMeshComponent* Cube_7;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components");
	UStaticMeshComponent* Cube_8;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components");
	UStaticMeshComponent* Floor;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components");
	class UBoxComponent* BoxCollision;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components");
	class UArrowComponent* DirectionArrow;
	
};