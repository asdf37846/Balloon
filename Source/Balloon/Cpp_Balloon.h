// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cpp_Balloon.generated.h"

UCLASS()
class BALLOON_API ACpp_Balloon : public AActor
{
	GENERATED_BODY()
	
public:	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Switch Components")
	class USphereComponent* one1;
	
	ACpp_Balloon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void EnablePhySimulation();

public:	

	

	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
