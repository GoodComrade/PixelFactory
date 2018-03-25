// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "PixelFactoryGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePixelFactoryGameMode() {}
// Cross Module References
	PIXELFACTORY_API UClass* Z_Construct_UClass_APixelFactoryGameMode_NoRegister();
	PIXELFACTORY_API UClass* Z_Construct_UClass_APixelFactoryGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PixelFactory();
// End Cross Module References
	void APixelFactoryGameMode::StaticRegisterNativesAPixelFactoryGameMode()
	{
	}
	UClass* Z_Construct_UClass_APixelFactoryGameMode_NoRegister()
	{
		return APixelFactoryGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_APixelFactoryGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_PixelFactory,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "PixelFactoryGameMode.h" },
				{ "ModuleRelativePath", "PixelFactoryGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APixelFactoryGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APixelFactoryGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(APixelFactoryGameMode, 4168808319);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APixelFactoryGameMode(Z_Construct_UClass_APixelFactoryGameMode, &APixelFactoryGameMode::StaticClass, TEXT("/Script/PixelFactory"), TEXT("APixelFactoryGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APixelFactoryGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
