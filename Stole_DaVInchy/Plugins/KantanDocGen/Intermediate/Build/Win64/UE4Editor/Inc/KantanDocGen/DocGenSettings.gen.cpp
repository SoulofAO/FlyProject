// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KantanDocGen/Private/DocGenSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDocGenSettings() {}
// Cross Module References
	KANTANDOCGEN_API UScriptStruct* Z_Construct_UScriptStruct_FKantanDocGenSettings();
	UPackage* Z_Construct_UPackage__Script_KantanDocGen();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	KANTANDOCGEN_API UClass* Z_Construct_UClass_UKantanDocGenSettingsObject_NoRegister();
	KANTANDOCGEN_API UClass* Z_Construct_UClass_UKantanDocGenSettingsObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FKantanDocGenSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KANTANDOCGEN_API uint32 Get_Z_Construct_UScriptStruct_FKantanDocGenSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKantanDocGenSettings, Z_Construct_UPackage__Script_KantanDocGen(), TEXT("KantanDocGenSettings"), sizeof(FKantanDocGenSettings), Get_Z_Construct_UScriptStruct_FKantanDocGenSettings_Hash());
	}
	return Singleton;
}
template<> KANTANDOCGEN_API UScriptStruct* StaticStruct<FKantanDocGenSettings>()
{
	return FKantanDocGenSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKantanDocGenSettings(FKantanDocGenSettings::StaticStruct, TEXT("/Script/KantanDocGen"), TEXT("KantanDocGenSettings"), false, nullptr, nullptr);
static struct FScriptStruct_KantanDocGen_StaticRegisterNativesFKantanDocGenSettings
{
	FScriptStruct_KantanDocGen_StaticRegisterNativesFKantanDocGenSettings()
	{
		UScriptStruct::DeferCppStructOps<FKantanDocGenSettings>(FName(TEXT("KantanDocGenSettings")));
	}
} ScriptStruct_KantanDocGen_StaticRegisterNativesFKantanDocGenSettings;
	struct Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DocumentationTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DocumentationTitle;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NativeModules_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NativeModules_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NativeModules;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ContentPaths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentPaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ContentPaths;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SpecificClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecificClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpecificClasses;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ExcludedClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExcludedClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExcludedClasses;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputDirectory_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutputDirectory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueprintContextClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BlueprintContextClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCleanOutputDirectory_MetaData[];
#endif
		static void NewProp_bCleanOutputDirectory_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCleanOutputDirectory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/DocGenSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKantanDocGenSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_DocumentationTitle_MetaData[] = {
		{ "Category", "Documentation" },
		{ "ModuleRelativePath", "Private/DocGenSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_DocumentationTitle = { "DocumentationTitle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKantanDocGenSettings, DocumentationTitle), METADATA_PARAMS(Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_DocumentationTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_DocumentationTitle_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_NativeModules_Inner = { "NativeModules", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_NativeModules_MetaData[] = {
		{ "Category", "Class Search" },
		{ "ModuleRelativePath", "Private/DocGenSettings.h" },
		{ "Tooltip", "Raw module names (Do not prefix with '/Script')." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_NativeModules = { "NativeModules", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKantanDocGenSettings, NativeModules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_NativeModules_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_NativeModules_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_ContentPaths_Inner = { "ContentPaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_ContentPaths_MetaData[] = {
		{ "Category", "Class Search" },
		{ "Comment", "/** List of paths in which to search for blueprints to document. *///, Meta = (Tooltip = \"Path to content subfolder, e.g. '/Game/MyFolder' or '/PluginName/MyFolder'.\"))\n//TArray< FName > ContentPaths;\n" },
		{ "ContentDir", "" },
		{ "ModuleRelativePath", "Private/DocGenSettings.h" },
		{ "ToolTip", "List of paths in which to search for blueprints to document. //, Meta = (Tooltip = \"Path to content subfolder, e.g. '/Game/MyFolder' or '/PluginName/MyFolder'.\"))\n//TArray< FName > ContentPaths;" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_ContentPaths = { "ContentPaths", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKantanDocGenSettings, ContentPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_ContentPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_ContentPaths_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_SpecificClasses_Inner = { "SpecificClasses", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_SpecificClasses_MetaData[] = {
		{ "Comment", "/** Names of specific classes/blueprints to document. *///EditAnywhere, Category = \"Class Search\")\n" },
		{ "ModuleRelativePath", "Private/DocGenSettings.h" },
		{ "ToolTip", "Names of specific classes/blueprints to document. //EditAnywhere, Category = \"Class Search\")" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_SpecificClasses = { "SpecificClasses", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKantanDocGenSettings, SpecificClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_SpecificClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_SpecificClasses_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_ExcludedClasses_Inner = { "ExcludedClasses", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_ExcludedClasses_MetaData[] = {
		{ "Comment", "/** Names of specific classes/blueprints to exclude. *///EditAnywhere, Category = \"Class Search\")\n" },
		{ "ModuleRelativePath", "Private/DocGenSettings.h" },
		{ "ToolTip", "Names of specific classes/blueprints to exclude. //EditAnywhere, Category = \"Class Search\")" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_ExcludedClasses = { "ExcludedClasses", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKantanDocGenSettings, ExcludedClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_ExcludedClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_ExcludedClasses_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_OutputDirectory_MetaData[] = {
		{ "Category", "Output" },
		{ "ModuleRelativePath", "Private/DocGenSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_OutputDirectory = { "OutputDirectory", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKantanDocGenSettings, OutputDirectory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_OutputDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_OutputDirectory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_BlueprintContextClass_MetaData[] = {
		{ "Category", "Class Search" },
		{ "ModuleRelativePath", "Private/DocGenSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_BlueprintContextClass = { "BlueprintContextClass", nullptr, (EPropertyFlags)0x0014040000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKantanDocGenSettings, BlueprintContextClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_BlueprintContextClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_BlueprintContextClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_bCleanOutputDirectory_MetaData[] = {
		{ "Category", "Output" },
		{ "ModuleRelativePath", "Private/DocGenSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_bCleanOutputDirectory_SetBit(void* Obj)
	{
		((FKantanDocGenSettings*)Obj)->bCleanOutputDirectory = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_bCleanOutputDirectory = { "bCleanOutputDirectory", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FKantanDocGenSettings), &Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_bCleanOutputDirectory_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_bCleanOutputDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_bCleanOutputDirectory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_DocumentationTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_NativeModules_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_NativeModules,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_ContentPaths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_ContentPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_SpecificClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_SpecificClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_ExcludedClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_ExcludedClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_OutputDirectory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_BlueprintContextClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::NewProp_bCleanOutputDirectory,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KantanDocGen,
		nullptr,
		&NewStructOps,
		"KantanDocGenSettings",
		sizeof(FKantanDocGenSettings),
		alignof(FKantanDocGenSettings),
		Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKantanDocGenSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKantanDocGenSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_KantanDocGen();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KantanDocGenSettings"), sizeof(FKantanDocGenSettings), Get_Z_Construct_UScriptStruct_FKantanDocGenSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKantanDocGenSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKantanDocGenSettings_Hash() { return 2584576436U; }
	void UKantanDocGenSettingsObject::StaticRegisterNativesUKantanDocGenSettingsObject()
	{
	}
	UClass* Z_Construct_UClass_UKantanDocGenSettingsObject_NoRegister()
	{
		return UKantanDocGenSettingsObject::StaticClass();
	}
	struct Z_Construct_UClass_UKantanDocGenSettingsObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKantanDocGenSettingsObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_KantanDocGen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanDocGenSettingsObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DocGenSettings.h" },
		{ "ModuleRelativePath", "Private/DocGenSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanDocGenSettingsObject_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Kantan DocGen" },
		{ "ModuleRelativePath", "Private/DocGenSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKantanDocGenSettingsObject_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKantanDocGenSettingsObject, Settings), Z_Construct_UScriptStruct_FKantanDocGenSettings, METADATA_PARAMS(Z_Construct_UClass_UKantanDocGenSettingsObject_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKantanDocGenSettingsObject_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKantanDocGenSettingsObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanDocGenSettingsObject_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKantanDocGenSettingsObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKantanDocGenSettingsObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKantanDocGenSettingsObject_Statics::ClassParams = {
		&UKantanDocGenSettingsObject::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKantanDocGenSettingsObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKantanDocGenSettingsObject_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UKantanDocGenSettingsObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKantanDocGenSettingsObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKantanDocGenSettingsObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKantanDocGenSettingsObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKantanDocGenSettingsObject, 837132815);
	template<> KANTANDOCGEN_API UClass* StaticClass<UKantanDocGenSettingsObject>()
	{
		return UKantanDocGenSettingsObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKantanDocGenSettingsObject(Z_Construct_UClass_UKantanDocGenSettingsObject, &UKantanDocGenSettingsObject::StaticClass, TEXT("/Script/KantanDocGen"), TEXT("UKantanDocGenSettingsObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKantanDocGenSettingsObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
