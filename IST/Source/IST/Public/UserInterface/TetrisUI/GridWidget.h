#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/UniformGridPanel.h"
#include "GridWidget.generated.h"

class UItemBase;
class UInventoryComponent;
class ATP_TopDownPlayerController;
class UInventoryItemWidget;
class USlotWidget;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemDropped, USlotWidget*, TargetSlot, UInventoryItemWidget*, DroppedItem);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemDragStarted, UInventoryItemWidget*, Item, USlotWidget*, OriginalSlot);

UCLASS()
class IST_API UGridWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeOnInitialized() override;
	virtual void NativeConstruct() override;

	UFUNCTION()
	void RefreshInventory();

	UPROPERTY()
	ATP_TopDownPlayerController* PlayerCharacter;

	UPROPERTY()
	UInventoryComponent* InventoryReference;

	UPROPERTY(EditDefaultsOnly, Category = "Inventory")
	TSubclassOf<USlotWidget> SlotWidgetClass;

	UPROPERTY(EditDefaultsOnly, Category = "Inventory")
	TSubclassOf<UInventoryItemWidget> ItemWidgetClass;

	UPROPERTY()
	TArray<USlotWidget*> SlotArray;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Inventory")
	int32 GridRows = 10;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Inventory")
	int32 GridColumns = 10;

	bool CanPlaceItem(int32 GridX, int32 GridY);

	void ClearOccupiedSlots(UInventoryItemWidget* Item);

	void AddItemToGrid(UInventoryItemWidget* Item, int32 GridX, int32 GridY);

public:
	UPROPERTY(meta = (BindWidget))
	UUniformGridPanel* Grid;

	void PopulateGrid(int32 Rows, int32 Columns);

	void CreateNewItem(UItemBase* ItemReference);

	// Delegates
	UPROPERTY(BlueprintAssignable)
	FOnItemDropped OnItemDropped;

	UPROPERTY(BlueprintAssignable)
	FOnItemDragStarted OnItemDragStarted;

	// Handle delegate responses
	UFUNCTION()
	void HandleItemDrop(USlotWidget* TargetSlot, UInventoryItemWidget* Item);

	UFUNCTION()
	void HandleItemDragStarted(UInventoryItemWidget* Item, USlotWidget* OriginalSlot);

	UFUNCTION()
	void HighlightPotentialDropSlot(USlotWidget* TargetSlot, bool bIsValid);

};
