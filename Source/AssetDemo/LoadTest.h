// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LoadTest.generated.h"

UCLASS()
class ASSETDEMO_API ALoadTest : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALoadTest();

	UPROPERTY(Category = MyTest1, EditAnywhere)
	TSoftObjectPtr<UTexture2D> SourceTexture1;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
