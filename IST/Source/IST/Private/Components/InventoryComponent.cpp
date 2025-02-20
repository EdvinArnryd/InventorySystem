// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/InventoryComponent.h"

#include "Items/ItemBase.h"

// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ... 
}



// Called when the game starts
void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

UItemBase* UInventoryComponent::FindMatchingItem(UItemBase* ItemIn) const
{
	if (ItemIn)
	{
		if (InventoryContents.Contains(ItemIn))
		{
			return ItemIn;
		}
	}
	return nullptr;
}

UItemBase* UInventoryComponent::FindNextItemByID(UItemBase* ItemIn) const
{
	if (ItemIn)
	{
		if (const TArray<TObjectPtr<UItemBase>>::ElementType* Result = InventoryContents.FindByKey(ItemIn))
		{
			return *Result;
		}
	}
	return nullptr;
}

void UInventoryComponent::RemoveSingleInstanceOfItem(UItemBase* ItemToRemove)
{
	InventoryContents.RemoveSingle(ItemToRemove);
	OnInventoryUpdated.Broadcast();
}

int32 UInventoryComponent::RemoveAmountOfItem(UItemBase* ItemIn)
{
	// Fix function to be const or something
	ItemIn->RemoveItem();
	
	OnInventoryUpdated.Broadcast();
	
	return 1;
}

FItemAddResult UInventoryComponent::HandleNonStackableItems(UItemBase* ItemIn, int32 RequestedAddAmount)
{
	//This line is the only necessary one, imo
	AddNewItem(ItemIn, 1);
	
	return FItemAddResult::AddedAll(1, FText::Format(
			FText::FromString("Successfully added a single {0} to the inventory."), ItemIn->TextData.Name));
}

int32 UInventoryComponent::HandleStackableItems(UItemBase* ItemIn, int32 RequestedAddAmount)
{
	return 0;
}

FItemAddResult UInventoryComponent::HandleAddItem(UItemBase* InputItem)
{
	if (GetOwner())
	{
		// const int32 InitialRequestedAddAmount = InputItem->Quantity;

		// handle non-stackable items
		if (true)
		{
			return HandleNonStackableItems(InputItem, 1);
		}

		// handle stackable
		// const int32 StackableAmountAdded = HandleStackableItems(InputItem, InitialRequestedAddAmount);
		//
		// if (StackableAmountAdded == InitialRequestedAddAmount)
		// {
		// 	return FItemAddResult::AddedAll(InitialRequestedAddAmount, FText::Format(
		// 		FText::FromString("Successfully added {0} {1} to the inventory."),
		// 		InitialRequestedAddAmount,
		// 		InputItem->TextData.Name));
		// }
		//
		// if (StackableAmountAdded < InitialRequestedAddAmount && StackableAmountAdded > 0)
		// {
		// 	return FItemAddResult::AddedPartial(StackableAmountAdded, FText::Format(
		// 		FText::FromString("Partial amount of {0} added to the inventory. Number added = {1}"),
		// 		InputItem->TextData.Name,
		// 		StackableAmountAdded));
		// }
		//
		// if (StackableAmountAdded <= 0)
		// {
		// 	return FItemAddResult::AddedNone(FText::Format(
		// 		FText::FromString("Couldn't add {0} to the inventory. No remaining inventory slots, or invalid item."),
		// 		InputItem->TextData.Name));
		// }
	}

	check(false);
	return FItemAddResult::AddedNone(FText::FromString("TryAddItem fallthrough error. GetOwner() check somehow failed."));
}

void UInventoryComponent::AddNewItem(UItemBase* Item, const int32 AmountToAdd)
{
	UItemBase* NewItem;

	if (Item->bIsCopy || Item->bIsPickup)
	{
		// if the item is already a copy or is a world pickup
		NewItem = Item;
		NewItem->ResetItemFlags();
	}
	else
	{
		// used when splitting or dragging to/from another inventory
		NewItem = Item->CreateItemCopy();
	}

	NewItem->OwningInventory = this;
	// NewItem->SetQuantity(AmountToAdd);

	InventoryContents.Add(NewItem);
	// InventoryTotalWeight += NewItem->GetItemStackWeight();
	OnInventoryUpdated.Broadcast();
}

// void UInventoryComponent::RemoveItem()
// {
// 	InventoryContents.Pop();
// 	OnInventoryUpdated.Broadcast();
// }




