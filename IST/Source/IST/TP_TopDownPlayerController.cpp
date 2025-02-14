// Copyright Epic Games, Inc. All Rights Reserved.

#include "TP_TopDownPlayerController.h"
#include "GameFramework/Pawn.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "NiagaraSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "TP_TopDownCharacter.h"
#include "Engine/World.h"
#include "EnhancedInputComponent.h"
#include "InputActionValue.h"
#include "EnhancedInputSubsystems.h"
#include "Components/InventoryComponent.h"
#include "Engine/LocalPlayer.h"
#include "UserInterface/ISTHud.h"
#include "World/Pickup.h"

//DEFINE_LOG_CATEGORY(LogTemplateCharacter);

ATP_TopDownPlayerController::ATP_TopDownPlayerController()
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Default;
	CachedDestination = FVector::ZeroVector;
	FollowTime = 0.f;

	PlayerInventory = CreateDefaultSubobject<UInventoryComponent>(TEXT("PlayerInventory"));
	// PlayerInventory->SetSlotsCapacity(20);
	// PlayerInventory->SetWeightCapacity(50.0f);
}

void ATP_TopDownPlayerController::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();
	
	HUD = Cast<AISTHud>(GetWorld()->GetFirstPlayerController()->GetHUD());
}

void ATP_TopDownPlayerController::SetupInputComponent()
{
	// set up gameplay key bindings
	Super::SetupInputComponent();

	// Add Input Mapping Context
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		Subsystem->AddMappingContext(DefaultMappingContext, 0);
	}

	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent))
	{
		// Setup mouse input events
		EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Started, this, &ATP_TopDownPlayerController::OnInputStarted);
		EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Triggered, this, &ATP_TopDownPlayerController::OnSetDestinationTriggered);
		EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Completed, this, &ATP_TopDownPlayerController::OnSetDestinationReleased);
		EnhancedInputComponent->BindAction(SetDestinationClickAction, ETriggerEvent::Canceled, this, &ATP_TopDownPlayerController::OnSetDestinationReleased);

		InputComponent->BindAction("ToggleMenu", IE_Pressed, this, &ATP_TopDownPlayerController::ToggleMenu);
		
		// Setup touch input events
		EnhancedInputComponent->BindAction(SetDestinationTouchAction, ETriggerEvent::Started, this, &ATP_TopDownPlayerController::OnInputStarted);
		EnhancedInputComponent->BindAction(SetDestinationTouchAction, ETriggerEvent::Triggered, this, &ATP_TopDownPlayerController::OnTouchTriggered);
		EnhancedInputComponent->BindAction(SetDestinationTouchAction, ETriggerEvent::Completed, this, &ATP_TopDownPlayerController::OnTouchReleased);
		EnhancedInputComponent->BindAction(SetDestinationTouchAction, ETriggerEvent::Canceled, this, &ATP_TopDownPlayerController::OnTouchReleased);
	}
	else
	{
		//UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input Component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

void ATP_TopDownPlayerController::OnInputStarted()
{
	StopMovement();
}

void ATP_TopDownPlayerController::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	InteractionCheck();
	
	if (CachedPickup)
	{
		APawn* ControlledPawn = GetPawn();
		if (!ControlledPawn)
		{
			UE_LOG(LogTemp, Warning, TEXT("No controlled pawn found in Tick()!"));
			return;
		}

		float Distance = FVector::Dist(ControlledPawn->GetActorLocation(), CachedPickup->GetActorLocation());

		// If in range, pick up the item
		if (Distance <= PickupRange)
		{
			UE_LOG(LogTemp, Warning, TEXT("Picking up item: %s"), *CachedPickup->GetName());

			CachedPickup->Interact(this);
			CachedPickup = nullptr; // Clear cache after picking up
		}
	}
}

// Triggered every frame when the input is held down
void ATP_TopDownPlayerController::OnSetDestinationTriggered()
{
	// We flag that the input is being pressed
	FollowTime += GetWorld()->GetDeltaSeconds();
	
	// We look for the location in the world where the player has pressed the input
	FHitResult Hit;
	bool bHitSuccessful = false;
	APawn* ControlledPawn = GetPawn();
	
	if (bIsTouch)
	{
		bHitSuccessful = GetHitResultUnderFinger(ETouchIndex::Touch1, ECollisionChannel::ECC_Visibility, true, Hit);
	}
	else
	{
		bHitSuccessful = GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, true, Hit);
		CachedPickup = nullptr;
	}

	// If we hit a surface, cache the location
	if (bHitSuccessful)
	{
		CachedDestination = Hit.Location;

		if (Hit.GetActor() && Hit.GetActor()->IsA(APickup::StaticClass()))
		{
			CachedPickup = Cast<APickup>(Hit.GetActor());
			UE_LOG(LogTemp, Warning, TEXT("Cached pickup: %s"), *CachedPickup->GetName());
		}
	}
	
	
	if (ControlledPawn != nullptr)
	{
		FVector WorldDirection = (CachedDestination - ControlledPawn->GetActorLocation()).GetSafeNormal();
		ControlledPawn->AddMovementInput(WorldDirection, 1.0, false);
	}
}

void ATP_TopDownPlayerController::OnSetDestinationReleased()
{
	// If it was a short press
	if (FollowTime <= ShortPressThreshold)
	{
		// We move there and spawn some particles
		UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, CachedDestination);
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(this, FXCursor, CachedDestination, FRotator::ZeroRotator, FVector(1.f, 1.f, 1.f), true, true, ENCPoolMethod::None, true);
	}

	FollowTime = 0.f;
}

// Triggered every frame when the input is held down
void ATP_TopDownPlayerController::OnTouchTriggered()
{
	bIsTouch = true;
	OnSetDestinationTriggered();
}

void ATP_TopDownPlayerController::OnTouchReleased()
{
	bIsTouch = false;
	OnSetDestinationReleased();
}

void ATP_TopDownPlayerController::ToggleMenu()
{
	HUD->ToggleMenu();
}

void ATP_TopDownPlayerController::InteractionCheck()
{
	FHitResult TraceHit;
	AActor* HitActor = nullptr;

	// Perform the trace to check for interactable items
	if (GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, true, TraceHit))
	{
		HitActor = TraceHit.GetActor();

		// Check if the actor is of type APickup
		if (HitActor && HitActor->IsA(APickup::StaticClass()))
		{
			CurrentInteractable = HitActor;

			// If the current interactable is different from the previously targeted one
			if (TargetInteractable != CurrentInteractable)
			{
				// End focus on the previously targeted interactable
				if (TargetInteractable)
				{
					TargetInteractable->EndFocus();
				}

				// Begin focus on the new interactable
				TargetInteractable = CurrentInteractable;
				TargetInteractable->BeginFocus();
			}
			return; // Exit here since we found a valid interactable
		}
	}

	// If no interactable is hit or the hit actor is not a pickup
	if (TargetInteractable)
	{
		TargetInteractable->EndFocus();
		TargetInteractable = nullptr;
	}

	// Clear CurrentInteractable to prevent stale references
	CurrentInteractable = nullptr;
}

void ATP_TopDownPlayerController::DropItem(UItemBase* ItemToDrop)
{
	if (PlayerInventory->FindMatchingItem(ItemToDrop))
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.bNoFail = true;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

		APawn* ControlledPawn = GetPawn();

		const FVector SpawnLocations = ControlledPawn->GetActorLocation() + (ControlledPawn->GetActorForwardVector() * 50.0f);
		const FTransform SpawnTransform(ControlledPawn->GetActorRotation(), SpawnLocations);

		const int32 RemovedQuantity = PlayerInventory->RemoveAmountOfItem(ItemToDrop);

		APickup* Pickup = GetWorld()->SpawnActor<APickup>(APickup::StaticClass(), SpawnTransform, SpawnParams);

		Pickup->InitializeDrop(ItemToDrop);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Item to drop was somehow null!"));
	}
}



