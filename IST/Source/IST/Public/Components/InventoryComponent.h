// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InventoryComponent.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnInventoryUpdated);

class UItemBase;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class IST_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:

	FOnInventoryUpdated OnInventoryUpdated;

	UInventoryComponent();

	UFUNCTION(Category = "Inventory")
	bool HandleAddItem(UItemBase* InputItem);
	
	UFUNCTION(Category = "Inventory")
	UItemBase* FindMatchingItem(UItemBase* ItemIn) const;
	
	UFUNCTION(Category = "Inventory")
	void RemoveItem(UItemBase* ItemIn);
	
	UFUNCTION(Category = "Inventory")
	FORCEINLINE TArray<UItemBase*> GetInventoryContents() const { return InventoryContents; };

protected:

	UPROPERTY(VisibleAnywhere, Category="Inventory")
	TArray<TObjectPtr<UItemBase>> InventoryContents;
	
	virtual void BeginPlay() override;

	void AddNewItem(UItemBase* Item);
};
