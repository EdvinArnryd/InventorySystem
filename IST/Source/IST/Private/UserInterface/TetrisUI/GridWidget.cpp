#include "UserInterface/TetrisUI/GridWidget.h"

#include "Components/InventoryComponent.h"
#include "UserInterface/TetrisUI/InventoryItemWidget.h"
#include "UserInterface/TetrisUI/SlotWidget.h"

#include "Components/UniformGridPanel.h"
#include "Components/UniformGridSlot.h"
#include "IST/TP_TopDownPlayerController.h"
#include "UserInterface/Inventory/InventoryPanel.h"

void UGridWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	// FIX: Get the Controller, not the Pawn
	APlayerController* PlayerController = GetOwningPlayer();
	if (PlayerController)
	{
		PlayerCharacter = Cast<ATP_TopDownPlayerController>(PlayerController);
		if (PlayerCharacter)
		{
			InventoryReference = PlayerCharacter->GetInventory();
			if (InventoryReference)
			{
				InventoryReference->OnInventoryUpdated.AddUObject(this, &UGridWidget::RefreshInventory);
			}
		}
	}
}

void UGridWidget::RefreshInventory()
{
	if (InventoryReference && SlotWidgetClass)
	{
		// Grid->ClearChildren();
		for (UItemBase* const& InventoryItem : InventoryReference->GetInventoryContents())
		{
			UInventoryItemWidget* ItemSlot = CreateWidget<UInventoryItemWidget>(this, SlotWidgetClass);
			// Have to set this to be child of slot and get the item??
			// This has the be restructured to take the new slots into a count.
			ItemSlot->SetItemReference(InventoryItem);
			
			Grid->AddChildToUniformGrid(ItemSlot);
		}

		CreateNewItem();
	}
}

void UGridWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (Grid)
	{
		PopulateGrid(GridRows, GridColumns);

		// Ensure these bindings are added after PopulateGrid()
		OnItemDropped.AddDynamic(this, &UGridWidget::HandleItemDrop);
		OnItemDragStarted.AddDynamic(this, &UGridWidget::HandleItemDragStarted);
	}
}

void UGridWidget::PopulateGrid(int32 Rows, int32 Columns)
{
	if (!Grid || !SlotWidgetClass) return;

	Grid->ClearChildren();  // Clear any existing slots
	SlotArray.Empty();      // Clear slot array before repopulating
	SlotArray.SetNum(Rows * Columns); // Ensure the array is sized properly

	for (int32 Row = 0; Row < Rows; Row++)
	{
		for (int32 Col = 0; Col < Columns; Col++)
		{
			// Create a new slot widget
			USlotWidget* NewSlot = CreateWidget<USlotWidget>(GetWorld(), SlotWidgetClass);
			if (NewSlot)
			{
				// Store reference to the slot
				int32 SlotIndex = Row * Columns + Col;
				SlotArray[SlotIndex] = NewSlot;
				NewSlot->SlotId = SlotIndex;
				NewSlot->bIsOccupied = false; // Ensure slots start unoccupied

				// ✅ Assign the GridX and GridY values here
				NewSlot->GridX = Col; 
				NewSlot->GridY = Row;

				// Add slot to the grid
				NewSlot->ParentGridWidget = this;
				UUniformGridSlot* GridSlot = Grid->AddChildToUniformGrid(NewSlot, Row, Col);
				if (GridSlot)
				{
					GridSlot->SetHorizontalAlignment(EHorizontalAlignment::HAlign_Center);
					GridSlot->SetVerticalAlignment(EVerticalAlignment::VAlign_Center);
				}
			}
		}
	}
}

void UGridWidget::CreateNewItem()
{
	if (!Grid || !ItemWidgetClass) return;

	// Create the item widget
	UInventoryItemWidget* NewItem = CreateWidget<UInventoryItemWidget>(GetWorld(), ItemWidgetClass);
	if (!NewItem) return;

	// Find the first available slot
	for (int32 Row = 0; Row < GridRows; Row++)
	{
		for (int32 Col = 0; Col < GridColumns; Col++)
		{
			int32 SlotIndex = Row * GridColumns + Col;

			// Ensure the index is valid and slot is empty
			if (SlotArray.IsValidIndex(SlotIndex) && SlotArray[SlotIndex] && !SlotArray[SlotIndex]->IsOccupied())
			{
				// Place item in the first available slot
				UUniformGridSlot* GridSlot = Grid->AddChildToUniformGrid(NewItem, Row, Col);
				if (GridSlot)
				{
					GridSlot->SetHorizontalAlignment(EHorizontalAlignment::HAlign_Center);
					GridSlot->SetVerticalAlignment(EVerticalAlignment::VAlign_Center);
				}

				// Mark the slot as occupied
				SlotArray[SlotIndex]->SetOccupiedItem(NewItem);
				return; // Exit once item is placed
			}
		}
	}

	// UE_LOG(LogTemp, Warning, TEXT("No available slots to place item."));
}


void UGridWidget::HandleItemDrop(USlotWidget* TargetSlot, UInventoryItemWidget* Item)
{
	int32 NewGridX = TargetSlot->GridX;
	int32 NewGridY = TargetSlot->GridY;

	if (!CanPlaceItem(NewGridX, NewGridY))
	{
		// UE_LOG(LogTemp, Warning, TEXT("[HandleItemDrop] Cannot place item in slot %d, %d!"), NewGridX, NewGridY);
		return;
	}

	// ClearOccupiedSlots(Item);
	AddItemToGrid(Item, NewGridX, NewGridY);
}


bool UGridWidget::CanPlaceItem(int32 GridX, int32 GridY)
{
	int32 SlotIndex = GridY * GridColumns + GridX;
	
	if (!SlotArray.IsValidIndex(SlotIndex) || SlotArray[SlotIndex]->IsOccupied())
	{
		return false;
	}

	UE_LOG(LogTemp, Warning, TEXT("Printing SlotIndex->SlotId %d "), SlotArray[SlotIndex]->SlotId);
	return true;
}

// We have to clear the original slot. Currently the original slot loses its item but will still be considered occupied.
void UGridWidget::ClearOccupiedSlots(UInventoryItemWidget* Item)
{
	if (Item->OriginalSlot)
	{
		// Item->OriginalSlot->ClearSlot();
		// UE_LOG(LogTemp, Warning, TEXT("[ClearOccupiedSlots] Slot %d CLEARED."), Item->OriginalSlot->SlotId);
	}
}


void UGridWidget::AddItemToGrid(UInventoryItemWidget* Item, int32 GridX, int32 GridY)
{
	int32 SlotIndex = GridY * GridColumns + GridX;

	if (SlotArray.IsValidIndex(SlotIndex))
	{
		SlotArray[SlotIndex]->SetOccupiedItem(Item);
		// UE_LOG(LogTemp, Warning, TEXT("[AddItemToGrid] Slot %d, %d MARKED AS OCCUPIED"), GridX, GridY);
	}

	// Visually place item in UI
	UUniformGridSlot* GridSlot = Grid->AddChildToUniformGrid(Item, GridX, GridY);
	if (GridSlot)
	{
		GridSlot->SetHorizontalAlignment(EHorizontalAlignment::HAlign_Center);
		GridSlot->SetVerticalAlignment(EVerticalAlignment::VAlign_Center);
	}
}



void UGridWidget::HandleItemDragStarted(UInventoryItemWidget* Item, USlotWidget* OriginalSlot)
{
	if (Item)
	{
		Item->OriginalSlot = OriginalSlot;
	}
}

void UGridWidget::HighlightPotentialDropSlot(USlotWidget* TargetSlot, bool bIsValid)
{
	if (TargetSlot)
	{
		TargetSlot->HighlightSlot(bIsValid);  // Calls the SlotWidget's highlight function
	}
}







