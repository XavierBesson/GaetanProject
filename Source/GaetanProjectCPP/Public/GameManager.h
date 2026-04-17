// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Kismet/GameplayStatics.h"
#include "GameManager.generated.h"





UCLASS()
class GAETANPROJECTCPP_API UGameManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	

public :
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float _currentLevelTimer = 0.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<float> _levelTimer;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float _totalTimer = 0.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int _currentLevel = 0;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FString> _levelList;


	UFUNCTION(BlueprintCallable)
	void LoadLevel(int levelID);

	UFUNCTION(BlueprintCallable)
	void SetTotalTimer();

	UFUNCTION(BlueprintCallable)
	void IncrementTimer(float deltaTime);

};
