// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

USTRUCT(BlueprintType)
struct FHPStruct { 
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly,BlueprintReadOnly)
	float maxHP;

	UPROPERTY(VisibleAnywhere,BlueprintReadWrite)
	float currentHP;
};
UCLASS()
class LOOTERSHOOTER_API AMyActor : public AActor
{
	GENERATED_BODY()
private:
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite,CATEGORY="HP")
	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	FHPStruct HP;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, CATEGORY = "Movement", meta = (ClampMin = "300", ClampMax = "700"))
	float movementSpeed;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, CATEGORY = "Fighting", meta = (ClampMin = "1", ClampMax = "100"))
	float damage = 30.0f;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, CATEGORY = "Interaction", meta = (ClampMin = "30", ClampMax = "150"))
	float interactionRadius;
	virtual void BeginPlay() override;
	
public:	
	// Sets default values for this actor's properties
	AMyActor();
	virtual void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintCallable,BlueprintImplementableEvent)
	float Foo1();
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	float Foo2();
	UFUNCTION()
	float Foo2_Implementation();
};
