// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Procedural/RoomBase.h"
#include "RB_Room_5.generated.h"

class UArrowComponent;

UCLASS()
class PROCEDURALMAPPING_API ARB_Room_5 : public ARoomBase
{
	GENERATED_BODY()

public:
	
	ARB_Room_5();
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UArrowComponent* ExitArrow_1;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UArrowComponent* ExitArrow_2;
};
