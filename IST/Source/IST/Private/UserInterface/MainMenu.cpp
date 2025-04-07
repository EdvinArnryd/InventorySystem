// Fill out your copyright notice in the Description page of Project Settings.


#include "UserInterface/MainMenu.h"
#include "UserInterface/Inventory/ItemDragDropOperation.h"

#include "Items/ItemBase.h"

void UMainMenu::NativeOnInitialized()
{
	Super::NativeOnInitialized();
}

void UMainMenu::NativeConstruct()
{
	Super::NativeConstruct();

	PlayerCharacter = Cast<ATP_TopDownPlayerController>(GetOwningPlayer());
}

bool UMainMenu::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent,
	UDragDropOperation* InOperation)
{
	//return Super::NativeOnDrop(InGeometry, InDragDropEvent, InOperation);

	// const UItemDragDropOperation* ItemDragDrop = Cast<UItemDragDropOperation>(InOperation);
	//
	// if (PlayerCharacter && ItemDragDrop->SourceItem)
	// {
	// 	PlayerCharacter->DropItem(ItemDragDrop->SourceItem);
	// 	return true;
	// }
	UE_LOG(LogTemp, Display, TEXT("UMainMenu::NativeOnDrop"));

	// Keep looking here and in the player controller: DropItem
	// Write debug logs and try to solve it
	
	return false;
}
