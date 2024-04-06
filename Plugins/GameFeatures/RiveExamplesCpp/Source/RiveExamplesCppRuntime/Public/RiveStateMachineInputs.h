// Copyright Rive, Inc. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RiveStateMachineInputs.generated.h"

class URiveFile;

UCLASS()
class RIVEEXAMPLESCPPRUNTIME_API ARiveStateMachineInputs : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ARiveStateMachineInputs();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	const FSoftObjectPath RiveFilePathNumber = FSoftObjectPath("/RiveExamplesCpp/Rive/health_bar_use_case");
	const FSoftObjectPath RiveFilePathBoolean = FSoftObjectPath("/RiveExamplesCpp/Rive/circle_fui");
	const FSoftObjectPath RiveFilePathTrigger = FSoftObjectPath("/RiveExamplesCpp/Rive/login_screen_character_Inst");

	bool isNumberRiveFileActive = false;
	bool isBooleanRiveFileActive = false;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadOnly, Category = "Rive")
	TObjectPtr<URiveFile> InputNumberRiveFile;

	UPROPERTY(BlueprintReadOnly, Category = "Rive")
	TObjectPtr<URiveFile> InputBooleanRiveFile;

	UPROPERTY(BlueprintReadOnly, Category = "Rive")
	TObjectPtr<URiveFile> InputTriggerRiveFile;

	UFUNCTION(BlueprintCallable, Category = "Rive")
	void InteractRiveFileNumber();

	UFUNCTION(BlueprintCallable, Category = "Rive")
	void InteractRiveFileBoolean();
	
	UFUNCTION(BlueprintCallable, Category = "Rive")
	void InteractRiveFileTrigger();
};
