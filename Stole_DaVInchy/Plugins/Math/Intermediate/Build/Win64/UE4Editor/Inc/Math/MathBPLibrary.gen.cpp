// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Math/Public/MathBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMathBPLibrary() {}
// Cross Module References
	MATH_API UClass* Z_Construct_UClass_UMathBPLibrary_NoRegister();
	MATH_API UClass* Z_Construct_UClass_UMathBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Math();
// End Cross Module References
	DEFINE_FUNCTION(UMathBPLibrary::execMathAtanInDegrees)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AtangValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UMathBPLibrary::MathAtanInDegrees(Z_Param_AtangValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMathBPLibrary::execMathAtan)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AtangValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UMathBPLibrary::MathAtan(Z_Param_AtangValue);
		P_NATIVE_END;
	}
	void UMathBPLibrary::StaticRegisterNativesUMathBPLibrary()
	{
		UClass* Class = UMathBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MathAtan", &UMathBPLibrary::execMathAtan },
			{ "MathAtanInDegrees", &UMathBPLibrary::execMathAtanInDegrees },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMathBPLibrary_MathAtan_Statics
	{
		struct MathBPLibrary_eventMathAtan_Parms
		{
			float AtangValue;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AtangValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMathBPLibrary_MathAtan_Statics::NewProp_AtangValue = { "AtangValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathBPLibrary_eventMathAtan_Parms, AtangValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMathBPLibrary_MathAtan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathBPLibrary_eventMathAtan_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathBPLibrary_MathAtan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathBPLibrary_MathAtan_Statics::NewProp_AtangValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathBPLibrary_MathAtan_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathBPLibrary_MathAtan_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math" },
		{ "DisplayName", "AtangInRadians" },
		{ "Keywords", "AtangInRadians" },
		{ "ModuleRelativePath", "Public/MathBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathBPLibrary_MathAtan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathBPLibrary, nullptr, "MathAtan", nullptr, nullptr, sizeof(MathBPLibrary_eventMathAtan_Parms), Z_Construct_UFunction_UMathBPLibrary_MathAtan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathBPLibrary_MathAtan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMathBPLibrary_MathAtan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathBPLibrary_MathAtan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMathBPLibrary_MathAtan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMathBPLibrary_MathAtan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMathBPLibrary_MathAtanInDegrees_Statics
	{
		struct MathBPLibrary_eventMathAtanInDegrees_Parms
		{
			float AtangValue;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AtangValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMathBPLibrary_MathAtanInDegrees_Statics::NewProp_AtangValue = { "AtangValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathBPLibrary_eventMathAtanInDegrees_Parms, AtangValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMathBPLibrary_MathAtanInDegrees_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MathBPLibrary_eventMathAtanInDegrees_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMathBPLibrary_MathAtanInDegrees_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathBPLibrary_MathAtanInDegrees_Statics::NewProp_AtangValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMathBPLibrary_MathAtanInDegrees_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMathBPLibrary_MathAtanInDegrees_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math" },
		{ "DisplayName", "AtangInDegrees" },
		{ "Keywords", "AtangInDegrees" },
		{ "ModuleRelativePath", "Public/MathBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMathBPLibrary_MathAtanInDegrees_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathBPLibrary, nullptr, "MathAtanInDegrees", nullptr, nullptr, sizeof(MathBPLibrary_eventMathAtanInDegrees_Parms), Z_Construct_UFunction_UMathBPLibrary_MathAtanInDegrees_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathBPLibrary_MathAtanInDegrees_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMathBPLibrary_MathAtanInDegrees_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMathBPLibrary_MathAtanInDegrees_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMathBPLibrary_MathAtanInDegrees()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMathBPLibrary_MathAtanInDegrees_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMathBPLibrary_NoRegister()
	{
		return UMathBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMathBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMathBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Math,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMathBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMathBPLibrary_MathAtan, "MathAtan" }, // 3006943146
		{ &Z_Construct_UFunction_UMathBPLibrary_MathAtanInDegrees, "MathAtanInDegrees" }, // 2338499904
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMathBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "MathBPLibrary.h" },
		{ "ModuleRelativePath", "Public/MathBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMathBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMathBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMathBPLibrary_Statics::ClassParams = {
		&UMathBPLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMathBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMathBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMathBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMathBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMathBPLibrary, 3202044605);
	template<> MATH_API UClass* StaticClass<UMathBPLibrary>()
	{
		return UMathBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMathBPLibrary(Z_Construct_UClass_UMathBPLibrary, &UMathBPLibrary::StaticClass, TEXT("/Script/Math"), TEXT("UMathBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMathBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
