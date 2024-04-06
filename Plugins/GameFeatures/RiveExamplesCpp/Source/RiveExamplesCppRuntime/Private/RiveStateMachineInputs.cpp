// Copyright Rive, Inc. All rights reserved.

#include "RiveStateMachineInputs.h"
#include "Rive/RiveFile.h"

// Sets default values
ARiveStateMachineInputs::ARiveStateMachineInputs()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	InputNumberRiveFile = Cast<URiveFile>(RiveFilePathNumber.TryLoad());
	InputBooleanRiveFile = Cast<URiveFile>(RiveFilePathBoolean.TryLoad());
	InputTriggerRiveFile = Cast<URiveFile>(RiveFilePathTrigger.TryLoad());
}

// Called when the game starts or when spawned
void ARiveStateMachineInputs::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARiveStateMachineInputs::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// ==== RIVE ====
// Here we Set Values for Artboards of each Rive File.
// We know those specific RiveFile Artboards have those specific Properties.
// So, in this example we skip checking if the Rive File has indeed the Property.

void ARiveStateMachineInputs::InteractRiveFileNumber()
{
	if (InputNumberRiveFile)
	{
		if (isNumberRiveFileActive)
		{
			// ==== RIVE ====
			// Some Rive Files have 'Number Properties' We can set the values by calling SetNumberValue.
			InputNumberRiveFile->GetArtboard()->SetNumberValue(TEXT("healthPlus"), 100);

			// ==== RIVE ====
			// Some Rive Files have 'Triggers' We can trigger the Event by calling FireTrigger.
			// In this specific RiveFile this Event uses the 'healthPlus' value set before.
			InputNumberRiveFile->GetArtboard()->FireTrigger(TEXT("healthPlusAdvance"));
			isNumberRiveFileActive = !isNumberRiveFileActive;
		}
		else
		{
			InputNumberRiveFile->GetArtboard()->SetNumberValue(TEXT("healthMinus"), 0);
			
			// ==== RIVE ====
			// Some Rive Files have 'Triggers' We can trigger the Event by calling FireTrigger.
			// In this specific RiveFile this Event uses the 'healthMinus' value set before.
			InputNumberRiveFile->GetArtboard()->FireTrigger(TEXT("healthMinusAdvance"));
			isNumberRiveFileActive = !isNumberRiveFileActive;	
		}
	}
}

void ARiveStateMachineInputs::InteractRiveFileBoolean()
{
	if (InputBooleanRiveFile)
	{
			// ==== RIVE ====
			// Some Rive Files have 'Boolean Properties' We can set the values by calling SetBoolValue.
			InputBooleanRiveFile->GetArtboard()->SetBoolValue(TEXT("centerHover"), isBooleanRiveFileActive);
			isBooleanRiveFileActive = !isBooleanRiveFileActive;	
	}
}

void ARiveStateMachineInputs::InteractRiveFileTrigger()
{
	if (InputTriggerRiveFile)
	{
		// ==== RIVE ====
		// Some Rive Files have 'Triggers' We can trigger the Event by calling FireTrigger.
		InputTriggerRiveFile->GetArtboard()->FireTrigger(TEXT("success"));
	}
}

