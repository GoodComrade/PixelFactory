// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "VoxelActor.generated.h"

UCLASS()
class PIXELFACTORY_API AVoxelActor : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Category = Voxels)
		TArray <UMaterialInterface *> Materials;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (ExposeOnSpawn = true), Category = Voxels)
		int32 randomSeed = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (ExposeOnSpawn = true), Category = Voxels)
		int32 voxelSize = 200;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (ExposeOnSpawn = true), Category = Voxels)
		int32 chunkLineElements = 10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (ExposeOnSpawn = true), Category = Voxels)
		int32 chunkXIndex = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (ExposeOnSpawn = true), Category = Voxels)
		int32 chunkYIndex = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Voxels)
		float xMult = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Voxels)
		float yMult = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Voxels)
		float zMult = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Voxels)
		float weight = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Voxels)
		float freq = 1;

	UPROPERTY()
		int32 chunkTotalElements;

	UPROPERTY()
		int32 chunkZElements;

	UPROPERTY()
		int32 chunkLineElementsP2;

	UPROPERTY()
		int32 voxelSizeHalf;

	UPROPERTY()
		TArray <int32> chunkFields;

	UPROPERTY()
		UProceduralMeshComponent * proceduralComponent;

	UFUNCTION(BlueprintNativeEvent)
		TArray <int32> calculateNoise();

	virtual TArray <int32> calculateNoise_Implementation();

public:
	// Sets default values for this actor's properties
	AVoxelActor();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaSeconds) override;

	virtual void OnConstruction(const FTransform & Transform) override;

	void GenerateChunk();
	void UpdateMesh();
};