// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/VoxelActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelActor() {}
// Cross Module References
	PIXELFACTORY_API UClass* Z_Construct_UClass_AVoxelActor_NoRegister();
	PIXELFACTORY_API UClass* Z_Construct_UClass_AVoxelActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PixelFactory();
	PIXELFACTORY_API UFunction* Z_Construct_UFunction_AVoxelActor_calculateNoise();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	static FName NAME_AVoxelActor_calculateNoise = FName(TEXT("calculateNoise"));
	TArray<int32> AVoxelActor::calculateNoise()
	{
		VoxelActor_eventcalculateNoise_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AVoxelActor_calculateNoise),&Parms);
		return Parms.ReturnValue;
	}
	void AVoxelActor::StaticRegisterNativesAVoxelActor()
	{
		UClass* Class = AVoxelActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "calculateNoise", (Native)&AVoxelActor::execcalculateNoise },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AVoxelActor_calculateNoise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VoxelActor_eventcalculateNoise_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VoxelActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoxelActor, "calculateNoise", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(VoxelActor_eventcalculateNoise_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVoxelActor_NoRegister()
	{
		return AVoxelActor::StaticClass();
	}
	UClass* Z_Construct_UClass_AVoxelActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_PixelFactory,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AVoxelActor_calculateNoise, "calculateNoise" }, // 1664243323
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "VoxelActor.h" },
				{ "ModuleRelativePath", "Public/VoxelActor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_proceduralComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/VoxelActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_proceduralComponent = { UE4CodeGen_Private::EPropertyClass::Object, "proceduralComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(AVoxelActor, proceduralComponent), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(NewProp_proceduralComponent_MetaData, ARRAY_COUNT(NewProp_proceduralComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chunkFields_MetaData[] = {
				{ "ModuleRelativePath", "Public/VoxelActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_chunkFields = { UE4CodeGen_Private::EPropertyClass::Array, "chunkFields", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AVoxelActor, chunkFields), METADATA_PARAMS(NewProp_chunkFields_MetaData, ARRAY_COUNT(NewProp_chunkFields_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_chunkFields_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "chunkFields", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_voxelSizeHalf_MetaData[] = {
				{ "ModuleRelativePath", "Public/VoxelActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_voxelSizeHalf = { UE4CodeGen_Private::EPropertyClass::Int, "voxelSizeHalf", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AVoxelActor, voxelSizeHalf), METADATA_PARAMS(NewProp_voxelSizeHalf_MetaData, ARRAY_COUNT(NewProp_voxelSizeHalf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chunkLineElementsP2_MetaData[] = {
				{ "ModuleRelativePath", "Public/VoxelActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_chunkLineElementsP2 = { UE4CodeGen_Private::EPropertyClass::Int, "chunkLineElementsP2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AVoxelActor, chunkLineElementsP2), METADATA_PARAMS(NewProp_chunkLineElementsP2_MetaData, ARRAY_COUNT(NewProp_chunkLineElementsP2_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chunkZElements_MetaData[] = {
				{ "ModuleRelativePath", "Public/VoxelActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_chunkZElements = { UE4CodeGen_Private::EPropertyClass::Int, "chunkZElements", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AVoxelActor, chunkZElements), METADATA_PARAMS(NewProp_chunkZElements_MetaData, ARRAY_COUNT(NewProp_chunkZElements_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chunkTotalElements_MetaData[] = {
				{ "ModuleRelativePath", "Public/VoxelActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_chunkTotalElements = { UE4CodeGen_Private::EPropertyClass::Int, "chunkTotalElements", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AVoxelActor, chunkTotalElements), METADATA_PARAMS(NewProp_chunkTotalElements_MetaData, ARRAY_COUNT(NewProp_chunkTotalElements_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_freq_MetaData[] = {
				{ "Category", "Voxels" },
				{ "ModuleRelativePath", "Public/VoxelActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_freq = { UE4CodeGen_Private::EPropertyClass::Float, "freq", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AVoxelActor, freq), METADATA_PARAMS(NewProp_freq_MetaData, ARRAY_COUNT(NewProp_freq_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weight_MetaData[] = {
				{ "Category", "Voxels" },
				{ "ModuleRelativePath", "Public/VoxelActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_weight = { UE4CodeGen_Private::EPropertyClass::Float, "weight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AVoxelActor, weight), METADATA_PARAMS(NewProp_weight_MetaData, ARRAY_COUNT(NewProp_weight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_zMult_MetaData[] = {
				{ "Category", "Voxels" },
				{ "ModuleRelativePath", "Public/VoxelActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_zMult = { UE4CodeGen_Private::EPropertyClass::Float, "zMult", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AVoxelActor, zMult), METADATA_PARAMS(NewProp_zMult_MetaData, ARRAY_COUNT(NewProp_zMult_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_yMult_MetaData[] = {
				{ "Category", "Voxels" },
				{ "ModuleRelativePath", "Public/VoxelActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_yMult = { UE4CodeGen_Private::EPropertyClass::Float, "yMult", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AVoxelActor, yMult), METADATA_PARAMS(NewProp_yMult_MetaData, ARRAY_COUNT(NewProp_yMult_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_xMult_MetaData[] = {
				{ "Category", "Voxels" },
				{ "ModuleRelativePath", "Public/VoxelActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_xMult = { UE4CodeGen_Private::EPropertyClass::Float, "xMult", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AVoxelActor, xMult), METADATA_PARAMS(NewProp_xMult_MetaData, ARRAY_COUNT(NewProp_xMult_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chunkYIndex_MetaData[] = {
				{ "Category", "Voxels" },
				{ "ExposeOnSpawn", "TRUE" },
				{ "ModuleRelativePath", "Public/VoxelActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_chunkYIndex = { UE4CodeGen_Private::EPropertyClass::Int, "chunkYIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0011000000000005, 1, nullptr, STRUCT_OFFSET(AVoxelActor, chunkYIndex), METADATA_PARAMS(NewProp_chunkYIndex_MetaData, ARRAY_COUNT(NewProp_chunkYIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chunkXIndex_MetaData[] = {
				{ "Category", "Voxels" },
				{ "ExposeOnSpawn", "TRUE" },
				{ "ModuleRelativePath", "Public/VoxelActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_chunkXIndex = { UE4CodeGen_Private::EPropertyClass::Int, "chunkXIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0011000000000005, 1, nullptr, STRUCT_OFFSET(AVoxelActor, chunkXIndex), METADATA_PARAMS(NewProp_chunkXIndex_MetaData, ARRAY_COUNT(NewProp_chunkXIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chunkLineElements_MetaData[] = {
				{ "Category", "Voxels" },
				{ "ExposeOnSpawn", "TRUE" },
				{ "ModuleRelativePath", "Public/VoxelActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_chunkLineElements = { UE4CodeGen_Private::EPropertyClass::Int, "chunkLineElements", RF_Public|RF_Transient|RF_MarkAsNative, 0x0011000000000005, 1, nullptr, STRUCT_OFFSET(AVoxelActor, chunkLineElements), METADATA_PARAMS(NewProp_chunkLineElements_MetaData, ARRAY_COUNT(NewProp_chunkLineElements_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_voxelSize_MetaData[] = {
				{ "Category", "Voxels" },
				{ "ExposeOnSpawn", "TRUE" },
				{ "ModuleRelativePath", "Public/VoxelActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_voxelSize = { UE4CodeGen_Private::EPropertyClass::Int, "voxelSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0011000000000005, 1, nullptr, STRUCT_OFFSET(AVoxelActor, voxelSize), METADATA_PARAMS(NewProp_voxelSize_MetaData, ARRAY_COUNT(NewProp_voxelSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_randomSeed_MetaData[] = {
				{ "Category", "Voxels" },
				{ "ExposeOnSpawn", "TRUE" },
				{ "ModuleRelativePath", "Public/VoxelActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_randomSeed = { UE4CodeGen_Private::EPropertyClass::Int, "randomSeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0011000000000005, 1, nullptr, STRUCT_OFFSET(AVoxelActor, randomSeed), METADATA_PARAMS(NewProp_randomSeed_MetaData, ARRAY_COUNT(NewProp_randomSeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[] = {
				{ "Category", "Voxels" },
				{ "ModuleRelativePath", "Public/VoxelActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Materials = { UE4CodeGen_Private::EPropertyClass::Array, "Materials", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(AVoxelActor, Materials), METADATA_PARAMS(NewProp_Materials_MetaData, ARRAY_COUNT(NewProp_Materials_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Materials", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_proceduralComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_chunkFields,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_chunkFields_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_voxelSizeHalf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_chunkLineElementsP2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_chunkZElements,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_chunkTotalElements,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_freq,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_weight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_zMult,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_yMult,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_xMult,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_chunkYIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_chunkXIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_chunkLineElements,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_voxelSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_randomSeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Materials,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Materials_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AVoxelActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AVoxelActor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVoxelActor, 3096127558);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVoxelActor(Z_Construct_UClass_AVoxelActor, &AVoxelActor::StaticClass, TEXT("/Script/PixelFactory"), TEXT("AVoxelActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
