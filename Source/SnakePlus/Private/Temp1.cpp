// Fill out your copyright notice in the Description page of Project Settings.


#include "Temp1.h"

// Sets default values
ATemp1::ATemp1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CubeMesh = CreateDefaultSubobject<UStaticMeshComponent>("Cube Mesh");
	RootComponent = CubeMesh;

	static ConstructorHelpers::FObjectFinder<UStaticMesh>
		CubeMeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
	if (CubeMeshAsset.Succeeded())
	{
		CubeMesh->SetStaticMesh(CubeMeshAsset.Object);
	}
	StartLocation = GetActorLocation();
	EndLocation = FVector(100.f, 0.f, 0.f);

	InterpTime = 2.f;
}

// Called when the game starts or when spawned
void ATemp1::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATemp1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float CurrentTime = FPlatformTime::Seconds();
	float Alpha = (FMath::Sin(CurrentTime / InterpTime * PI * 2.f) + 1.f) / 2.f;
	FVector CurrentLocation = FMath::Lerp(StartLocation, EndLocation, Alpha);

	SetActorLocation(CurrentLocation);
}

