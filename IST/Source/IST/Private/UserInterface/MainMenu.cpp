// Fill out your copyright notice in the Description page of Project Settings.


#include "UserInterface/MainMenu.h"
#include "UserInterface/Inventory/ItemDragDropOperation.h"

#include "IST/ISTCharacter.h"
#include "Items/ItemBase.h"

void UMainMenu::NativeOnInitialized()
{
	Super::NativeOnInitialized();
}

void UMainMenu::NativeConstruct()
{
	Super::NativeConstruct();

	PlayerCharacter = Cast<ATP_TopDownPlayerController>(GetOwningPlayerPawn());
}

bool UMainMenu::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent,
	UDragDropOperation* InOperation)
{
	//return Super::NativeOnDrop(InGeometry, InDragDropEvent, InOperation);

	const UItemDragDropOperation* ItemDragDrop = Cast<UItemDragDropOperation>(InOperation);

	if (PlayerCharacter && ItemDragDrop->SourceItem)
	{
		//PlayerCharacter->DropItem(ItemDragDrop->SourceItem, ItemDragDrop->SourceItem->Quantity);
		return true;
	}
	return false;
}
