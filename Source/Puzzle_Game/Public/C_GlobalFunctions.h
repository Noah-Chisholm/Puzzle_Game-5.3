// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "C_GlobalFunctions.generated.h"

/**
 * 
 */
UCLASS()
class PUZZLE_GAME_API UCGlobalFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	public:
		UFUNCTION(BlueprintCallable, Category = "globalFunctions")
		static float GetWorldGravity(AActor* worldContextInput);	
};
