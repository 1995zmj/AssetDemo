// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LoadTestActor.generated.h"

UCLASS()
class ASSETDEMO_API ALoadTestActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALoadTestActor();

	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	FSoftObjectPath TestSoftObjectPath;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FSoftClassPath TestSoftClassPath;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSoftObjectPtr<UStaticMesh> TestSoftObjectPtr;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSoftClassPtr<AActor> TestSoftClassPtr;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void LoadTestSoftClassPtr();
};
