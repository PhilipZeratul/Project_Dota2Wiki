// Copyright Phillix.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HeroDataAsset.generated.h"

UENUM()
enum EHeroAttribute
{
	Strength, Agility, Intelligence, Universal
};

UCLASS()
class PROJECT_DOTA2WIKI_API UHeroDataAsset : public UDataAsset
{
	GENERATED_BODY()

	//UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	
	
	UPROPERTY(EditDefaultsOnly)
	FString HeroName;

	UPROPERTY(EditDefaultsOnly)
	TEnumAsByte<EHeroAttribute> HeroAttribute;

	UPROPERTY(EditDefaultsOnly)
	UTexture2D* HeroCardHorizontal;

	UPROPERTY(EditDefaultsOnly)
	UTexture2D* HeroCardVertical;
};
