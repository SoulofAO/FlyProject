// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dialog_System/Public/Apply_Dialog_Object_Main.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApply_Dialog_Object_Main() {}
// Cross Module References
	DIALOG_SYSTEM_API UEnum* Z_Construct_UEnum_Dialog_System_Dialog_Type();
	UPackage* Z_Construct_UPackage__Script_Dialog_System();
	DIALOG_SYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FMain_Dialog_Struct();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	DIALOG_SYSTEM_API UClass* Z_Construct_UClass_UApply_Dialog_Object_Main_NoRegister();
	DIALOG_SYSTEM_API UClass* Z_Construct_UClass_UApply_Dialog_Object_Main();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static UEnum* Dialog_Type_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Dialog_System_Dialog_Type, Z_Construct_UPackage__Script_Dialog_System(), TEXT("Dialog_Type"));
		}
		return Singleton;
	}
	template<> DIALOG_SYSTEM_API UEnum* StaticEnum<Dialog_Type>()
	{
		return Dialog_Type_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_Dialog_Type(Dialog_Type_StaticEnum, TEXT("/Script/Dialog_System"), TEXT("Dialog_Type"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Dialog_System_Dialog_Type_Hash() { return 690337649U; }
	UEnum* Z_Construct_UEnum_Dialog_System_Dialog_Type()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Dialog_System();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("Dialog_Type"), 0, Get_Z_Construct_UEnum_Dialog_System_Dialog_Type_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Dialog_Type::None", (int64)Dialog_Type::None },
				{ "Dialog_Type::Words", (int64)Dialog_Type::Words },
				{ "Dialog_Type::Answer", (int64)Dialog_Type::Answer },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Answer.DisplayName", "Answer" },
				{ "Answer.Name", "Dialog_Type::Answer" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Apply_Dialog_Object_Main.h" },
				{ "None.DisplayName", "None" },
				{ "None.Name", "Dialog_Type::None" },
				{ "Words.DisplayName", "Words" },
				{ "Words.Name", "Dialog_Type::Words" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Dialog_System,
				nullptr,
				"Dialog_Type",
				"Dialog_Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}

static_assert(std::is_polymorphic<FMain_Dialog_Struct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FMain_Dialog_Struct cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FMain_Dialog_Struct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DIALOG_SYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FMain_Dialog_Struct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMain_Dialog_Struct, Z_Construct_UPackage__Script_Dialog_System(), TEXT("Main_Dialog_Struct"), sizeof(FMain_Dialog_Struct), Get_Z_Construct_UScriptStruct_FMain_Dialog_Struct_Hash());
	}
	return Singleton;
}
template<> DIALOG_SYSTEM_API UScriptStruct* StaticStruct<FMain_Dialog_Struct>()
{
	return FMain_Dialog_Struct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMain_Dialog_Struct(FMain_Dialog_Struct::StaticStruct, TEXT("/Script/Dialog_System"), TEXT("Main_Dialog_Struct"), false, nullptr, nullptr);
static struct FScriptStruct_Dialog_System_StaticRegisterNativesFMain_Dialog_Struct
{
	FScriptStruct_Dialog_System_StaticRegisterNativesFMain_Dialog_Struct()
	{
		UScriptStruct::DeferCppStructOps<FMain_Dialog_Struct>(FName(TEXT("Main_Dialog_Struct")));
	}
} ScriptStruct_Dialog_System_StaticRegisterNativesFMain_Dialog_Struct;
	struct Z_Construct_UScriptStruct_FMain_Dialog_Struct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Apply_Dialog_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Apply_Dialog;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMain_Dialog_Struct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Apply_Dialog_Object_Main.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMain_Dialog_Struct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMain_Dialog_Struct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMain_Dialog_Struct_Statics::NewProp_Apply_Dialog_MetaData[] = {
		{ "Category", "Main_Dialog_Struct" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Apply_Dialog_Object_Main.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMain_Dialog_Struct_Statics::NewProp_Apply_Dialog = { "Apply_Dialog", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMain_Dialog_Struct, Apply_Dialog), Z_Construct_UClass_UApply_Dialog_Object_Main_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMain_Dialog_Struct_Statics::NewProp_Apply_Dialog_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMain_Dialog_Struct_Statics::NewProp_Apply_Dialog_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMain_Dialog_Struct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMain_Dialog_Struct_Statics::NewProp_Apply_Dialog,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMain_Dialog_Struct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Dialog_System,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"Main_Dialog_Struct",
		sizeof(FMain_Dialog_Struct),
		alignof(FMain_Dialog_Struct),
		Z_Construct_UScriptStruct_FMain_Dialog_Struct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMain_Dialog_Struct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMain_Dialog_Struct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMain_Dialog_Struct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMain_Dialog_Struct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMain_Dialog_Struct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Dialog_System();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Main_Dialog_Struct"), sizeof(FMain_Dialog_Struct), Get_Z_Construct_UScriptStruct_FMain_Dialog_Struct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMain_Dialog_Struct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMain_Dialog_Struct_Hash() { return 4153526603U; }
	DEFINE_FUNCTION(UApply_Dialog_Object_Main::execGetOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetOwner();
		P_NATIVE_END;
	}
	static FName NAME_UApply_Dialog_Object_Main_ApplyCommand = FName(TEXT("ApplyCommand"));
	int32 UApply_Dialog_Object_Main::ApplyCommand(UObject* WorldContextObject, AActor* Caller)
	{
		Apply_Dialog_Object_Main_eventApplyCommand_Parms Parms;
		Parms.WorldContextObject=WorldContextObject;
		Parms.Caller=Caller;
		ProcessEvent(FindFunctionChecked(NAME_UApply_Dialog_Object_Main_ApplyCommand),&Parms);
		return Parms.ReturnValue;
	}
	void UApply_Dialog_Object_Main::StaticRegisterNativesUApply_Dialog_Object_Main()
	{
		UClass* Class = UApply_Dialog_Object_Main::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOwner", &UApply_Dialog_Object_Main::execGetOwner },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UApply_Dialog_Object_Main_ApplyCommand_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Caller;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UApply_Dialog_Object_Main_ApplyCommand_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apply_Dialog_Object_Main_eventApplyCommand_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UApply_Dialog_Object_Main_ApplyCommand_Statics::NewProp_Caller = { "Caller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apply_Dialog_Object_Main_eventApplyCommand_Parms, Caller), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UApply_Dialog_Object_Main_ApplyCommand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apply_Dialog_Object_Main_eventApplyCommand_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApply_Dialog_Object_Main_ApplyCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApply_Dialog_Object_Main_ApplyCommand_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApply_Dialog_Object_Main_ApplyCommand_Statics::NewProp_Caller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApply_Dialog_Object_Main_ApplyCommand_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApply_Dialog_Object_Main_ApplyCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "Apply_Dialog" },
		{ "ModuleRelativePath", "Public/Apply_Dialog_Object_Main.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApply_Dialog_Object_Main_ApplyCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApply_Dialog_Object_Main, nullptr, "ApplyCommand", nullptr, nullptr, sizeof(Apply_Dialog_Object_Main_eventApplyCommand_Parms), Z_Construct_UFunction_UApply_Dialog_Object_Main_ApplyCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApply_Dialog_Object_Main_ApplyCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApply_Dialog_Object_Main_ApplyCommand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApply_Dialog_Object_Main_ApplyCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApply_Dialog_Object_Main_ApplyCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApply_Dialog_Object_Main_ApplyCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UApply_Dialog_Object_Main_GetOwner_Statics
	{
		struct Apply_Dialog_Object_Main_eventGetOwner_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UApply_Dialog_Object_Main_GetOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Apply_Dialog_Object_Main_eventGetOwner_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApply_Dialog_Object_Main_GetOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApply_Dialog_Object_Main_GetOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApply_Dialog_Object_Main_GetOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Apply_Dialog_Object_Main.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UApply_Dialog_Object_Main_GetOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApply_Dialog_Object_Main, nullptr, "GetOwner", nullptr, nullptr, sizeof(Apply_Dialog_Object_Main_eventGetOwner_Parms), Z_Construct_UFunction_UApply_Dialog_Object_Main_GetOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApply_Dialog_Object_Main_GetOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApply_Dialog_Object_Main_GetOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApply_Dialog_Object_Main_GetOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApply_Dialog_Object_Main_GetOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UApply_Dialog_Object_Main_GetOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UApply_Dialog_Object_Main_NoRegister()
	{
		return UApply_Dialog_Object_Main::StaticClass();
	}
	struct Z_Construct_UClass_UApply_Dialog_Object_Main_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UApply_Dialog_Object_Main_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Dialog_System,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UApply_Dialog_Object_Main_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UApply_Dialog_Object_Main_ApplyCommand, "ApplyCommand" }, // 640220964
		{ &Z_Construct_UFunction_UApply_Dialog_Object_Main_GetOwner, "GetOwner" }, // 1343038389
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApply_Dialog_Object_Main_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Apply_Dialog_Object_Main.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Apply_Dialog_Object_Main.h" },
		{ "ShowWorldContextPin", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UApply_Dialog_Object_Main_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApply_Dialog_Object_Main>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UApply_Dialog_Object_Main_Statics::ClassParams = {
		&UApply_Dialog_Object_Main::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UApply_Dialog_Object_Main_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UApply_Dialog_Object_Main_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UApply_Dialog_Object_Main()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UApply_Dialog_Object_Main_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UApply_Dialog_Object_Main, 580137399);
	template<> DIALOG_SYSTEM_API UClass* StaticClass<UApply_Dialog_Object_Main>()
	{
		return UApply_Dialog_Object_Main::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UApply_Dialog_Object_Main(Z_Construct_UClass_UApply_Dialog_Object_Main, &UApply_Dialog_Object_Main::StaticClass, TEXT("/Script/Dialog_System"), TEXT("UApply_Dialog_Object_Main"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UApply_Dialog_Object_Main);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
