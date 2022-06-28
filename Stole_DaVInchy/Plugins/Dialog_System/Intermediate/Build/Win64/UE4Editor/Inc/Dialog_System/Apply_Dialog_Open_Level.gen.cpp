// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dialog_System/Public/Apply_Dialog_Open_Level.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApply_Dialog_Open_Level() {}
// Cross Module References
	DIALOG_SYSTEM_API UClass* Z_Construct_UClass_UApply_Dialog_Open_Level_NoRegister();
	DIALOG_SYSTEM_API UClass* Z_Construct_UClass_UApply_Dialog_Open_Level();
	DIALOG_SYSTEM_API UClass* Z_Construct_UClass_UApply_Dialog_Object_Main();
	UPackage* Z_Construct_UPackage__Script_Dialog_System();
// End Cross Module References
	void UApply_Dialog_Open_Level::StaticRegisterNativesUApply_Dialog_Open_Level()
	{
	}
	UClass* Z_Construct_UClass_UApply_Dialog_Open_Level_NoRegister()
	{
		return UApply_Dialog_Open_Level::StaticClass();
	}
	struct Z_Construct_UClass_UApply_Dialog_Open_Level_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UApply_Dialog_Open_Level_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UApply_Dialog_Object_Main,
		(UObject* (*)())Z_Construct_UPackage__Script_Dialog_System,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApply_Dialog_Open_Level_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Apply_Dialog_Open_Level.h" },
		{ "ModuleRelativePath", "Public/Apply_Dialog_Open_Level.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApply_Dialog_Open_Level_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Apply_Dialog_Open_Level" },
		{ "ModuleRelativePath", "Public/Apply_Dialog_Open_Level.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UApply_Dialog_Open_Level_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UApply_Dialog_Open_Level, Name), METADATA_PARAMS(Z_Construct_UClass_UApply_Dialog_Open_Level_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApply_Dialog_Open_Level_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UApply_Dialog_Open_Level_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApply_Dialog_Open_Level_Statics::NewProp_Name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UApply_Dialog_Open_Level_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApply_Dialog_Open_Level>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UApply_Dialog_Open_Level_Statics::ClassParams = {
		&UApply_Dialog_Open_Level::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UApply_Dialog_Open_Level_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UApply_Dialog_Open_Level_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UApply_Dialog_Open_Level_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UApply_Dialog_Open_Level_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UApply_Dialog_Open_Level()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UApply_Dialog_Open_Level_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UApply_Dialog_Open_Level, 1395721100);
	template<> DIALOG_SYSTEM_API UClass* StaticClass<UApply_Dialog_Open_Level>()
	{
		return UApply_Dialog_Open_Level::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UApply_Dialog_Open_Level(Z_Construct_UClass_UApply_Dialog_Open_Level, &UApply_Dialog_Open_Level::StaticClass, TEXT("/Script/Dialog_System"), TEXT("UApply_Dialog_Open_Level"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UApply_Dialog_Open_Level);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
