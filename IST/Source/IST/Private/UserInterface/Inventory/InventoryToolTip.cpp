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

	FText DamageText = FText::Format(FText::FromString("Damage: {0}"),
		FText::AsNumber(ItemBeingHovered->ItemStatistics.DamageValue));
	DamageValue->SetText(DamageText);

	FText ArmorText = FText::Format(FText::FromString("Armor: {0}"),
		FText::AsNumber(ItemBeingHovered->ItemStatistics.ArmorValue));
	ArmorRating->SetText(ArmorText);
	
	ItemDescription->SetText(ItemBeingHovered->TextData.Description);

	FText SellValueText = FText::Format(FText::FromString("Sell value: {0}"),
		FText::AsNumber(ItemBeingHovered->ItemStatistics.SellValue));
	SellValue->SetText(SellValueText);

	// if (ItemBeingHovered->NumericData.bIsStackable)
	// {
	// 	MaxStackSize->SetText(FText::AsNumber(ItemBeingHovered->NumericData.MaxStackSize));
	// }
	// else
	// {
	// 	MaxStackSize->SetVisibility(ESlateVisibility::Collapsed);
	// }
}
