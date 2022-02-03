// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GetMeshVertex/Public/GetMeshVertexBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGetMeshVertexBPLibrary() {}
// Cross Module References
	GETMESHVERTEX_API UClass* Z_Construct_UClass_UGetMeshVertexBPLibrary_NoRegister();
	GETMESHVERTEX_API UClass* Z_Construct_UClass_UGetMeshVertexBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_GetMeshVertex();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UGetMeshVertexBPLibrary::execGetVertexColor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=UGetMeshVertexBPLibrary::GetVertexColor(Z_Param_Count,Z_Param_StaticMeshComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGetMeshVertexBPLibrary::execNormalize_Vector_MeshVertex)
	{
		P_GET_TARRAY(FVector,Z_Param_StaticMeshArrayVertex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=UGetMeshVertexBPLibrary::Normalize_Vector_MeshVertex(Z_Param_StaticMeshArrayVertex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGetMeshVertexBPLibrary::execGetVertexCount)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGetMeshVertexBPLibrary::GetVertexCount(Z_Param_StaticMeshComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGetMeshVertexBPLibrary::execGetVertexLocaltion)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UGetMeshVertexBPLibrary::GetVertexLocaltion(Z_Param_Count,Z_Param_StaticMeshComponent);
		P_NATIVE_END;
	}
	void UGetMeshVertexBPLibrary::StaticRegisterNativesUGetMeshVertexBPLibrary()
	{
		UClass* Class = UGetMeshVertexBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetVertexColor", &UGetMeshVertexBPLibrary::execGetVertexColor },
			{ "GetVertexCount", &UGetMeshVertexBPLibrary::execGetVertexCount },
			{ "GetVertexLocaltion", &UGetMeshVertexBPLibrary::execGetVertexLocaltion },
			{ "Normalize_Vector_MeshVertex", &UGetMeshVertexBPLibrary::execNormalize_Vector_MeshVertex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexColor_Statics
	{
		struct GetMeshVertexBPLibrary_eventGetVertexColor_Parms
		{
			int32 Count;
			UStaticMeshComponent* StaticMeshComponent;
			FColor ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexColor_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetMeshVertexBPLibrary_eventGetVertexColor_Parms, Count), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexColor_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexColor_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetMeshVertexBPLibrary_eventGetVertexColor_Parms, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexColor_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexColor_Statics::NewProp_StaticMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetMeshVertexBPLibrary_eventGetVertexColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexColor_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexColor_Statics::NewProp_StaticMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "GetMeshVertexTesting" },
		{ "DisplayName", "GetVertexColor" },
		{ "Keywords", "GetVertexColor" },
		{ "ModuleRelativePath", "Public/GetMeshVertexBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetMeshVertexBPLibrary, nullptr, "GetVertexColor", nullptr, nullptr, sizeof(GetMeshVertexBPLibrary_eventGetVertexColor_Parms), Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexCount_Statics
	{
		struct GetMeshVertexBPLibrary_eventGetVertexCount_Parms
		{
			UStaticMeshComponent* StaticMeshComponent;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexCount_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexCount_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetMeshVertexBPLibrary_eventGetVertexCount_Parms, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexCount_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexCount_Statics::NewProp_StaticMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetMeshVertexBPLibrary_eventGetVertexCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexCount_Statics::NewProp_StaticMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "GetMeshVertexTesting" },
		{ "DisplayName", "GetMeshVertexCount" },
		{ "Keywords", "GetMeshVertexCount" },
		{ "ModuleRelativePath", "Public/GetMeshVertexBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetMeshVertexBPLibrary, nullptr, "GetVertexCount", nullptr, nullptr, sizeof(GetMeshVertexBPLibrary_eventGetVertexCount_Parms), Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexLocaltion_Statics
	{
		struct GetMeshVertexBPLibrary_eventGetVertexLocaltion_Parms
		{
			int32 Count;
			UStaticMeshComponent* StaticMeshComponent;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexLocaltion_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetMeshVertexBPLibrary_eventGetVertexLocaltion_Parms, Count), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexLocaltion_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexLocaltion_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetMeshVertexBPLibrary_eventGetVertexLocaltion_Parms, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexLocaltion_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexLocaltion_Statics::NewProp_StaticMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexLocaltion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetMeshVertexBPLibrary_eventGetVertexLocaltion_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexLocaltion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexLocaltion_Statics::NewProp_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexLocaltion_Statics::NewProp_StaticMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexLocaltion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexLocaltion_Statics::Function_MetaDataParams[] = {
		{ "Category", "GetMeshVertexTesting" },
		{ "DisplayName", "GetMeshVertex" },
		{ "Keywords", "GetMeshVertex" },
		{ "ModuleRelativePath", "Public/GetMeshVertexBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexLocaltion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetMeshVertexBPLibrary, nullptr, "GetVertexLocaltion", nullptr, nullptr, sizeof(GetMeshVertexBPLibrary_eventGetVertexLocaltion_Parms), Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexLocaltion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexLocaltion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexLocaltion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexLocaltion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexLocaltion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexLocaltion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGetMeshVertexBPLibrary_Normalize_Vector_MeshVertex_Statics
	{
		struct GetMeshVertexBPLibrary_eventNormalize_Vector_MeshVertex_Parms
		{
			TArray<FVector> StaticMeshArrayVertex;
			TArray<FVector> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StaticMeshArrayVertex_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StaticMeshArrayVertex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGetMeshVertexBPLibrary_Normalize_Vector_MeshVertex_Statics::NewProp_StaticMeshArrayVertex_Inner = { "StaticMeshArrayVertex", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGetMeshVertexBPLibrary_Normalize_Vector_MeshVertex_Statics::NewProp_StaticMeshArrayVertex = { "StaticMeshArrayVertex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetMeshVertexBPLibrary_eventNormalize_Vector_MeshVertex_Parms, StaticMeshArrayVertex), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGetMeshVertexBPLibrary_Normalize_Vector_MeshVertex_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGetMeshVertexBPLibrary_Normalize_Vector_MeshVertex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GetMeshVertexBPLibrary_eventNormalize_Vector_MeshVertex_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGetMeshVertexBPLibrary_Normalize_Vector_MeshVertex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetMeshVertexBPLibrary_Normalize_Vector_MeshVertex_Statics::NewProp_StaticMeshArrayVertex_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetMeshVertexBPLibrary_Normalize_Vector_MeshVertex_Statics::NewProp_StaticMeshArrayVertex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetMeshVertexBPLibrary_Normalize_Vector_MeshVertex_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGetMeshVertexBPLibrary_Normalize_Vector_MeshVertex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGetMeshVertexBPLibrary_Normalize_Vector_MeshVertex_Statics::Function_MetaDataParams[] = {
		{ "Category", "GetMeshVertexTesting" },
		{ "DisplayName", "Normalize_Vector_Array" },
		{ "Keywords", "Normalize_Vector_Array" },
		{ "ModuleRelativePath", "Public/GetMeshVertexBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGetMeshVertexBPLibrary_Normalize_Vector_MeshVertex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGetMeshVertexBPLibrary, nullptr, "Normalize_Vector_MeshVertex", nullptr, nullptr, sizeof(GetMeshVertexBPLibrary_eventNormalize_Vector_MeshVertex_Parms), Z_Construct_UFunction_UGetMeshVertexBPLibrary_Normalize_Vector_MeshVertex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetMeshVertexBPLibrary_Normalize_Vector_MeshVertex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGetMeshVertexBPLibrary_Normalize_Vector_MeshVertex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGetMeshVertexBPLibrary_Normalize_Vector_MeshVertex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGetMeshVertexBPLibrary_Normalize_Vector_MeshVertex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGetMeshVertexBPLibrary_Normalize_Vector_MeshVertex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGetMeshVertexBPLibrary_NoRegister()
	{
		return UGetMeshVertexBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UGetMeshVertexBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGetMeshVertexBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GetMeshVertex,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGetMeshVertexBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexColor, "GetVertexColor" }, // 2062467879
		{ &Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexCount, "GetVertexCount" }, // 1503149892
		{ &Z_Construct_UFunction_UGetMeshVertexBPLibrary_GetVertexLocaltion, "GetVertexLocaltion" }, // 3201470274
		{ &Z_Construct_UFunction_UGetMeshVertexBPLibrary_Normalize_Vector_MeshVertex, "Normalize_Vector_MeshVertex" }, // 649905930
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGetMeshVertexBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "GetMeshVertexBPLibrary.h" },
		{ "ModuleRelativePath", "Public/GetMeshVertexBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGetMeshVertexBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGetMeshVertexBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGetMeshVertexBPLibrary_Statics::ClassParams = {
		&UGetMeshVertexBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGetMeshVertexBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGetMeshVertexBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGetMeshVertexBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGetMeshVertexBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGetMeshVertexBPLibrary, 832398143);
	template<> GETMESHVERTEX_API UClass* StaticClass<UGetMeshVertexBPLibrary>()
	{
		return UGetMeshVertexBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGetMeshVertexBPLibrary(Z_Construct_UClass_UGetMeshVertexBPLibrary, &UGetMeshVertexBPLibrary::StaticClass, TEXT("/Script/GetMeshVertex"), TEXT("UGetMeshVertexBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGetMeshVertexBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
