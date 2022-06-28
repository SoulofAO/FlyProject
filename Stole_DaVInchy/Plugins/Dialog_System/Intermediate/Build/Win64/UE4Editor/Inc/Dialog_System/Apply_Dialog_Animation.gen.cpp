// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dialog_System/Public/Apply_Dialog_Animation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApply_Dialog_Animation() {}
// Cross Module References
	DIALOG_SYSTEM_API UClass* Z_Construct_UClass_UApply_Dialog_Animation_NoRegister();
	DIALOG_SYSTEM_API UClass* Z_Construct_UClass_UApply_Dialog_Animation();
	DIALOG_SYSTEM_API UClass* Z_Construct_UClass_UApply_Dialog_Object_Main();
	UPackage* Z_Construct_UPackage__Script_Dialog_System();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	void UApply_Dialog_Animation::StaticRegisterNativesUApply_Dialog_Animation()
	{
	}
	UClass* Z_Construct_UClass_UApply_Dialog_Animation_NoRegister()
	{
		return UApply_Dialog_Animation::StaticClass();
	}
	struct Z_Construct_UClass_UApply_Dialog_Animation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnumAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EnumAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Loop_MetaData[];
#endif
		static void NewProp_Loop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Loop;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UApply_Dialog_Animation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UApply_Dialog_Object_Main,
		(UObject* (*)())Z_Construct_UPackage__Script_Dialog_System,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApply_Dialog_Animation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Apply_Dialog_Animation.h" },
		{ "ModuleRelativePath", "Public/Apply_Dialog_Animation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApply_Dialog_Animation_Statics::NewProp_AnimMontage_MetaData[] = {
		{ "Category", "Apply_Dialog_Animation" },
		{ "ModuleRelativePath", "Public/Apply_Dialog_Animation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UApply_Dialog_Animation_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UApply_Dialog_Animation, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UApply_Dialog_Animation_Statics::NewProp_AnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApply_Dialog_Animation_Statics::NewProp_AnimMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApply_Dialog_Animation_Statics::NewProp_EnumAnimation_MetaData[] = {
		{ "Category", "Apply_Dialog_Animation" },
		{ "ModuleRelativePath", "Public/Apply_Dialog_Animation.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UApply_Dialog_Animation_Statics::NewProp_EnumAnimation = { "EnumAnimation", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UApply_Dialog_Animation, EnumAnimation), nullptr, METADATA_PARAMS(Z_Construct_UClass_UApply_Dialog_Animation_Statics::NewProp_EnumAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApply_Dialog_Animation_Statics::NewProp_EnumAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApply_Dialog_Animation_Statics::NewProp_Loop_MetaData[] = {
		{ "Category", "Apply_Dialog_Animation" },
		{ "ModuleRelativePath", "Public/Apply_Dialog_Animation.h" },
	};
#endif
	void Z_Construct_UClass_UApply_Dialog_Animation_Statics::NewProp_Loop_SetBit(void* Obj)
	{
		((UApply_Dialog_Animation*)Obj)->Loop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UApply_Dialog_Animation_Statics::NewProp_Loop = { "Loop", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UApply_Dialog_Animation), &Z_Construct_UClass_UApply_Dialog_Animation_Statics::NewProp_Loop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UApply_Dialog_Animation_Statics::NewProp_Loop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApply_Dialog_Animation_Statics::NewProp_Loop_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UApply_Dialog_Animation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApply_Dialog_Animation_Statics::NewProp_AnimMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApply_Dialog_Animation_Statics::NewProp_EnumAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApply_Dialog_Animation_Statics::NewProp_Loop,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UApply_Dialog_Animation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApply_Dialog_Animation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UApply_Dialog_Animation_Statics::ClassParams = {
		&UApply_Dialog_Animation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UApply_Dialog_Animation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UApply_Dialog_Animation_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UApply_Dialog_Animation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UApply_Dialog_Animation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UApply_Dialog_Animation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UApply_Dialog_Animation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UApply_Dialog_Animation, 2900392775);
	template<> DIALOG_SYSTEM_API UClass* StaticClass<UApply_Dialog_Animation>()
	{
		return UApply_Dialog_Animation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UApply_Dialog_Animation(Z_Construct_UClass_UApply_Dialog_Animation, &UApply_Dialog_Animation::StaticClass, TEXT("/Script/Dialog_System"), TEXT("UApply_Dialog_Animation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UApply_Dialog_Animation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
