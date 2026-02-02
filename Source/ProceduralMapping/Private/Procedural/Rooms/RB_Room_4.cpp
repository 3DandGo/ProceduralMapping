// Fill out your copyright notice in the Description page of Project Settings.


#include "Procedural/Rooms/RB_Room_4.h"
#include "Components/ArrowComponent.h"

ARB_Room_4::ARB_Room_4()
{
	ExitArrow_1 = CreateDefaultSubobject<UArrowComponent>("Exit Arrow 1");
	ClosingWall_1 = CreateDefaultSubobject<UStaticMeshComponent>("Closing Wall 1");
	ClosingWall_2 = CreateDefaultSubobject<UStaticMeshComponent>("Closing Wall 2");

	
	ExitArrow_1->SetupAttachment(ExitPointsFolder);
	ClosingWall_1->SetupAttachment(GeometryFolder);
	ClosingWall_2->SetupAttachment(GeometryFolder);
}
