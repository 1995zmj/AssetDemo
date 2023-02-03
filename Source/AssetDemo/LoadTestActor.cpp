// Fill out your copyright notice in the Description page of Project Settings.


#include "LoadTestActor.h"
#include "Engine/AssetManager.h"
// Sets default values
ALoadTestActor::ALoadTestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALoadTestActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALoadTestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ALoadTestActor::LoadTestSoftClassPtr()
{
	/*auto myClass = TestSoftClassPtr.LoadSynchronous();
	GetWorld()->SpawnActor<AActor>(myClass);*/

	TSharedPtr<FStreamableHandle> SyncStreamableHandle = UAssetManager::GetStreamableManager().RequestSyncLoad(TestSoftClassPtr.ToSoftObjectPath());
}

