// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
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

};
