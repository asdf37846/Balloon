// Fill out your copyright notice in the Description page of Project Settings.

#include "Cpp_Balloon.h"

// Sets default values
ACpp_Balloon::ACpp_Balloon()
{
	PrimaryActorTick.bCanEverTick = true;

	one1 = CreateDefaultSubobject<USphereComponent>(this, TEXT("Sphere1"));
	one1->InitSphereRadius(250.0f);
	one1->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ACpp_Balloon::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACpp_Balloon::EnablePhySimulation()
{

}

// Called every frame
void ACpp_Balloon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

