// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DataAssetHero.generated.h"

USTRUCT()
struct FDataAssetHeroInfo {
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	FString HeroName;

	UPROPERTY(EditAnywhere)
	UTexture2D* HeroThumbnail;
};

UCLASS()
class PROJECT_DOTA2WIKI_API UDataAssetHero : public UDataAsset
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	TArray<FDataAssetHeroInfo> AssetItems;
};
