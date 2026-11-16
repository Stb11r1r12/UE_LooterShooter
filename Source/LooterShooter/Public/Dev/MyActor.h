// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

USTRUCT(BlueprintType)
struct FHPStruct { 
	GENERATED_BODY()
	float maxHP;
	float currentHP;
};
UCLASS()
class LOOTERSHOOTER_API AMyActor : public AActor
{
	GENERATED_BODY()
private:
	FHPStruct HP;
	float movementSpeed;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
public:	
	// Sets default values for this actor's properties
	AMyActor();
	virtual void Tick(float DeltaTime) override;



};
