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
	const FSoftObjectPath RiveFilePath = FSoftObjectPath("/Game/Rive/RiveExampleContent/Riv/ad_police_v04.ad_police_v04");
	
protected:
	void OnRiveFileLoaded();
	virtual void NativeOnInitialized() override;

public:
	UPROPERTY(BlueprintReadWrite, Category="Widget")
	TObjectPtr<USafeZone> SafeZone;

	UPROPERTY(BlueprintReadWrite, Category="Rive")
	TObjectPtr<URiveWidget> RiveWidgetComponent;

	UPROPERTY(BlueprintReadWrite, Category="Rive")
	TObjectPtr<URiveFile> RiveFile;
};
