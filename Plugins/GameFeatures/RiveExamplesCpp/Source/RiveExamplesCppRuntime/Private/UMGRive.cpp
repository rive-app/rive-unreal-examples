// Copyright Rive, Inc. All rights reserved.

#include "UMGRive.h"

#include "Blueprint/WidgetTree.h"
#include "Components/SafeZone.h"
#include "Engine/AssetManager.h"
#include "Engine/StreamableManager.h"
#include "Rive/RiveFile.h"
#include "UMG/RiveWidget.h"

void UUMGRive::OnRiveFileLoaded()
{
	// ==== RIVE ====
	// Simple way to add Rive to a Widget. Set the Rive File Asset to a Rive Widget Component.
	RiveFile = Cast<URiveFile>(RiveFilePath.TryLoad());
	RiveWidgetComponent->SetRiveFile(RiveFile);
}

void UUMGRive::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	SafeZone = WidgetTree->ConstructWidget<USafeZone>(USafeZone::StaticClass(), TEXT("Safe Zone"));

	if(SafeZone)
	{
		WidgetTree->RootWidget = SafeZone;
		
		// ==== RIVE ====
		// URiveWidget is a Widget Component. We can assign a Rive File Asset to it.
		RiveWidgetComponent = WidgetTree->ConstructWidget<URiveWidget>(URiveWidget::StaticClass(), TEXT("Rive Widget"));

		SafeZone->AddChild(RiveWidgetComponent);

		// ==== RIVE ====
		// We async load the Rive File Asset and set to the Rive Widget Component when ready.
		FStreamableManager& Streamable = UAssetManager::GetStreamableManager();
		Streamable.RequestAsyncLoad(RiveFilePath,
			FStreamableDelegate::CreateUObject(this, &UUMGRive::OnRiveFileLoaded));
		
	}
}
