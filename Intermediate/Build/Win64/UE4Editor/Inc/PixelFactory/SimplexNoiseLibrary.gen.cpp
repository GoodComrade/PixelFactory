// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "SimplexNoiseLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimplexNoiseLibrary() {}
// Cross Module References
	PIXELFACTORY_API UClass* Z_Construct_UClass_USimplexNoiseLibrary_NoRegister();
	PIXELFACTORY_API UClass* Z_Construct_UClass_USimplexNoiseLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_PixelFactory();
	PIXELFACTORY_API UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_setNoiseSeed();
	PIXELFACTORY_API UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise1D();
	PIXELFACTORY_API UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise2D();
	PIXELFACTORY_API UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise3D();
	PIXELFACTORY_API UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D();
	PIXELFACTORY_API UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange1D();
	PIXELFACTORY_API UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D();
	PIXELFACTORY_API UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D();
	PIXELFACTORY_API UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D();
	PIXELFACTORY_API UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled1D();
	PIXELFACTORY_API UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled2D();
	PIXELFACTORY_API UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D();
	PIXELFACTORY_API UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D();
// End Cross Module References
	void USimplexNoiseLibrary::StaticRegisterNativesUSimplexNoiseLibrary()
	{
		UClass* Class = USimplexNoiseLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "setNoiseSeed", (Native)&USimplexNoiseLibrary::execsetNoiseSeed },
			{ "SimplexNoise1D", (Native)&USimplexNoiseLibrary::execSimplexNoise1D },
			{ "SimplexNoise2D", (Native)&USimplexNoiseLibrary::execSimplexNoise2D },
			{ "SimplexNoise3D", (Native)&USimplexNoiseLibrary::execSimplexNoise3D },
			{ "SimplexNoise4D", (Native)&USimplexNoiseLibrary::execSimplexNoise4D },
			{ "SimplexNoiseInRange1D", (Native)&USimplexNoiseLibrary::execSimplexNoiseInRange1D },
			{ "SimplexNoiseInRange2D", (Native)&USimplexNoiseLibrary::execSimplexNoiseInRange2D },
			{ "SimplexNoiseInRange3D", (Native)&USimplexNoiseLibrary::execSimplexNoiseInRange3D },
			{ "SimplexNoiseInRange4D", (Native)&USimplexNoiseLibrary::execSimplexNoiseInRange4D },
			{ "SimplexNoiseScaled1D", (Native)&USimplexNoiseLibrary::execSimplexNoiseScaled1D },
			{ "SimplexNoiseScaled2D", (Native)&USimplexNoiseLibrary::execSimplexNoiseScaled2D },
			{ "SimplexNoiseScaled3D", (Native)&USimplexNoiseLibrary::execSimplexNoiseScaled3D },
			{ "SimplexNoiseScaled4D", (Native)&USimplexNoiseLibrary::execSimplexNoiseScaled4D },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_setNoiseSeed()
	{
		struct SimplexNoiseLibrary_eventsetNoiseSeed_Parms
		{
			int32 newSeed;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newSeed_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_newSeed = { UE4CodeGen_Private::EPropertyClass::Int, "newSeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventsetNoiseSeed_Parms, newSeed), METADATA_PARAMS(NewProp_newSeed_MetaData, ARRAY_COUNT(NewProp_newSeed_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_newSeed,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SimplexNoise" },
				{ "ModuleRelativePath", "SimplexNoiseLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseLibrary, "setNoiseSeed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(SimplexNoiseLibrary_eventsetNoiseSeed_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise1D()
	{
		struct SimplexNoiseLibrary_eventSimplexNoise1D_Parms
		{
			float x;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoise1D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x = { UE4CodeGen_Private::EPropertyClass::Float, "x", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoise1D_Parms, x), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_x,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SimplexNoise" },
				{ "ModuleRelativePath", "SimplexNoiseLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseLibrary, "SimplexNoise1D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SimplexNoiseLibrary_eventSimplexNoise1D_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise2D()
	{
		struct SimplexNoiseLibrary_eventSimplexNoise2D_Parms
		{
			float x;
			float y;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoise2D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y = { UE4CodeGen_Private::EPropertyClass::Float, "y", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoise2D_Parms, y), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x = { UE4CodeGen_Private::EPropertyClass::Float, "x", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoise2D_Parms, x), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_y,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_x,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SimplexNoise" },
				{ "ModuleRelativePath", "SimplexNoiseLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseLibrary, "SimplexNoise2D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SimplexNoiseLibrary_eventSimplexNoise2D_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise3D()
	{
		struct SimplexNoiseLibrary_eventSimplexNoise3D_Parms
		{
			float x;
			float y;
			float z;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoise3D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_z = { UE4CodeGen_Private::EPropertyClass::Float, "z", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoise3D_Parms, z), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y = { UE4CodeGen_Private::EPropertyClass::Float, "y", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoise3D_Parms, y), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x = { UE4CodeGen_Private::EPropertyClass::Float, "x", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoise3D_Parms, x), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_z,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_y,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_x,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SimplexNoise" },
				{ "ModuleRelativePath", "SimplexNoiseLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseLibrary, "SimplexNoise3D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SimplexNoiseLibrary_eventSimplexNoise3D_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D()
	{
		struct SimplexNoiseLibrary_eventSimplexNoise4D_Parms
		{
			float x;
			float y;
			float z;
			float w;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoise4D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_w = { UE4CodeGen_Private::EPropertyClass::Float, "w", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoise4D_Parms, w), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_z = { UE4CodeGen_Private::EPropertyClass::Float, "z", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoise4D_Parms, z), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y = { UE4CodeGen_Private::EPropertyClass::Float, "y", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoise4D_Parms, y), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x = { UE4CodeGen_Private::EPropertyClass::Float, "x", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoise4D_Parms, x), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_w,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_z,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_y,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_x,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SimplexNoise" },
				{ "ModuleRelativePath", "SimplexNoiseLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseLibrary, "SimplexNoise4D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SimplexNoiseLibrary_eventSimplexNoise4D_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange1D()
	{
		struct SimplexNoiseLibrary_eventSimplexNoiseInRange1D_Parms
		{
			float x;
			float rangeMin;
			float rangeMax;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange1D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rangeMax = { UE4CodeGen_Private::EPropertyClass::Float, "rangeMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange1D_Parms, rangeMax), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rangeMin = { UE4CodeGen_Private::EPropertyClass::Float, "rangeMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange1D_Parms, rangeMin), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x = { UE4CodeGen_Private::EPropertyClass::Float, "x", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange1D_Parms, x), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_rangeMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_rangeMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_x,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SimplexNoise" },
				{ "ModuleRelativePath", "SimplexNoiseLibrary.h" },
				{ "ToolTip", "Return value in Range between two float numbers\nReturn Value is scaled by difference between rangeMin & rangeMax value" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseLibrary, "SimplexNoiseInRange1D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SimplexNoiseLibrary_eventSimplexNoiseInRange1D_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D()
	{
		struct SimplexNoiseLibrary_eventSimplexNoiseInRange2D_Parms
		{
			float x;
			float y;
			float rangeMin;
			float rangeMax;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange2D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rangeMax = { UE4CodeGen_Private::EPropertyClass::Float, "rangeMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange2D_Parms, rangeMax), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rangeMin = { UE4CodeGen_Private::EPropertyClass::Float, "rangeMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange2D_Parms, rangeMin), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y = { UE4CodeGen_Private::EPropertyClass::Float, "y", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange2D_Parms, y), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x = { UE4CodeGen_Private::EPropertyClass::Float, "x", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange2D_Parms, x), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_rangeMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_rangeMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_y,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_x,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SimplexNoise" },
				{ "ModuleRelativePath", "SimplexNoiseLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseLibrary, "SimplexNoiseInRange2D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SimplexNoiseLibrary_eventSimplexNoiseInRange2D_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D()
	{
		struct SimplexNoiseLibrary_eventSimplexNoiseInRange3D_Parms
		{
			float x;
			float y;
			float z;
			float rangeMin;
			float rangeMax;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange3D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rangeMax = { UE4CodeGen_Private::EPropertyClass::Float, "rangeMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange3D_Parms, rangeMax), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rangeMin = { UE4CodeGen_Private::EPropertyClass::Float, "rangeMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange3D_Parms, rangeMin), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_z = { UE4CodeGen_Private::EPropertyClass::Float, "z", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange3D_Parms, z), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y = { UE4CodeGen_Private::EPropertyClass::Float, "y", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange3D_Parms, y), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x = { UE4CodeGen_Private::EPropertyClass::Float, "x", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange3D_Parms, x), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_rangeMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_rangeMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_z,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_y,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_x,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SimplexNoise" },
				{ "ModuleRelativePath", "SimplexNoiseLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseLibrary, "SimplexNoiseInRange3D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SimplexNoiseLibrary_eventSimplexNoiseInRange3D_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D()
	{
		struct SimplexNoiseLibrary_eventSimplexNoiseInRange4D_Parms
		{
			float x;
			float y;
			float z;
			float w;
			float rangeMin;
			float rangeMax;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange4D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rangeMax = { UE4CodeGen_Private::EPropertyClass::Float, "rangeMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange4D_Parms, rangeMax), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rangeMin = { UE4CodeGen_Private::EPropertyClass::Float, "rangeMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange4D_Parms, rangeMin), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_w = { UE4CodeGen_Private::EPropertyClass::Float, "w", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange4D_Parms, w), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_z = { UE4CodeGen_Private::EPropertyClass::Float, "z", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange4D_Parms, z), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y = { UE4CodeGen_Private::EPropertyClass::Float, "y", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange4D_Parms, y), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x = { UE4CodeGen_Private::EPropertyClass::Float, "x", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseInRange4D_Parms, x), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_rangeMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_rangeMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_w,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_z,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_y,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_x,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SimplexNoise" },
				{ "ModuleRelativePath", "SimplexNoiseLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseLibrary, "SimplexNoiseInRange4D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SimplexNoiseLibrary_eventSimplexNoiseInRange4D_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled1D()
	{
		struct SimplexNoiseLibrary_eventSimplexNoiseScaled1D_Parms
		{
			float x;
			float s;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled1D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_s = { UE4CodeGen_Private::EPropertyClass::Float, "s", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled1D_Parms, s), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x = { UE4CodeGen_Private::EPropertyClass::Float, "x", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled1D_Parms, x), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_s,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_x,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SimplexNoise" },
				{ "ModuleRelativePath", "SimplexNoiseLibrary.h" },
				{ "ToolTip", "Scaled by float value" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseLibrary, "SimplexNoiseScaled1D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SimplexNoiseLibrary_eventSimplexNoiseScaled1D_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled2D()
	{
		struct SimplexNoiseLibrary_eventSimplexNoiseScaled2D_Parms
		{
			float x;
			float y;
			float s;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled2D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_s = { UE4CodeGen_Private::EPropertyClass::Float, "s", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled2D_Parms, s), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y = { UE4CodeGen_Private::EPropertyClass::Float, "y", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled2D_Parms, y), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x = { UE4CodeGen_Private::EPropertyClass::Float, "x", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled2D_Parms, x), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_s,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_y,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_x,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SimplexNoise" },
				{ "ModuleRelativePath", "SimplexNoiseLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseLibrary, "SimplexNoiseScaled2D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SimplexNoiseLibrary_eventSimplexNoiseScaled2D_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D()
	{
		struct SimplexNoiseLibrary_eventSimplexNoiseScaled3D_Parms
		{
			float x;
			float y;
			float z;
			float s;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled3D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_s = { UE4CodeGen_Private::EPropertyClass::Float, "s", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled3D_Parms, s), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_z = { UE4CodeGen_Private::EPropertyClass::Float, "z", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled3D_Parms, z), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y = { UE4CodeGen_Private::EPropertyClass::Float, "y", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled3D_Parms, y), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x = { UE4CodeGen_Private::EPropertyClass::Float, "x", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled3D_Parms, x), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_s,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_z,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_y,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_x,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SimplexNoise" },
				{ "ModuleRelativePath", "SimplexNoiseLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseLibrary, "SimplexNoiseScaled3D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SimplexNoiseLibrary_eventSimplexNoiseScaled3D_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D()
	{
		struct SimplexNoiseLibrary_eventSimplexNoiseScaled4D_Parms
		{
			float x;
			float y;
			float z;
			float w;
			float s;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled4D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_s = { UE4CodeGen_Private::EPropertyClass::Float, "s", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled4D_Parms, s), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_w = { UE4CodeGen_Private::EPropertyClass::Float, "w", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled4D_Parms, w), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_z = { UE4CodeGen_Private::EPropertyClass::Float, "z", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled4D_Parms, z), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_y = { UE4CodeGen_Private::EPropertyClass::Float, "y", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled4D_Parms, y), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_x = { UE4CodeGen_Private::EPropertyClass::Float, "x", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SimplexNoiseLibrary_eventSimplexNoiseScaled4D_Parms, x), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_s,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_w,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_z,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_y,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_x,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "SimplexNoise" },
				{ "ModuleRelativePath", "SimplexNoiseLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USimplexNoiseLibrary, "SimplexNoiseScaled4D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(SimplexNoiseLibrary_eventSimplexNoiseScaled4D_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USimplexNoiseLibrary_NoRegister()
	{
		return USimplexNoiseLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_USimplexNoiseLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_PixelFactory,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_USimplexNoiseLibrary_setNoiseSeed, "setNoiseSeed" }, // 2239009547
				{ &Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise1D, "SimplexNoise1D" }, // 689557790
				{ &Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise2D, "SimplexNoise2D" }, // 3711946212
				{ &Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise3D, "SimplexNoise3D" }, // 236317258
				{ &Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoise4D, "SimplexNoise4D" }, // 302295949
				{ &Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange1D, "SimplexNoiseInRange1D" }, // 3932472691
				{ &Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange2D, "SimplexNoiseInRange2D" }, // 863920817
				{ &Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange3D, "SimplexNoiseInRange3D" }, // 3344004982
				{ &Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseInRange4D, "SimplexNoiseInRange4D" }, // 1643059007
				{ &Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled1D, "SimplexNoiseScaled1D" }, // 1582056565
				{ &Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled2D, "SimplexNoiseScaled2D" }, // 526955512
				{ &Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled3D, "SimplexNoiseScaled3D" }, // 2356081719
				{ &Z_Construct_UFunction_USimplexNoiseLibrary_SimplexNoiseScaled4D, "SimplexNoiseScaled4D" }, // 2662556955
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "SimplexNoiseLibrary.h" },
				{ "ModuleRelativePath", "SimplexNoiseLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USimplexNoiseLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USimplexNoiseLibrary::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USimplexNoiseLibrary, 3116935176);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USimplexNoiseLibrary(Z_Construct_UClass_USimplexNoiseLibrary, &USimplexNoiseLibrary::StaticClass, TEXT("/Script/PixelFactory"), TEXT("USimplexNoiseLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimplexNoiseLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
