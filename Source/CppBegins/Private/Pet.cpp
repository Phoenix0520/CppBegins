// Fill out your copyright notice in the Description page of Project Settings.


#include "Pet.h"
#include "Engine.h"

// Sets default values
APet::APet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Magenta, L"Start!");
	UE_LOG(LogTemp, Log, L"HelloWorld");
}

// Called when the game starts or when spawned
void APet::BeginPlay()
{
	Super::BeginPlay();
	
}
	
// Called every frame
void APet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

