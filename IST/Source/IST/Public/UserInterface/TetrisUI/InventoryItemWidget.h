#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InventoryItemWidget.generated.h"

class UInventoryToolTip;
class UGridWidget;
class USlotWidget;
class UImage;
class UBorder;
class UItemBase;

UCLASS()
class IST_API UInventoryItemWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	FORCEINLINE void SetItemReference(UItemBase* ItemIn) { ItemReference = ItemIn; };
	FORCEINLINE UItemBase* GetItemReference() const { return ItemReference; }
	
	virtual void NativeConstruct() override;

	int32 GetItemWidth() const { return ItemWidth; }

	int32 GetItemHeight() const { return ItemHeight; }

	int32 GetItemID() const { return ItemID; }

	virtual FReply NativeOnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;

	void SetItemIcon(UTexture2D* NewIcon);

	virtual void NativeOnDragDetected(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent, UDragDropOperation*& OutOperation) override;
	
	UPROPERTY()
	USlotWidget* OriginalSlot = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ItemWidth = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ItemHeight = 1;

	UPROPERTY()
	UGridWidget* ParentGridWidget;
	
protected:
	
	virtual void NativeOnInitialized() override;
	virtual void NativeOnMouseLeave(const FPointerEvent& InMouseEvent) override;

	UPROPERTY(VisibleAnywhere, Category="Inventory Slot")
	UItemBase* ItemReference;

	UPROPERTY(EditDefaultsOnly, Category="Inventory Slot")
	TSubclassOf<UInventoryToolTip> ToolTipClass;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item")
	int32 ItemID;

	UPROPERTY(meta = (BindWidget))
	UImage* ItemIcon;

	UPROPERTY(meta = (BindWidget))
	UBorder* ItemBorder;
};
