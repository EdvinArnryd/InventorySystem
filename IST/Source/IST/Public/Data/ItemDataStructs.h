#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ItemDataStructs.generated.h"

UENUM()
enum class EItemQuality : uint8
{
	Common UMETA(DisplayName = "Common"),
	Rare UMETA(DisplayName = "Rare"),
	Epic UMETA(DisplayName = "Epic"), 
	Legendary UMETA(DisplayName = "Legendary"),
};

UENUM()
enum class EItemType : uint8
{
	Armor UMETA(DisplayName = "Armor"), 
	Weapon UMETA(DisplayName = "Weapon"),
	Shield UMETA(DisplayName = "Shield"),
	Consumable UMETA(DisplayName = "Consumable"),
	Scroll UMETA(DisplayName = "Scroll"),
};

USTRUCT()
struct FItemStatistics
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere)
	float ArmorValue;
	UPROPERTY(EditAnywhere)
	float DamageValue;
	UPROPERTY(EditAnywhere)
	float SellValue;
};

USTRUCT()
struct FItemTextData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere)
	FText Name;
	UPROPERTY(EditAnywhere)
	FText Description;
};


USTRUCT()
struct FItemAssetData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere)
	UTexture2D* Icon;
	
	UPROPERTY(EditAnywhere)
	UStaticMesh* Mesh;
};

USTRUCT()
struct FItemData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, Category="Item Data")
	FName ID;

	UPROPERTY(EditAnywhere, Category="Item Data")
	EItemType ItemType;

	UPROPERTY(EditAnywhere, Category="Item Data") 
	EItemQuality ItemQuality;

	UPROPERTY(EditAnywhere, Category="Item Data")
	FItemStatistics ItemStatistics;

	UPROPERTY(EditAnywhere, Category="Item Data")
	FItemTextData TextData;

	UPROPERTY(EditAnywhere, Category="Item Data")
	FItemAssetData AssetData;
};