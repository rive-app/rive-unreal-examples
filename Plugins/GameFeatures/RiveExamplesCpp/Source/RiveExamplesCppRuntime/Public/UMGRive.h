// Copyright Rive, Inc. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UMGRive.generated.h"

class USafeZone;
class URiveFile;
class URiveWidget;
/**
 * 
 */
UCLASS()
class RIVEEXAMPLESCPPRUNTIME_API UUMGRive : public UUserWidget
{
	GENERATED_BODY()

private:
	const FSoftObjectPath RiveFilePath = FSoftObjectPath("/RiveExamplesCpp/Rive/ad_police_v04.ad_police_v04");
	
protected:
	void OnRiveFileLoaded();
	virtual void NativeOnInitialized() override;

public:
	UPROPERTY(BlueprintReadWrite, Category="Widget")
	TObjectPtr<USafeZone> SafeZone;

	// Base Class for the Rive Widget. This is a Widget Component added to the User Widget.
	// We can assign a Rive File Asset to it.
	UPROPERTY(BlueprintReadWrite, Category="Rive")
	TObjectPtr<URiveWidget> RiveWidgetComponent;

	// Base Class for the Rive File. Usually imported to the Content using the Editor.
	UPROPERTY(BlueprintReadWrite, Category="Rive")
	TObjectPtr<URiveFile> RiveFile;
};
