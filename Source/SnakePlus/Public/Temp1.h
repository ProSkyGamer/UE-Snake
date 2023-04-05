// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Temp1.generated.h"

UCLASS()
class SNAKEPLUS_API ATemp1 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATemp1();
	UPROPERTY(EditAnywhere,BlueprintReadWrite);
	UStaticMeshComponent* CubeMesh;

	FVector StartLocation;
	FVector EndLocation;
	float InterpTime;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
