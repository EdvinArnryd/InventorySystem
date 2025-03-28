#include "UserInterface/TetrisUI/InventoryItemWidget.h"
#include "UserInterface/TetrisUI/SlotWidget.h"
#include "UserInterface/TetrisUI/GridWidget.h"
#include "UserInterface/TetrisUI/InventoryDragDropOperation.h"

#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Components/Image.h"
#include "Components/Border.h"

void UInventoryItemWidget::NativeConstruct()
{
    Super::NativeConstruct();

    ItemWidth = 1;
    ItemHeight = 1;
    ItemID = FMath::Rand();

    if (ItemBorder)
    {
        ItemBorder->SetBrushColor(FLinearColor::White);
    }
}

void UInventoryItemWidget::SetItemIcon(UTexture2D* NewIcon)
{
    if (ItemIcon && NewIcon)
    {
        ItemIcon->SetBrushFromTexture(NewIcon);
    }
}


FReply UInventoryItemWidget::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& MouseEvent)
{
    if (MouseEvent.IsMouseButtonDown(EKeys::LeftMouseButton))
    {
        if (ParentGridWidget && OriginalSlot)
        {
            ParentGridWidget->OnItemDragStarted.Broadcast(this, OriginalSlot);
        }

        return UWidgetBlueprintLibrary::DetectDragIfPressed(MouseEvent, this, EKeys::LeftMouseButton).NativeReply;
    }

    return FReply::Unhandled();
}


void UInventoryItemWidget::NativeOnDragDetected(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent, UDragDropOperation*& OutOperation)
{
    UInventoryDragDropOperation* DragOp = Cast<UInventoryDragDropOperation>(
        UWidgetBlueprintLibrary::CreateDragDropOperation(UInventoryDragDropOperation::StaticClass())
    );

    if (DragOp)
    {
        DragOp->DraggedItem = this;

        // Visual for the dragged item
        UImage* DraggedImage = NewObject<UImage>(this);
        FSlateBrush Brush = ItemIcon->GetBrush();
        Brush.ImageSize = FVector2D(60.f, 60.f);

        if (DraggedImage)
        {
            DraggedImage->SetBrush(Brush);
            DraggedImage->SetOpacity(0.5f);
        }

        DragOp->DefaultDragVisual = DraggedImage;

        // Ensure OriginalSlot is stored before dragging
        if (ParentGridWidget && OriginalSlot)
        {
            ParentGridWidget->OnItemDragStarted.Broadcast(this, OriginalSlot);
        }

        OutOperation = DragOp;
    }
}




