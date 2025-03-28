#include "UserInterface/TetrisUI/SlotWidget.h"
#include "UserInterface/TetrisUI/InventoryItemWidget.h"
#include "UserInterface/TetrisUI/GridWidget.h"
#include "UserInterface/TetrisUI/InventoryDragDropOperation.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Components/Border.h"
#include "Components/Overlay.h"

void USlotWidget::NativeConstruct()
{
    Super::NativeConstruct();

    ResetSlotBorderColor();
}

UInventoryItemWidget* USlotWidget::GetOccupiedItem() const
{
    return OccupiedItem;
}

bool USlotWidget::IsOccupied() const
{
    return OccupiedItem != nullptr;
}

bool USlotWidget::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& DragDropEvent, UDragDropOperation* InOperation)
{
    UInventoryDragDropOperation* DragOp = Cast<UInventoryDragDropOperation>(InOperation);

    if (DragOp && DragOp->DraggedItem)
    {
        if (ParentGridWidget)
        {
            //This made it work, stops the code from adding item to a slot if it is occupied.
            
            if (!this->IsOccupied())
            {
                if (DragOp->DraggedItem->OriginalSlot)
                {
                    DragOp->DraggedItem->OriginalSlot->ClearSlot();
                }
            
                SetOccupiedItem(DragOp->DraggedItem);
            
                ParentGridWidget->OnItemDropped.Broadcast(this, DragOp->DraggedItem);
            
                DragOp->DraggedItem->OriginalSlot = this;
            }
            
            ResetSlotBorderColor();
        }

        return true;
    }

    return false;
}

void USlotWidget::SetOccupiedItem(UInventoryItemWidget* Item)
{
    if (IsOccupied())
    {
        return;
    }

    if (Item)
    {
        OccupiedItem = Item;
        SlotOverlay->AddChild(Item);
        Item->OriginalSlot = this;
    }
}

void USlotWidget::ClearSlot()
{
    if (OccupiedItem)
    {
        OccupiedItem->RemoveFromParent();
        OccupiedItem = nullptr;

        ResetSlotBorderColor();
    }
}

void USlotWidget::NativeOnDragEnter(const FGeometry& InGeometry, const FDragDropEvent& DragDropEvent, UDragDropOperation* InOperation)
{
    if (ParentGridWidget)
    {
        if (IsOccupied())
        {
            ParentGridWidget->HighlightPotentialDropSlot(this, false);
        }
        else
        {
            ParentGridWidget->HighlightPotentialDropSlot(this, true);
        }
    }
}

void USlotWidget::NativeOnDragLeave(const FDragDropEvent& DragDropEvent, UDragDropOperation* InOperation)
{
    ResetSlotBorderColor();
}

void USlotWidget::ResetSlotBorderColor()
{
    if (SlotBorder)
    {
        SlotBorder->SetBrushColor(FLinearColor::White);
    }
}

void USlotWidget::HighlightSlot(bool bIsValid)
{
    if (SlotBorder)
    {
        FLinearColor HighlightColor = bIsValid ? FLinearColor::Green : FLinearColor::Red;
        SlotBorder->SetBrushColor(HighlightColor);
    }
}
