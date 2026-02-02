// Fill out your copyright notice in the Description page of Project Settings.


#include "Procedural/Rooms/RB_Room_1.h"
#include "Components/ArrowComponent.h"

ARB_Room_1::ARB_Room_1()
{
	ExitArrow_1 = CreateDefaultSubobject<UArrowComponent>("Exit Arrow 1");
	ExitArrow_2 = CreateDefaultSubobject<UArrowComponent>("Exit Arrow 2");
	ExitArrow_3 = CreateDefaultSubobject<UArrowComponent>("Exit Arrow 3");
	
	ExitArrow_1->SetupAttachment(ExitPointsFolder);
	ExitArrow_2->SetupAttachment(ExitPointsFolder);
	ExitArrow_3->SetupAttachment(ExitPointsFolder);
}
