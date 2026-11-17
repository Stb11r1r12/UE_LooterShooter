// Fill out your copyright notice in the Description page of Project Settings.


#include "Dev/MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

float AMyActor::Foo2_Implementation()
{
	return 0.0f;
}

//float AMyActor::Foo1()
//{
//	return 0.0f;
//}

//float AMyActor::Foo2()
//{
//	return 0.0f;
//}


