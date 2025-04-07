// Fill out your copyright notice in the Description page of Project Settings.


#include "UserInterface/MainMenu.h"
#include "UserInterface/Inventory/ItemDragDropOperation.h"

#include "Items/ItemBase.h"
#include "UserInterface/TetrisUI/InventoryDragDropOperation.h"

void UMainMenu::NativeOnInitialized()
{
	Super::NativeOnInitialized();
}

void UMainMenu::NativeConstruct()
{
	Super::NativeConstruct();

	PlayerCharacter = Cast<ATP_TopDownPlayerController>(GetOwningPlayer());
}

// bool UMainMenu::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent,
// 	UDragDropOperation* InOperation)
// {
// 	//return Super::NativeOnDrop(InGeometry, InDragDropEvent, InOperation);
//
// 	// const UItemDragDropOperation* ItemDragDrop = Cast<UItemDragDropOperation>(InOperation);
// 	const UInventoryDragDropOperation* ItemDragDrop = Cast<UInventoryDragDropOperation>(InOperation);
// 	
// 	if (PlayerCharacter && ItemDragDrop->SourceItem)
// 	{
// 		PlayerCharacter->DropItem(ItemDragDrop->SourceItem);
// 		UE_LOG(LogTemp, Warning, TEXT("Drop item function should trigger"));
// 		return true;
// 	}
//
// 	UE_LOG(LogTemp, Warning, TEXT("NativeOndrop called"));
//
// 	// Keep looking here and in the player controller: DropItem
// 	// Write debug logs and try to solve it
// 	
// 	return false;
// }

bool UMainMenu::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	UE_LOG(LogTemp, Warning, TEXT("NativeOnDrop triggered"));

	if (!InOperation)
	{
		UE_LOG(LogTemp, Error, TEXT("InOperation is null"));
		return false;
	}

	const UInventoryDragDropOperation* ItemDragDrop = Cast<UInventoryDragDropOperation>(InOperation);
	if (!ItemDragDrop)
	{
		UE_LOG(LogTemp, Error, TEXT("Cast to UInventoryDragDropOperation failed"));
		return false;
	}

	if (!ItemDragDrop->SourceItem)
	{
		UE_LOG(LogTemp, Error, TEXT("ItemDragDrop->SourceItem is null"));
		return false;
	}

	if (!PlayerCharacter)
	{
		PlayerCharacter = Cast<ATP_TopDownPlayerController>(GetOwningPlayer());
	}

	if (!PlayerCharacter)
	{
		UE_LOG(LogTemp, Error, TEXT("PlayerCharacter is null"));
		return false;
	}

	PlayerCharacter->DropItem(ItemDragDrop->SourceItem);
	UE_LOG(LogTemp, Warning, TEXT("DropItem called successfully"));
	return true;
}


