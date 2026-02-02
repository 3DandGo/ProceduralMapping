// Fill out your copyright notice in the Description page of Project Settings.


#include "Procedural/Rooms/RB_Room_5.h"
#include "Components/ArrowComponent.h"

ARB_Room_5::ARB_Room_5()
{
	ExitArrow_1 = CreateDefaultSubobject<UArrowComponent>("Exit Arrow 1");
	ExitArrow_2 = CreateDefaultSubobject<UArrowComponent>("Exit Arrow 2");
	
	ExitArrow_1->SetupAttachment(ExitPointsFolder);
	ExitArrow_2->SetupAttachment(ExitPointsFolder);
}
