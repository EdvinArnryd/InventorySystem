// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/ItemBase.h"
#include "Components/InventoryComponent.h"
#include "IST/TP_TopDownPlayerController.h"

UItemBase::UItemBase() : bIsCopy(false), bIsPickup(false)
{
}

void UItemBase::ResetItemFlags()
{
	bIsCopy = false;
	bIsPickup = false;
}

UItemBase* UItemBase::CreateItemCopy()
{
	UItemBase* ItemCopy = NewObject<UItemBase>(GetOuter(), StaticClass());
    
	ItemCopy->ID = this->ID;
	ItemCopy->ItemQuality = this->ItemQuality;
	ItemCopy->ItemType = this->ItemType;
	ItemCopy->TextData = this->TextData;
	ItemCopy->ItemStatistics = this->ItemStatistics;
	ItemCopy->AssetData = this->AssetData;
	ItemCopy->bIsCopy = true;

	return ItemCopy;
}

void UItemBase::RemoveItem()
{
	OwningInventory->RemoveSingleInstanceOfItem(this);
}

