#include "UserInterface/Interaction/InteractionText.h"
#include "Components/TextBlock.h"

void UInteractionText::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	UE_LOG(LogTemp, Warning, TEXT("UInteractionText::NativeOnInitialized() called"));
}

void UInteractionText::NativeConstruct()
{
	Super::NativeConstruct();
	if (!Name)
	{
		UE_LOG(LogTemp, Error, TEXT("UInteractionText::NativeConstruct - Name is NULL!"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("UInteractionText::NativeConstruct - Name is successfully bound!"));
	}
}
