// Fill out your copyright notice in the Description page of Project Settings.


#include "UserInterface/Inventory/InventoryToolTip.h"

#include "Components/TextBlock.h"
#include "UserInterface/Inventory/InventoryItemSlot.h"
#include "Items/ItemBase.h"

void UInventoryToolTip::NativeConstruct()
{
	Super::NativeConstruct();

	UItemBase* ItemBeingHovered = InventorySlotBeingHovered->GetItemReference();

	switch (ItemBeingHovered->ItemType)
	{
	case EItemType::Armor:
		ItemType->SetText(FText::FromString("Armor"));
		break;
	case EItemType::Weapon:
		ItemType->SetText(FText::FromString("Weapon"));
		break;
	case EItemType::Shield:
		ItemType->SetText(FText::FromString("Shield"));
		break;
	case EItemType::Consumable:
		ItemType->SetText(FText::FromString("Consumable"));
		break;
	case EItemType::Scroll:
		ItemType->SetText(FText::FromString("Scroll"));
		break;
	default:;
	}

	ItemName->SetText(ItemBeingHovered->TextData.Name);
	DamageValue->SetText(FText::AsNumber(ItemBeingHovered->ItemStatistics.DamageValue));
	ArmorRating->SetText(FText::AsNumber(ItemBeingHovered->ItemStatistics.ArmorValue));
	UsageText->SetText(ItemBeingHovered->TextData.UsageText);
	ItemDescription->SetText(ItemBeingHovered->TextData.Description);
	SellValue->SetText(FText::AsNumber(ItemBeingHovered->ItemStatistics.SellValue));

	// if (ItemBeingHovered->NumericData.bIsStackable)
	// {
	// 	MaxStackSize->SetText(FText::AsNumber(ItemBeingHovered->NumericData.MaxStackSize));
	// }
	// else
	// {
	// 	MaxStackSize->SetVisibility(ESlateVisibility::Collapsed);
	// }
}
