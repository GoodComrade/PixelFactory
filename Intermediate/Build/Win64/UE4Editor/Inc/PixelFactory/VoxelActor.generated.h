// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PIXELFACTORY_VoxelActor_generated_h
#error "VoxelActor.generated.h already included, missing '#pragma once' in VoxelActor.h"
#endif
#define PIXELFACTORY_VoxelActor_generated_h

#define PixelFactory_Source_PixelFactory_Public_VoxelActor_h_13_RPC_WRAPPERS \
	virtual TArray<int32> calculateNoise_Implementation(); \
 \
	DECLARE_FUNCTION(execcalculateNoise) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=this->calculateNoise_Implementation(); \
		P_NATIVE_END; \
	}


#define PixelFactory_Source_PixelFactory_Public_VoxelActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execcalculateNoise) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=this->calculateNoise_Implementation(); \
		P_NATIVE_END; \
	}


#define PixelFactory_Source_PixelFactory_Public_VoxelActor_h_13_EVENT_PARMS \
	struct VoxelActor_eventcalculateNoise_Parms \
	{ \
		TArray<int32> ReturnValue; \
	};


#define PixelFactory_Source_PixelFactory_Public_VoxelActor_h_13_CALLBACK_WRAPPERS
#define PixelFactory_Source_PixelFactory_Public_VoxelActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVoxelActor(); \
	friend PIXELFACTORY_API class UClass* Z_Construct_UClass_AVoxelActor(); \
public: \
	DECLARE_CLASS(AVoxelActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PixelFactory"), NO_API) \
	DECLARE_SERIALIZER(AVoxelActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PixelFactory_Source_PixelFactory_Public_VoxelActor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAVoxelActor(); \
	friend PIXELFACTORY_API class UClass* Z_Construct_UClass_AVoxelActor(); \
public: \
	DECLARE_CLASS(AVoxelActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/PixelFactory"), NO_API) \
	DECLARE_SERIALIZER(AVoxelActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PixelFactory_Source_PixelFactory_Public_VoxelActor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVoxelActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVoxelActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoxelActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoxelActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVoxelActor(AVoxelActor&&); \
	NO_API AVoxelActor(const AVoxelActor&); \
public:


#define PixelFactory_Source_PixelFactory_Public_VoxelActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVoxelActor(AVoxelActor&&); \
	NO_API AVoxelActor(const AVoxelActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoxelActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoxelActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVoxelActor)


#define PixelFactory_Source_PixelFactory_Public_VoxelActor_h_13_PRIVATE_PROPERTY_OFFSET
#define PixelFactory_Source_PixelFactory_Public_VoxelActor_h_10_PROLOG \
	PixelFactory_Source_PixelFactory_Public_VoxelActor_h_13_EVENT_PARMS


#define PixelFactory_Source_PixelFactory_Public_VoxelActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PixelFactory_Source_PixelFactory_Public_VoxelActor_h_13_PRIVATE_PROPERTY_OFFSET \
	PixelFactory_Source_PixelFactory_Public_VoxelActor_h_13_RPC_WRAPPERS \
	PixelFactory_Source_PixelFactory_Public_VoxelActor_h_13_CALLBACK_WRAPPERS \
	PixelFactory_Source_PixelFactory_Public_VoxelActor_h_13_INCLASS \
	PixelFactory_Source_PixelFactory_Public_VoxelActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PixelFactory_Source_PixelFactory_Public_VoxelActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PixelFactory_Source_PixelFactory_Public_VoxelActor_h_13_PRIVATE_PROPERTY_OFFSET \
	PixelFactory_Source_PixelFactory_Public_VoxelActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	PixelFactory_Source_PixelFactory_Public_VoxelActor_h_13_CALLBACK_WRAPPERS \
	PixelFactory_Source_PixelFactory_Public_VoxelActor_h_13_INCLASS_NO_PURE_DECLS \
	PixelFactory_Source_PixelFactory_Public_VoxelActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PixelFactory_Source_PixelFactory_Public_VoxelActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
