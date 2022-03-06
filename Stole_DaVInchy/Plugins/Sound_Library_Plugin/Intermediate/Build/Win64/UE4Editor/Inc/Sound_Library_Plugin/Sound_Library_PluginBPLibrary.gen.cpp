// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sound_Library_Plugin/Public/Sound_Library_PluginBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSound_Library_PluginBPLibrary() {}
// Cross Module References
	SOUND_LIBRARY_PLUGIN_API UClass* Z_Construct_UClass_USound_Library_PluginBPLibrary_NoRegister();
	SOUND_LIBRARY_PLUGIN_API UClass* Z_Construct_UClass_USound_Library_PluginBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Sound_Library_Plugin();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USound_Library_PluginBPLibrary::execGet_Sound_Duration)
	{
		P_GET_OBJECT(USoundBase,Z_Param_Sound);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USound_Library_PluginBPLibrary::Get_Sound_Duration(Z_Param_Sound);
		P_NATIVE_END;
	}
	void USound_Library_PluginBPLibrary::StaticRegisterNativesUSound_Library_PluginBPLibrary()
	{
		UClass* Class = USound_Library_PluginBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get_Sound_Duration", &USound_Library_PluginBPLibrary::execGet_Sound_Duration },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USound_Library_PluginBPLibrary_Get_Sound_Duration_Statics
	{
		struct Sound_Library_PluginBPLibrary_eventGet_Sound_Duration_Parms
		{
			USoundBase* Sound;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USound_Library_PluginBPLibrary_Get_Sound_Duration_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Sound_Library_PluginBPLibrary_eventGet_Sound_Duration_Parms, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USound_Library_PluginBPLibrary_Get_Sound_Duration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Sound_Library_PluginBPLibrary_eventGet_Sound_Duration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USound_Library_PluginBPLibrary_Get_Sound_Duration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USound_Library_PluginBPLibrary_Get_Sound_Duration_Statics::NewProp_Sound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USound_Library_PluginBPLibrary_Get_Sound_Duration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USound_Library_PluginBPLibrary_Get_Sound_Duration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sound_Library_PluginTesting" },
		{ "DisplayName", "GetLengthSound" },
		{ "Keywords", "GetLengthSound" },
		{ "ModuleRelativePath", "Public/Sound_Library_PluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USound_Library_PluginBPLibrary_Get_Sound_Duration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USound_Library_PluginBPLibrary, nullptr, "Get_Sound_Duration", nullptr, nullptr, sizeof(Sound_Library_PluginBPLibrary_eventGet_Sound_Duration_Parms), Z_Construct_UFunction_USound_Library_PluginBPLibrary_Get_Sound_Duration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USound_Library_PluginBPLibrary_Get_Sound_Duration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USound_Library_PluginBPLibrary_Get_Sound_Duration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USound_Library_PluginBPLibrary_Get_Sound_Duration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USound_Library_PluginBPLibrary_Get_Sound_Duration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USound_Library_PluginBPLibrary_Get_Sound_Duration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USound_Library_PluginBPLibrary_NoRegister()
	{
		return USound_Library_PluginBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USound_Library_PluginBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USound_Library_PluginBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Sound_Library_Plugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USound_Library_PluginBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USound_Library_PluginBPLibrary_Get_Sound_Duration, "Get_Sound_Duration" }, // 256648178
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USound_Library_PluginBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "Sound_Library_PluginBPLibrary.h" },
		{ "ModuleRelativePath", "Public/Sound_Library_PluginBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USound_Library_PluginBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USound_Library_PluginBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USound_Library_PluginBPLibrary_Statics::ClassParams = {
		&USound_Library_PluginBPLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USound_Library_PluginBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USound_Library_PluginBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USound_Library_PluginBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USound_Library_PluginBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USound_Library_PluginBPLibrary, 952823869);
	template<> SOUND_LIBRARY_PLUGIN_API UClass* StaticClass<USound_Library_PluginBPLibrary>()
	{
		return USound_Library_PluginBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USound_Library_PluginBPLibrary(Z_Construct_UClass_USound_Library_PluginBPLibrary, &USound_Library_PluginBPLibrary::StaticClass, TEXT("/Script/Sound_Library_Plugin"), TEXT("USound_Library_PluginBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USound_Library_PluginBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
