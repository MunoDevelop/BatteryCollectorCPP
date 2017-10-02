// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//#include "Engine.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
//#include "Classes/Engine/World.h"

#include "SpawnVolume.generated.h"

UCLASS()
class BATTERYCOLLECTOR_API ASpawnVolume : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnVolume();

	virtual void BeginPlay() override;
protected:
	
	
	UPROPERTY(EditAnywhere, Category = "Spawning")
	TSubclassOf<class APickup> WhatToSpawn;
	// Called when the game starts or when spawned
	FTimerHandle SpawnTimer;

	/* Minimum spawn delay*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
		float SpawnDelayRangeLow;
	/* Maximum spawn delay*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
		float SpawnDelayRangeHigh;

	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	FORCEINLINE class UBoxComponent * GetWhereToSpawn() const { return WhereToSpawn; }
	UFUNCTION(BlueprintPure,Category = "Spawning")
	FVector GetRandomPointInVolume();

private:
	UPROPERTY(VisibleAnywhere,  Category = "Spawning", meta = (AllowPrivateAcess = "true"))
	class UBoxComponent* WhereToSpawn;
	
	void SpawnPickup();

	float SpawnDelay;
};
