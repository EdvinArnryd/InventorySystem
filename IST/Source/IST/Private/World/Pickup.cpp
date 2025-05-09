// Fill out your copyright notice in the Description page of Project Settings.


#include "World/Pickup.h"

#include "MeshPaintVisualize.h"
#include "Blueprint/WidgetLayoutLibrary.h"  // For ProjectWorldLocationToScreen
#include "Kismet/GameplayStatics.h"         // For GetPlayerController
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

	static ConstructorHelpers::FClassFinder<UInteractionText> WidgetBPClass(TEXT("/Game/UserInterface/WBP_Interaction"));

	if (WidgetBPClass.Succeeded())
	{
		WidgetClass = WidgetBPClass.Class;
	}
}


void APickup::BeginPlay()
{
	Super::BeginPlay();

	InitializePickup(UItemBase::StaticClass());

	if (WidgetClass)
	{
		InteractionText = CreateWidget<UInteractionText>(GetWorld(), WidgetClass);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Widget was not found."));
	}
	
}

void APickup::InitializePickup(const TSubclassOf<UItemBase> BaseClass)
{
	if (ItemDataTable && !DesiredItemID.IsNone())
	{
		const FItemData* ItemData = ItemDataTable->FindRow<FItemData>(DesiredItemID, DesiredItemID.ToString());

		ItemReference = NewObject<UItemBase>(this, BaseClass);

		ItemReference->ID = ItemData->ID;
		ItemReference->ItemType = ItemData->ItemType;
		ItemReference->ItemQuality = ItemData->ItemQuality;
		ItemReference->TextData = ItemData->TextData;
		ItemReference->AssetData = ItemData->AssetData;
		ItemReference->ItemStatistics = ItemData->ItemStatistics;

		PickupMesh->SetStaticMesh(ItemData->AssetData.Mesh);

		UpdateInteractableData();
	}
}

void APickup::InitializeDrop(UItemBase* ItemToDrop)
{
	ItemReference = ItemToDrop;
	PickupMesh->SetStaticMesh(ItemToDrop->AssetData.Mesh);
	
	UpdateInteractableData();
}


inline void APickup::UpdateInteractableData()
{
	InstanceInteractableData.InteractableType = EInteractableType::Pickup;
	InstanceInteractableData.Name = ItemReference->TextData.Name;
	InteractableData = InstanceInteractableData;
}

void APickup::BeginFocus()
{
	if (PickupMesh)
	{
		PickupMesh->SetRenderCustomDepth(true);

		if (InteractionText)
		{
			InteractionText->AddToViewport();
		}

		InteractionText->Name->SetText(ItemReference->TextData.Name);
		InteractionText->SetVisibility(ESlateVisibility::Visible);

		
		FVector PickupLocation = GetActorLocation();
		APlayerController* PC = UGameplayStatics::GetPlayerController(this, 0);

		if (PC)
		{
			FVector2D InteractionTextPosition;
			bool bProjected = PC->ProjectWorldLocationToScreen(PickupLocation, InteractionTextPosition);


			if (bProjected)
			{
				InteractionText->SetPositionInViewport(InteractionTextPosition);
			}
		}

		switch (ItemReference->ItemQuality)
		{
		case EItemQuality::Common:
			InteractionText->Name->SetColorAndOpacity(FLinearColor::Gray);
			break;
		case EItemQuality::Rare:
			InteractionText->Name->SetColorAndOpacity(FLinearColor::Blue);
			break;
		case EItemQuality::Epic:
			InteractionText->Name->SetColorAndOpacity(FLinearColor::Yellow);
			break;
		case EItemQuality::Legendary:
			InteractionText->Name->SetColorAndOpacity(FLinearColor::Red);
			break;
		}
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
				PlayerInventory->HandleAddItem(ItemReference);
				Destroy();
				
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


