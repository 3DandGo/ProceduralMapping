// Fill out your copyright notice in the Description page of Project Settings.


#include "Procedural/Rooms/RB_Room_3.h"
#include "Components/ArrowComponent.h"

ARB_Room_3::ARB_Room_3()
{
	ExitArrow_1 = CreateDefaultSubobject<UArrowComponent>("Exit Arrow 1");
	ExitArrow_2 = CreateDefaultSubobject<UArrowComponent>("Exit Arrow 2");
	ClosingWall = CreateDefaultSubobject<UStaticMeshComponent>("Closing Wall");
	
	ExitArrow_1->SetupAttachment(ExitPointsFolder);
	ExitArrow_2->SetupAttachment(ExitPointsFolder);
	ClosingWall->SetupAttachment(GeometryFolder);
}
