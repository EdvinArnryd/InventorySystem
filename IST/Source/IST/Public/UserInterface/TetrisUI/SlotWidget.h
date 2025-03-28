#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SlotWidget.generated.h"

class UOverlay;
class UBorder;
class UInventoryItemWidget;
class UGridWidget;


UCLASS()
class IST_API USlotWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	int32 SlotId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 GridX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 GridY;
	
	virtual void NativeConstruct() override;
	
	void HighlightSlot(bool bIsValid);

	void SetOccupiedItem(UInventoryItemWidget* Item);

	void ClearSlot();

	bool IsOccupied() const;
	
	UInventoryItemWidget* GetOccupiedItem() const;

	virtual bool NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& DragDropEvent, UDragDropOperation* InOperation) override;
	
	UPROPERTY()
	UGridWidget* ParentGridWidget;
	
	bool bIsOccupied = false;

protected:
	virtual void NativeOnDragEnter(const FGeometry& InGeometry, const FDragDropEvent& DragDropEvent, UDragDropOperation* InOperation) override;

	virtual void NativeOnDragLeave(const FDragDropEvent& DragDropEvent, UDragDropOperation* InOperation) override;
	
	UPROPERTY()
	UInventoryItemWidget* OccupiedItem = nullptr;

	UPROPERTY(meta = (BindWidget))
	UBorder* SlotBorder;

	void ResetSlotBorderColor();

	UPROPERTY(meta = (BindWidget))
	UOverlay* SlotOverlay;

	FLinearColor DefaultColor = FLinearColor::White;
	
	FLinearColor HoverColor = FLinearColor::Yellow;
};
