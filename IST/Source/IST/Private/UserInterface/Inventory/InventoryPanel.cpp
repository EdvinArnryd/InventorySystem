// Fill out your copyright notice in the Description page of Project Settings.


#include "UserInterface/Inventory/InventoryPanel.h"
#include "IST/ISTCharacter.h"
#include "Components/TextBlock.h"
#include "Components/InventoryComponent.h"
#include "UserInterface/Inventory/InventoryItemSlot.h"
#include "Components/WrapBox.h"
#include "IST/TP_TopDownPlayerController.h"
#include "Items/ItemBase.h"


void UInventoryPanel::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	// FIX: Get the Controller, not the Pawn
	APlayerController* PlayerController = GetOwningPlayer();
	if (PlayerController)
	{
		PlayerCharacter = Cast<ATP_TopDownPlayerController>(PlayerController);
		if (PlayerCharacter)
		{
			InventoryReference = PlayerCharacter->GetInventory(); // Now correctly gets inventory from Controller
			if (InventoryReference)
			{
				InventoryReference->OnInventoryUpdated.AddUObject(this, &UInventoryPanel::RefreshInventory);
			}
		}
	}
}

void UInventoryPanel::RefreshInventory()
{
	if (InventoryReference && InventorySlotClass)
	{
		InventoryPanel->ClearChildren();
		for (UItemBase* const& InventoryItem : InventoryReference->GetInventoryContents())
		{
			UInventoryItemSlot* ItemSlot = CreateWidget<UInventoryItemSlot>(this, InventorySlotClass);
			ItemSlot->SetItemReference(InventoryItem);
			
			InventoryPanel->AddChildToWrapBox(ItemSlot);
		}
	}
}

bool UInventoryPanel::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent,
	UDragDropOperation* InOperation)
{
	return Super::NativeOnDrop(InGeometry, InDragDropEvent, InOperation);
}
