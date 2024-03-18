// Fill out your copyright notice in the Description page of Project Settings.


#include "C_GlobalFunctions.h"
#include "Engine/World.h"

float UCGlobalFunctions::GetWorldGravity(AActor* worldContextInput){
    return worldContextInput->GetWorld()->GetWorldSettings()->GetGravityZ();
}