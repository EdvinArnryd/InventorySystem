// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interfaces/InteractionInterface.h"
#include "IST/ISTCharacter.h"
#include "IST/TP_TopDownCharacter.h"
#include "IST/TP_TopDownPlayerController.h"
#include "Pickup.generated.h"

class UInteractionText;
class UItemBase;

UCLASS()
class IST_API APickup : public AActor, public IInteractionInterface
{
	GENERATED_BODY()
	
public:
	APickup();

	void InitializePickup(const TSubclassOf<UItemBase> BaseClass);

	void InitializeDrop(UItemBase* ItemToDrop);

	FORCEINLINE UItemBase* GetItemData() { return ItemReference; };
	
	virtual void BeginFocus() override;
	virtual void EndFocus() override;
	
	virtual void Interact(ATP_TopDownPlayerController* PlayerCharacter) override;

	
protected:
	UPROPERTY(VisibleAnywhere, Category="Pickup | Components")
	UStaticMeshComponent* PickupMesh;

	UPROPERTY(EditInstanceOnly, Category="Pickup | Item Initialization")
	UDataTable* ItemDataTable;

	UPROPERTY(EditInstanceOnly, Category="Pickup | Item Initialization")
	FName DesiredItemID;

	UPROPERTY(VisibleAnywhere, Category="Pickup | Item Reference")
	UItemBase* ItemReference;

	UPROPERTY(VisibleInstanceOnly, Category="Pickup | Interaction")
	FInteractableData InstanceInteractableData;
	
	virtual void BeginPlay() override;
	
	void UpdateInteractableData();
	
	void TakePickup(const ATP_TopDownPlayerController* Taker);

	UPROPERTY()
	TSubclassOf<UUserWidget> WidgetClass;

	UPROPERTY()
	UInteractionText* InteractionText;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
};

