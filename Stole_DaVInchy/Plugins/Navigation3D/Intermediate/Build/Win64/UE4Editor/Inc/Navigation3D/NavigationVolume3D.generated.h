// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FIntVector;
struct FVector;
class UObject;
#ifdef NAVIGATION3D_NavigationVolume3D_generated_h
#error "NavigationVolume3D.generated.h already included, missing '#pragma once' in NavigationVolume3D.h"
#endif
#define NAVIGATION3D_NavigationVolume3D_generated_h

#define Stole_DaVInchy_Plugins_Navigation3D_Source_Navigation3D_Public_NavigationVolume3D_h_15_SPARSE_DATA
#define Stole_DaVInchy_Plugins_Navigation3D_Source_Navigation3D_Public_NavigationVolume3D_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDivisionSize); \
	DECLARE_FUNCTION(execGetDivisionsZ); \
	DECLARE_FUNCTION(execGetDivisionsY); \
	DECLARE_FUNCTION(execGetDivisionsX); \
	DECLARE_FUNCTION(execGetTotalDivisions); \
	DECLARE_FUNCTION(execConvertCoordinatesToLocation); \
	DECLARE_FUNCTION(execConvertLocationToCoordinates); \
	DECLARE_FUNCTION(execFindPath);


#define Stole_DaVInchy_Plugins_Navigation3D_Source_Navigation3D_Public_NavigationVolume3D_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDivisionSize); \
	DECLARE_FUNCTION(execGetDivisionsZ); \
	DECLARE_FUNCTION(execGetDivisionsY); \
	DECLARE_FUNCTION(execGetDivisionsX); \
	DECLARE_FUNCTION(execGetTotalDivisions); \
	DECLARE_FUNCTION(execConvertCoordinatesToLocation); \
	DECLARE_FUNCTION(execConvertLocationToCoordinates); \
	DECLARE_FUNCTION(execFindPath);


#define Stole_DaVInchy_Plugins_Navigation3D_Source_Navigation3D_Public_NavigationVolume3D_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANavigationVolume3D(); \
	friend struct Z_Construct_UClass_ANavigationVolume3D_Statics; \
public: \
	DECLARE_CLASS(ANavigationVolume3D, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Navigation3D"), NO_API) \
	DECLARE_SERIALIZER(ANavigationVolume3D)


#define Stole_DaVInchy_Plugins_Navigation3D_Source_Navigation3D_Public_NavigationVolume3D_h_15_INCLASS \
private: \
	static void StaticRegisterNativesANavigationVolume3D(); \
	friend struct Z_Construct_UClass_ANavigationVolume3D_Statics; \
public: \
	DECLARE_CLASS(ANavigationVolume3D, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Navigation3D"), NO_API) \
	DECLARE_SERIALIZER(ANavigationVolume3D)


#define Stole_DaVInchy_Plugins_Navigation3D_Source_Navigation3D_Public_NavigationVolume3D_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANavigationVolume3D(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANavigationVolume3D) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANavigationVolume3D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavigationVolume3D); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANavigationVolume3D(ANavigationVolume3D&&); \
	NO_API ANavigationVolume3D(const ANavigationVolume3D&); \
public:


#define Stole_DaVInchy_Plugins_Navigation3D_Source_Navigation3D_Public_NavigationVolume3D_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANavigationVolume3D(ANavigationVolume3D&&); \
	NO_API ANavigationVolume3D(const ANavigationVolume3D&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANavigationVolume3D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavigationVolume3D); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANavigationVolume3D)


#define Stole_DaVInchy_Plugins_Navigation3D_Source_Navigation3D_Public_NavigationVolume3D_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DefaultSceneComponent() { return STRUCT_OFFSET(ANavigationVolume3D, DefaultSceneComponent); } \
	FORCEINLINE static uint32 __PPO__ProceduralMesh() { return STRUCT_OFFSET(ANavigationVolume3D, ProceduralMesh); } \
	FORCEINLINE static uint32 __PPO__DivisionsX() { return STRUCT_OFFSET(ANavigationVolume3D, DivisionsX); } \
	FORCEINLINE static uint32 __PPO__DivisionsY() { return STRUCT_OFFSET(ANavigationVolume3D, DivisionsY); } \
	FORCEINLINE static uint32 __PPO__DivisionsZ() { return STRUCT_OFFSET(ANavigationVolume3D, DivisionsZ); } \
	FORCEINLINE static uint32 __PPO__DivisionSize() { return STRUCT_OFFSET(ANavigationVolume3D, DivisionSize); } \
	FORCEINLINE static uint32 __PPO__MinSharedNeighborAxes() { return STRUCT_OFFSET(ANavigationVolume3D, MinSharedNeighborAxes); } \
	FORCEINLINE static uint32 __PPO__LineThickness() { return STRUCT_OFFSET(ANavigationVolume3D, LineThickness); } \
	FORCEINLINE static uint32 __PPO__Color() { return STRUCT_OFFSET(ANavigationVolume3D, Color); }


#define Stole_DaVInchy_Plugins_Navigation3D_Source_Navigation3D_Public_NavigationVolume3D_h_12_PROLOG
#define Stole_DaVInchy_Plugins_Navigation3D_Source_Navigation3D_Public_NavigationVolume3D_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stole_DaVInchy_Plugins_Navigation3D_Source_Navigation3D_Public_NavigationVolume3D_h_15_PRIVATE_PROPERTY_OFFSET \
	Stole_DaVInchy_Plugins_Navigation3D_Source_Navigation3D_Public_NavigationVolume3D_h_15_SPARSE_DATA \
	Stole_DaVInchy_Plugins_Navigation3D_Source_Navigation3D_Public_NavigationVolume3D_h_15_RPC_WRAPPERS \
	Stole_DaVInchy_Plugins_Navigation3D_Source_Navigation3D_Public_NavigationVolume3D_h_15_INCLASS \
	Stole_DaVInchy_Plugins_Navigation3D_Source_Navigation3D_Public_NavigationVolume3D_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Stole_DaVInchy_Plugins_Navigation3D_Source_Navigation3D_Public_NavigationVolume3D_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Stole_DaVInchy_Plugins_Navigation3D_Source_Navigation3D_Public_NavigationVolume3D_h_15_PRIVATE_PROPERTY_OFFSET \
	Stole_DaVInchy_Plugins_Navigation3D_Source_Navigation3D_Public_NavigationVolume3D_h_15_SPARSE_DATA \
	Stole_DaVInchy_Plugins_Navigation3D_Source_Navigation3D_Public_NavigationVolume3D_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Stole_DaVInchy_Plugins_Navigation3D_Source_Navigation3D_Public_NavigationVolume3D_h_15_INCLASS_NO_PURE_DECLS \
	Stole_DaVInchy_Plugins_Navigation3D_Source_Navigation3D_Public_NavigationVolume3D_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATION3D_API UClass* StaticClass<class ANavigationVolume3D>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Stole_DaVInchy_Plugins_Navigation3D_Source_Navigation3D_Public_NavigationVolume3D_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
