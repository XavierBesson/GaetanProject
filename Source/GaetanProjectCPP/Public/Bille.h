// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bille.generated.h"


enum EBilleColor {
	BLUE,
	RED,
	GREEN
};


UCLASS()
class GAETANPROJECTCPP_API ABille : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABille();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA")
	EBilleColor BilleColor = RED;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void Move();
	void Fusion();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
