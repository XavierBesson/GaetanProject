// Fill out your copyright notice in the Description page of Project Settings.


#include "Bille.h"

// Sets default values
ABille::ABille()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABille::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABille::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



void ABille::Fusion()
{
	BilleColor = BLUE;

}

