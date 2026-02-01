// Fill out your copyright notice in the Description page of Project Settings.


#include "Procedural/RoomBase.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"


ARoomBase::ARoomBase()
{
	PrimaryActorTick.bCanEverTick = true;
	
	Cube_1 = CreateDefaultSubobject<UStaticMeshComponent>("Cube One");
	Cube_2 = CreateDefaultSubobject<UStaticMeshComponent>("Cube Two");
	Cube_3 = CreateDefaultSubobject<UStaticMeshComponent>("Cube Three");
	Cube_4 = CreateDefaultSubobject<UStaticMeshComponent>("Cube Four");
	Cube_5 = CreateDefaultSubobject<UStaticMeshComponent>("Cube Five");
	Cube_6 = CreateDefaultSubobject<UStaticMeshComponent>("Cube Six");
	Cube_7 = CreateDefaultSubobject<UStaticMeshComponent>("Cube Seven");
	Cube_8 = CreateDefaultSubobject<UStaticMeshComponent>("Cube Eight");
	
	Floor = CreateDefaultSubobject<UStaticMeshComponent>("Floor");
	
	BoxCollision = CreateDefaultSubobject<UBoxComponent>("Box Collision");
	
	DirectionArrow = CreateDefaultSubobject<UArrowComponent>("Direction Arrow");

}

void ARoomBase::BeginPlay()
{
	Super::BeginPlay();
	
}

void ARoomBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

