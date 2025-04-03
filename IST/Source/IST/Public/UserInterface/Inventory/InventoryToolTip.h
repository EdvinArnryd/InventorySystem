// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UserInterface/TetrisUI/InventoryItemWidget.h"
#include "InventoryToolTip.generated.h"

class UTextBlock;
class UInventoryItemSlot;
/**
 * 
 */
UCLASS()
class IST_API UInventoryToolTip : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;

public:
	// UInventoryItemSlot* InventorySlotBeingHovered;

	UInventoryItemWidget* InventorySlotBeingHovered;
	UPROPERTY(meta=(BindWidget))
	UTextBlock* ItemName;

	UPROPERTY(meta=(BindWidget))
	UTextBlock* ItemType;

	UPROPERTY(meta=(BindWidget))
	UTextBlock* DamageValue;

	UPROPERTY(meta=(BindWidget))
	UTextBlock* ArmorRating;

	UPROPERTY(meta=(BindWidget))
	UTextBlock* ItemDescription;

	UPROPERTY(meta=(BindWidget))
	UTextBlock* SellValue;
};
