// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/PlayerController.h"
#include "Interfaces/InteractionInterface.h"
#include "Logging/LogMacros.h"
#include "TP_TopDownPlayerController.generated.h"

class APickup;
class UItemBase;
class UInventoryComponent;
/** Forward declaration to improve compiling times */
class UNiagaraSystem;
class UInputMappingContext;
class UInputAction;
class AISTHud;

//DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);


USTRUCT()
struct Finter
{
	GENERATED_USTRUCT_BODY()

	Finter() : CurrentInteractable(nullptr), LastInteractionCheckTime(0.0f)
	{
		
	};

	UPROPERTY()
	AActor* CurrentInteractable;

	UPROPERTY()
	float LastInteractionCheckTime;
};

UCLASS()
class ATP_TopDownPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ATP_TopDownPlayerController();

	FORCEINLINE UInventoryComponent* GetInventory() const { return PlayerInventory; };

	/** Time Threshold to know if it was a short press */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	float ShortPressThreshold;

	/** FX Class that we will spawn when clicking */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UNiagaraSystem* FXCursor;

	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputMappingContext* DefaultMappingContext;
	
	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* SetDestinationClickAction;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category=Input, meta=(AllowPrivateAccess = "true"))
	UInputAction* SetDestinationTouchAction;

	void DropItem(UItemBase* ItemToDrop);
	
	virtual void Tick(float DeltaSeconds) override;


protected:
	UPROPERTY()
	AISTHud* HUD;

	UPROPERTY(VisibleAnywhere, Category = "Character | Interaction")
	TScriptInterface<IInteractionInterface> TargetInteractable;

	UPROPERTY()
	AActor* CurrentInteractable;

	UPROPERTY(VisibleAnywhere, Category="Character | Inventory")
	UInventoryComponent* PlayerInventory;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Interaction")
	float PickupRange = 200.0f;
	
	/** True if the controlled character should navigate to the mouse cursor. */
	uint32 bMoveToMouseCursor : 1;

	Finter InteractionData;

	

	virtual void SetupInputComponent() override;
	
	// To add mapping context
	virtual void BeginPlay();

	/** Input handlers for SetDestination action. */
	void OnInputStarted();
	void OnSetDestinationTriggered();
	void OnSetDestinationReleased();
	void OnTouchTriggered();
	void OnTouchReleased();

	void ToggleMenu();

	void InteractionCheck();

private:
	FVector CachedDestination;
	APickup* CachedPickup = nullptr;

	
	bool bIsTouch; // Is it a touch device
	float FollowTime; // For how long it has been pressed
};


