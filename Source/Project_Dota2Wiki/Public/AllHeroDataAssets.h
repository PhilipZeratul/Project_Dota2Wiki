// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HeroDataAsset.h"
#include "Engine/DataAsset.h"
#include "AllHeroDataAssets.generated.h"

UCLASS()
class PROJECT_DOTA2WIKI_API UAllHeroDataAssets : public UDataAsset
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	TArray<UHeroDataAsset*> AllHeroDataAssets;
};
