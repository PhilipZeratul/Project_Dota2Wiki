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

UCLASS(BlueprintType)
class PROJECT_DOTA2WIKI_API UHeroDataAsset : public UDataAsset
{
	GENERATED_BODY()

	//UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FString HeroName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	TEnumAsByte<EHeroAttribute> HeroAttribute;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	UTexture2D* HeroCardHorizontal;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	UTexture2D* HeroCardVertical;
};
