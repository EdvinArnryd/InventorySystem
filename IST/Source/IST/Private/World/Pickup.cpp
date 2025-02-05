// Fill out your copyright notice in the Description page of Project Settings.


#include "World/Pickup.h"

#include "Components/InventoryComponent.h"
#include "Components/SlateWrapperTypes.h"
#include "Components/TextBlock.h"
#include "Items/ItemBase.h"
#include "UserInterface/Interaction/InteractionText.h"

APickup::APickup()
{
	PrimaryActorTick.bCanEverTick = false;

	PickupMesh = CreateDefaultSubobject<UStaticMeshComponent>("PickupMesh");
	PickupMesh->SetSimulatePhysics(true);
	SetRootComponent(PickupMesh);
}


void APickup::BeginPlay()
{
	Super::BeginPlay();

	InitializePickup(UItemBase::StaticClass(), ItemQuantity);

	if (!InteractionText)
	{
		InteractionText = CreateWidget<UInteractionText>(GetWorld(), UInteractionText::StaticClass());
		
		if (!InteractionText)
		{
			UE_LOG(LogTemp, Error, TEXT("Failed to create InteractionText in APickup::BeginPlay"));
		}
	}
	
}

void APickup::InitializePickup(const TSubclassOf<UItemBase> BaseClass, const int32 InQuantity)
{
	if (ItemDataTable && !DesiredItemID.IsNone())
	{
		const FItemData* ItemData = ItemDataTable->FindRow<FItemData>(DesiredItemID, DesiredItemID.ToString());

		ItemReference = NewObject<UItemBase>(this, BaseClass);

		ItemReference->ID = ItemData->ID;
		ItemReference->ItemType = ItemData->ItemType;
		ItemReference->ItemQuality = ItemData->ItemQuality;
		ItemReference->NumericData = ItemData->NumericData;
		ItemReference->TextData = ItemData->TextData;
		ItemReference->AssetData = ItemData->AssetData;

		InQuantity <= 0 ? ItemReference->SetQuantity(1) : ItemReference->SetQuantity(InQuantity);

		PickupMesh->SetStaticMesh(ItemData->AssetData.Mesh);

		UpdateInteractableData();
	}
}

void APickup::InitializeDrop(UItemBase* ItemToDrop, const int32 InQuantity)
{
	ItemReference = ItemToDrop;
	InQuantity <= 0 ? ItemReference->SetQuantity(1) : ItemReference->SetQuantity(InQuantity);
	ItemReference->NumericData.Weight = ItemToDrop->GetItemSingleWeight();
	PickupMesh->SetStaticMesh(ItemToDrop->AssetData.Mesh);
	
	UpdateInteractableData();
}


inline void APickup::UpdateInteractableData()
{
	InstanceInteractableData.InteractableType = EInteractableType::Pickup;
	InstanceInteractableData.Action = ItemReference->TextData.InteractionText;
	InstanceInteractableData.Name = ItemReference->TextData.Name;
	InstanceInteractableData.Quantity = ItemReference->Quantity;
	InteractableData = InstanceInteractableData;
}

void APickup::BeginFocus()
{
	if (PickupMesh)
	{
		PickupMesh->SetRenderCustomDepth(true);

		
		InteractionText = CreateWidget<UInteractionText>(GetWorld(), UInteractionText::StaticClass());
		if (InteractionText)
		{
			InteractionText->AddToViewport();
		}

		if (!InteractionText)
		{
			UE_LOG(LogTemp, Error, TEXT("InteractionText is NULL in APickup::BeginFocus"));
			return;
		}
		
		if (!InteractionText->Name)
		{
			UE_LOG(LogTemp, Error, TEXT("InteractionText->Name is NULL in APickup::BeginFocus"));
			return;
		}

		if (!ItemReference)
		{
			UE_LOG(LogTemp, Error, TEXT("ItemReference is NULL in APickup::BeginFocus"));
			return;
		}

		UE_LOG(LogTemp, Warning, TEXT("Setting text: %s"), *ItemReference->TextData.Name.ToString());

		InteractionText->Name->SetText(ItemReference->TextData.Name);
		InteractionText->SetVisibility(ESlateVisibility::Visible);
	}
}


void APickup::EndFocus()
{
	if (PickupMesh)
	{
		PickupMesh->SetRenderCustomDepth(false);
		InteractionText->SetVisibility(ESlateVisibility::Collapsed);
	}
}

void APickup::Interact(ATP_TopDownPlayerController* PlayerCharacter)
{
	if (PlayerCharacter)
	{
		TakePickup(PlayerCharacter);
	}
}

void APickup::TakePickup(const ATP_TopDownPlayerController* Taker)
{
	if (!IsPendingKillPending())
	{
		if (ItemReference)
		{
			if (UInventoryComponent* PlayerInventory = Taker->GetInventory())
			{
				const FItemAddResult AddResult = PlayerInventory->HandleAddItem(ItemReference);

				switch (AddResult.OperationResult)
				{
				case EItemAddResult::IAR_NoItemAdded:
					break;
				case EItemAddResult::IAR_PartialAmountItemAdded:
					UpdateInteractableData();
					//Taker->UpdateInteractionWidget();
				case EItemAddResult::IAR_AllItemAdded:
					Destroy();
					break;
				}

				UE_LOG(LogTemp, Warning, TEXT("%s"), *AddResult.ResultMessage.ToString());
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("Player inventory component is null!"));
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Pickup internal item reference was somehow null!"));
		}
	}
}

void APickup::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	const FName ChangedPropertyName = PropertyChangedEvent.Property ? PropertyChangedEvent.Property->GetFName() : NAME_None;

	if (ChangedPropertyName == GET_MEMBER_NAME_CHECKED(APickup, DesiredItemID))
	{
		if (ItemDataTable)
		{
			if (const FItemData* ItemData = ItemDataTable->FindRow<FItemData>(DesiredItemID, DesiredItemID.ToString()))
			{
				PickupMesh->SetStaticMesh((ItemData->AssetData.Mesh));
			}
		}
	}
}


