// Fill out your copyright notice in the Description page of Project Settings.


#include "GM_BatteryMan.h"
#include "GameFramework/Actor.h"


AGM_BatteryMan::AGM_BatteryMan() 
{
	PrimaryActorTick.bCanEverTick = true;
}

void AGM_BatteryMan::BeginPlay() 
{
	Super::BeginPlay();

	FTimerHandle UnusedHandle;
	GetWorldTimerManager().SetTimer(UnusedHandle, this, &AGM_BatteryMan::SpawnPlayerRecharge, FMath::RandRange(2, 5), true);
}

void AGM_BatteryMan::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AGM_BatteryMan::SpawnPlayerRecharge()
{
	float RandX = FMath::RandRange(Spawn_X_Min, Spawn_X_Max);
	float RandY = FMath::RandRange(Spawn_Y_Min, Spawn_Y_Max);

	FVector SpawnPosition = FVector(RandX, RandY, Spawn_Z);
	FRotator SpawnRotation = FRotator(0.0f, 0.0f, 0.0f);
	
	GetWorld()->SpawnActor(PlayerRecharge, &SpawnPosition, &SpawnRotation);
}

