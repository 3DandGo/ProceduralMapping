// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Procedural/RoomBase.h"
#include "RB_Room_3.generated.h"

class UStaticMeshComponent;
class UArrowComponent;

UCLASS()
class PROCEDURALMAPPING_API ARB_Room_3 : public ARoomBase
{
	GENERATED_BODY()
	
public:
	
	ARB_Room_3();
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UArrowComponent* ExitArrow_1;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UArrowComponent* ExitArrow_2;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStaticMeshComponent* ClosingWall;
};
