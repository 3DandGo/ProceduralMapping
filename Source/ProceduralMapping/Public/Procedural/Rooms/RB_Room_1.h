// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Procedural/RoomBase.h"
#include "RB_Room_1.generated.h"

class UArrowComponent;

UCLASS()
class PROCEDURALMAPPING_API ARB_Room_1 : public ARoomBase
{
	GENERATED_BODY()
	
public:
	
	ARB_Room_1();
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UArrowComponent* ExitArrow_1;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UArrowComponent* ExitArrow_2;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UArrowComponent* ExitArrow_3;
};
