// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "PixelFactoryHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePixelFactoryHUD() {}
// Cross Module References
	PIXELFACTORY_API UClass* Z_Construct_UClass_APixelFactoryHUD_NoRegister();
	PIXELFACTORY_API UClass* Z_Construct_UClass_APixelFactoryHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_PixelFactory();
// End Cross Module References
	void APixelFactoryHUD::StaticRegisterNativesAPixelFactoryHUD()
	{
	}
	UClass* Z_Construct_UClass_APixelFactoryHUD_NoRegister()
	{
		return APixelFactoryHUD::StaticClass();
	}
	UClass* Z_Construct_UClass_APixelFactoryHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AHUD,
				(UObject* (*)())Z_Construct_UPackage__Script_PixelFactory,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Rendering Actor Input Replication" },
				{ "IncludePath", "PixelFactoryHUD.h" },
				{ "ModuleRelativePath", "PixelFactoryHUD.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APixelFactoryHUD>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APixelFactoryHUD::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0080028Cu,
				nullptr, 0,
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APixelFactoryHUD, 2566482858);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APixelFactoryHUD(Z_Construct_UClass_APixelFactoryHUD, &APixelFactoryHUD::StaticClass, TEXT("/Script/PixelFactory"), TEXT("APixelFactoryHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APixelFactoryHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
