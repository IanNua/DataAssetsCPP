// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MyPrimaryDataAsset.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class C_API UMyPrimaryDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString fantasyRaceName;
	
		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString villagerName;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float villagerHealth;
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FColor materialColour;
		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FColor> multiMaterialColour;
		UPROPERTY(EditAnywhere, BlueprintReadWrite)
			FVector SizeofCharacter;

	
};

//society
