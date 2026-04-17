// Fill out your copyright notice in the Description page of Project Settings.


#include "GameManager.h"
#include "Engine/Engine.h"

void UGameManager::LoadLevel(int levelID)
{
	if (_currentLevel >= 0)
	{
		SetTotalTimer();
	}
	_currentLevel = levelID;
	UGameplayStatics::OpenLevel(GetWorld(), FName(_levelList[levelID]));
}


void UGameManager::SetTotalTimer()
{
	_totalTimer += _currentLevelTimer;
	if (_levelTimer.IsValidIndex(_currentLevel))
	{
		_levelTimer[_currentLevel] = _currentLevelTimer;
	}
	_currentLevelTimer = 0;
}

void UGameManager::IncrementTimer(float deltaTime)
{
	_currentLevelTimer += deltaTime;
}