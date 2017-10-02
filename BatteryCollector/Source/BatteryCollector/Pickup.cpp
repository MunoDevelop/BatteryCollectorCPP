// Fill out your copyright notice in the Description page of Project Settings.

#include "Pickup.h"


// Sets default values
 APickup::APickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	bIsActive = true;

	//Create the static mesh component
	PickupMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Pickup Mesh"));
	
	
	
	RootComponent = (USceneComponent*)PickupMesh;
}

// Called when the game starts or when spawned
void APickup::BeginPlay()
{
	Super::BeginPlay();
	
}
class UStaticMeshComponent* APickup::GetMesh() const {
	return APickup::PickupMesh;
}
// Called every frame
void APickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool APickup::IsActive() {
	return bIsActive;
}

void APickup::SetActive(bool NewPickupState) {
	bIsActive = NewPickupState;
}

void APickup::WasCollected_Implementation() {
	FString PickupDenugString = GetName();
	UE_LOG(LogClass, Log, TEXT("You have collected %s"), *PickupDenugString);
}