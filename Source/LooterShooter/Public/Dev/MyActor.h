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
	int baseDamage = 30.0;
	//UPROPERTY(EditableAnywhere, BlueprintReadOnly, CATEGORY = "Fighting", meta = (ClampMin = "0", ClampMax = "500"))
	//int attackSpeed = 30.0;
	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, CATEGORY = "Fighting")
	//const int attackSpeed = 500; // удар раз в секунду
	UPROPERTY(EditAnywhere, BlueprintReadOnly, CATEGORY = "Interaction", meta = (ClampMin = "30", ClampMax = "150"))
	float interactionRadius;
	virtual void BeginPlay() override;
	
public:	
	// Sets default values for this actor's properties
	AMyActor();
	virtual void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintImplementableEvent)
	void PrintActorData();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	float MSBuff(float multiply);
	UFUNCTION(BlueprintCallable)
	float Buff(int buff, int debuff);

};
