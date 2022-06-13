// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Containers/EnumAsByte.h"
#include "Item_Data_Asset.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class Type_Inventory_Item_Enum_ : uint8
{
	None UMETA(DisplayName = None),
	Weapon UMETA(DisplayName = Weapon),
	Resurses UMETA(DisplayName = Resurses)

	};


UCLASS(BlueprintType)
class STOLE_DAVINCHY_API UItem_Data_Asset : public UDataAsset
{

	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FText Name;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int Count;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UTexture2D* Image;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	Type_Inventory_Item_Enum_ Type;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<AActor> ActorClass;

};
