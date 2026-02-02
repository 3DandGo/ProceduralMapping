// Fill out your copyright notice in the Description page of Project Settings.


#include "Procedural/RoomBase.h"

#include "MovieSceneSequenceID.h"
#include "Chaos/AABBTree.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"


ARoomBase::ARoomBase()
{
	PrimaryActorTick.bCanEverTick = true;
	
	DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>("DefaultSceneRoot");
	GeometryFolder = CreateDefaultSubobject<USceneComponent>("GeometryFolder");
	OverlapFolder = CreateDefaultSubobject<USceneComponent>("OverlapFolder");
	ExitPointsFolder = CreateDefaultSubobject<USceneComponent>("ExitPointsFolder");
	
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
	
	SetRootComponent(DefaultSceneRoot);
	GeometryFolder->SetupAttachment(DefaultSceneRoot);
	OverlapFolder->SetupAttachment(DefaultSceneRoot);
	ExitPointsFolder->SetupAttachment(DefaultSceneRoot);
	
	DirectionArrow->SetupAttachment(DefaultSceneRoot);
	
	BoxCollision->SetupAttachment(OverlapFolder);
	
	Cube_1->SetupAttachment(GeometryFolder);
	Cube_2->SetupAttachment(GeometryFolder);
	Cube_3->SetupAttachment(GeometryFolder);
	Cube_4->SetupAttachment(GeometryFolder);
	Cube_5->SetupAttachment(GeometryFolder);
	Cube_6->SetupAttachment(GeometryFolder);
	Cube_7->SetupAttachment(GeometryFolder);
	Cube_8->SetupAttachment(GeometryFolder);
	Floor->SetupAttachment(GeometryFolder);
	
	DirectionArrow->bHiddenInGame = false;
}

void ARoomBase::BeginPlay()
{
	Super::BeginPlay();
	
}

void ARoomBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

