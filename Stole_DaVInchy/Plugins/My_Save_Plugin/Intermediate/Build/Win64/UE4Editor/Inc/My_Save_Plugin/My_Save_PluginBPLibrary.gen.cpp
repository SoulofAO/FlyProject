// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "My_Save_Plugin/Public/My_Save_PluginBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMy_Save_PluginBPLibrary() {}
// Cross Module References
	MY_SAVE_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSaveActor();
	UPackage* Z_Construct_UPackage__Script_My_Save_Plugin();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	MY_SAVE_PLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSaveActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	MY_SAVE_PLUGIN_API UClass* Z_Construct_UClass_UMy_Save_PluginBPLibrary_NoRegister();
	MY_SAVE_PLUGIN_API UClass* Z_Construct_UClass_UMy_Save_PluginBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FSaveActor::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MY_SAVE_PLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FSaveActor_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSaveActor, Z_Construct_UPackage__Script_My_Save_Plugin(), TEXT("SaveActor"), sizeof(FSaveActor), Get_Z_Construct_UScriptStruct_FSaveActor_Hash());
	}
	return Singleton;
}
template<> MY_SAVE_PLUGIN_API UScriptStruct* StaticStruct<FSaveActor>()
{
	return FSaveActor::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSaveActor(FSaveActor::StaticStruct, TEXT("/Script/My_Save_Plugin"), TEXT("SaveActor"), false, nullptr, nullptr);
static struct FScriptStruct_My_Save_Plugin_StaticRegisterNativesFSaveActor
{
	FScriptStruct_My_Save_Plugin_StaticRegisterNativesFSaveActor()
	{
		UScriptStruct::DeferCppStructOps<FSaveActor>(FName(TEXT("SaveActor")));
	}
} ScriptStruct_My_Save_Plugin_StaticRegisterNativesFSaveActor;
	struct Z_Construct_UScriptStruct_FSaveActor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SerializationData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SerializationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SerializationData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActorComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorComponents;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveActor_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/My_Save_PluginBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSaveActor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSaveActor>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveActor_Statics::NewProp_Actor_MetaData[] = {
		{ "Category", "SaveActor" },
		{ "ModuleRelativePath", "Public/My_Save_PluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSaveActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveActor, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveActor_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveActor_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveActor_Statics::NewProp_ActorClass_MetaData[] = {
		{ "Category", "SaveActor" },
		{ "ModuleRelativePath", "Public/My_Save_PluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSaveActor_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000004, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveActor, ActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveActor_Statics::NewProp_ActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveActor_Statics::NewProp_ActorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveActor_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "SaveActor" },
		{ "ModuleRelativePath", "Public/My_Save_PluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSaveActor_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveActor, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveActor_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveActor_Statics::NewProp_Transform_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSaveActor_Statics::NewProp_SerializationData_Inner = { "SerializationData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveActor_Statics::NewProp_SerializationData_MetaData[] = {
		{ "Category", "SaveActor" },
		{ "ModuleRelativePath", "Public/My_Save_PluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSaveActor_Statics::NewProp_SerializationData = { "SerializationData", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveActor, SerializationData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveActor_Statics::NewProp_SerializationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveActor_Statics::NewProp_SerializationData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSaveActor_Statics::NewProp_ActorComponents_Inner = { "ActorComponents", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSaveActorComponent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveActor_Statics::NewProp_ActorComponents_MetaData[] = {
		{ "Category", "SaveActor" },
		{ "ModuleRelativePath", "Public/My_Save_PluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSaveActor_Statics::NewProp_ActorComponents = { "ActorComponents", nullptr, (EPropertyFlags)0x0010008000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveActor, ActorComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveActor_Statics::NewProp_ActorComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveActor_Statics::NewProp_ActorComponents_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSaveActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveActor_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveActor_Statics::NewProp_ActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveActor_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveActor_Statics::NewProp_SerializationData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveActor_Statics::NewProp_SerializationData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveActor_Statics::NewProp_ActorComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveActor_Statics::NewProp_ActorComponents,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSaveActor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_My_Save_Plugin,
		nullptr,
		&NewStructOps,
		"SaveActor",
		sizeof(FSaveActor),
		alignof(FSaveActor),
		Z_Construct_UScriptStruct_FSaveActor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveActor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveActor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveActor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSaveActor()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSaveActor_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_My_Save_Plugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SaveActor"), sizeof(FSaveActor), Get_Z_Construct_UScriptStruct_FSaveActor_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSaveActor_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSaveActor_Hash() { return 1151657497U; }
class UScriptStruct* FSaveActorComponent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MY_SAVE_PLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FSaveActorComponent_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSaveActorComponent, Z_Construct_UPackage__Script_My_Save_Plugin(), TEXT("SaveActorComponent"), sizeof(FSaveActorComponent), Get_Z_Construct_UScriptStruct_FSaveActorComponent_Hash());
	}
	return Singleton;
}
template<> MY_SAVE_PLUGIN_API UScriptStruct* StaticStruct<FSaveActorComponent>()
{
	return FSaveActorComponent::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSaveActorComponent(FSaveActorComponent::StaticStruct, TEXT("/Script/My_Save_Plugin"), TEXT("SaveActorComponent"), false, nullptr, nullptr);
static struct FScriptStruct_My_Save_Plugin_StaticRegisterNativesFSaveActorComponent
{
	FScriptStruct_My_Save_Plugin_StaticRegisterNativesFSaveActorComponent()
	{
		UScriptStruct::DeferCppStructOps<FSaveActorComponent>(FName(TEXT("SaveActorComponent")));
	}
} ScriptStruct_My_Save_Plugin_StaticRegisterNativesFSaveActorComponent;
	struct Z_Construct_UScriptStruct_FSaveActorComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorComponentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorComponentClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SerializationData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SerializationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SerializationData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveActorComponent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/My_Save_PluginBPLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSaveActorComponent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSaveActorComponent>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveActorComponent_Statics::NewProp_ActorComponent_MetaData[] = {
		{ "Category", "SaveActorComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/My_Save_PluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSaveActorComponent_Statics::NewProp_ActorComponent = { "ActorComponent", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveActorComponent, ActorComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveActorComponent_Statics::NewProp_ActorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveActorComponent_Statics::NewProp_ActorComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveActorComponent_Statics::NewProp_ActorComponentClass_MetaData[] = {
		{ "Category", "SaveActorComponent" },
		{ "ModuleRelativePath", "Public/My_Save_PluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSaveActorComponent_Statics::NewProp_ActorComponentClass = { "ActorComponentClass", nullptr, (EPropertyFlags)0x0014000000000004, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveActorComponent, ActorComponentClass), Z_Construct_UClass_UActorComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveActorComponent_Statics::NewProp_ActorComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveActorComponent_Statics::NewProp_ActorComponentClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveActorComponent_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "SaveActorComponent" },
		{ "ModuleRelativePath", "Public/My_Save_PluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSaveActorComponent_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveActorComponent, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveActorComponent_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveActorComponent_Statics::NewProp_Transform_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSaveActorComponent_Statics::NewProp_SerializationData_Inner = { "SerializationData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveActorComponent_Statics::NewProp_SerializationData_MetaData[] = {
		{ "Category", "SaveActorComponent" },
		{ "ModuleRelativePath", "Public/My_Save_PluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSaveActorComponent_Statics::NewProp_SerializationData = { "SerializationData", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveActorComponent, SerializationData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveActorComponent_Statics::NewProp_SerializationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveActorComponent_Statics::NewProp_SerializationData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSaveActorComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveActorComponent_Statics::NewProp_ActorComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveActorComponent_Statics::NewProp_ActorComponentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveActorComponent_Statics::NewProp_Transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveActorComponent_Statics::NewProp_SerializationData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveActorComponent_Statics::NewProp_SerializationData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSaveActorComponent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_My_Save_Plugin,
		nullptr,
		&NewStructOps,
		"SaveActorComponent",
		sizeof(FSaveActorComponent),
		alignof(FSaveActorComponent),
		Z_Construct_UScriptStruct_FSaveActorComponent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveActorComponent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveActorComponent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveActorComponent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSaveActorComponent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSaveActorComponent_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_My_Save_Plugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SaveActorComponent"), sizeof(FSaveActorComponent), Get_Z_Construct_UScriptStruct_FSaveActorComponent_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSaveActorComponent_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSaveActorComponent_Hash() { return 1355402718U; }
	DEFINE_FUNCTION(UMy_Save_PluginBPLibrary::execFL_SERIALIZE__DeSerialize)
	{
		P_GET_OBJECT(UObject,Z_Param_object_reference);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_serialization_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMy_Save_PluginBPLibrary::FL_SERIALIZE__DeSerialize(Z_Param_object_reference,Z_Param_Out_serialization_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMy_Save_PluginBPLibrary::execFL_SERIALIZE__Serialize)
	{
		P_GET_OBJECT(UObject,Z_Param_object_reference);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_serialization_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMy_Save_PluginBPLibrary::FL_SERIALIZE__Serialize(Z_Param_object_reference,Z_Param_Out_serialization_data);
		P_NATIVE_END;
	}
	void UMy_Save_PluginBPLibrary::StaticRegisterNativesUMy_Save_PluginBPLibrary()
	{
		UClass* Class = UMy_Save_PluginBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FL_SERIALIZE__DeSerialize", &UMy_Save_PluginBPLibrary::execFL_SERIALIZE__DeSerialize },
			{ "FL_SERIALIZE__Serialize", &UMy_Save_PluginBPLibrary::execFL_SERIALIZE__Serialize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMy_Save_PluginBPLibrary_FL_SERIALIZE__DeSerialize_Statics
	{
		struct My_Save_PluginBPLibrary_eventFL_SERIALIZE__DeSerialize_Parms
		{
			const UObject* object_reference;
			TArray<uint8> serialization_data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_object_reference_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_object_reference;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_serialization_data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_serialization_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_serialization_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMy_Save_PluginBPLibrary_FL_SERIALIZE__DeSerialize_Statics::NewProp_object_reference_MetaData[] = {
		{ "DisplayName", "Object" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMy_Save_PluginBPLibrary_FL_SERIALIZE__DeSerialize_Statics::NewProp_object_reference = { "object_reference", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(My_Save_PluginBPLibrary_eventFL_SERIALIZE__DeSerialize_Parms, object_reference), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMy_Save_PluginBPLibrary_FL_SERIALIZE__DeSerialize_Statics::NewProp_object_reference_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMy_Save_PluginBPLibrary_FL_SERIALIZE__DeSerialize_Statics::NewProp_object_reference_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMy_Save_PluginBPLibrary_FL_SERIALIZE__DeSerialize_Statics::NewProp_serialization_data_Inner = { "serialization_data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMy_Save_PluginBPLibrary_FL_SERIALIZE__DeSerialize_Statics::NewProp_serialization_data_MetaData[] = {
		{ "DisplayName", "Data" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMy_Save_PluginBPLibrary_FL_SERIALIZE__DeSerialize_Statics::NewProp_serialization_data = { "serialization_data", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(My_Save_PluginBPLibrary_eventFL_SERIALIZE__DeSerialize_Parms, serialization_data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMy_Save_PluginBPLibrary_FL_SERIALIZE__DeSerialize_Statics::NewProp_serialization_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMy_Save_PluginBPLibrary_FL_SERIALIZE__DeSerialize_Statics::NewProp_serialization_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMy_Save_PluginBPLibrary_FL_SERIALIZE__DeSerialize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMy_Save_PluginBPLibrary_FL_SERIALIZE__DeSerialize_Statics::NewProp_object_reference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMy_Save_PluginBPLibrary_FL_SERIALIZE__DeSerialize_Statics::NewProp_serialization_data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMy_Save_PluginBPLibrary_FL_SERIALIZE__DeSerialize_Statics::NewProp_serialization_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMy_Save_PluginBPLibrary_FL_SERIALIZE__DeSerialize_Statics::Function_MetaDataParams[] = {
		{ "CallableWithoutWorldContext", "" },
		{ "DisplayName", "De Serialize" },
		{ "KeyWords", "Serialize" },
		{ "ModuleRelativePath", "Public/My_Save_PluginBPLibrary.h" },
		{ "ToolTip", "Restore from an array of bytes of serialization" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMy_Save_PluginBPLibrary_FL_SERIALIZE__DeSerialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMy_Save_PluginBPLibrary, nullptr, "FL_SERIALIZE__DeSerialize", nullptr, nullptr, sizeof(My_Save_PluginBPLibrary_eventFL_SERIALIZE__DeSerialize_Parms), Z_Construct_UFunction_UMy_Save_PluginBPLibrary_FL_SERIALIZE__DeSerialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMy_Save_PluginBPLibrary_FL_SERIALIZE__DeSerialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMy_Save_PluginBPLibrary_FL_SERIALIZE__DeSerialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMy_Save_PluginBPLibrary_FL_SERIALIZE__DeSerialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMy_Save_PluginBPLibrary_FL_SERIALIZE__DeSerialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMy_Save_PluginBPLibrary_FL_SERIALIZE__DeSerialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMy_Save_PluginBPLibrary_FL_SERIALIZE__Serialize_Statics
	{
		struct My_Save_PluginBPLibrary_eventFL_SERIALIZE__Serialize_Parms
		{
			const UObject* object_reference;
			TArray<uint8> serialization_data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_object_reference_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_object_reference;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_serialization_data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_serialization_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_serialization_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMy_Save_PluginBPLibrary_FL_SERIALIZE__Serialize_Statics::NewProp_object_reference_MetaData[] = {
		{ "DisplayName", "Object" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMy_Save_PluginBPLibrary_FL_SERIALIZE__Serialize_Statics::NewProp_object_reference = { "object_reference", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(My_Save_PluginBPLibrary_eventFL_SERIALIZE__Serialize_Parms, object_reference), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMy_Save_PluginBPLibrary_FL_SERIALIZE__Serialize_Statics::NewProp_object_reference_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMy_Save_PluginBPLibrary_FL_SERIALIZE__Serialize_Statics::NewProp_object_reference_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMy_Save_PluginBPLibrary_FL_SERIALIZE__Serialize_Statics::NewProp_serialization_data_Inner = { "serialization_data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMy_Save_PluginBPLibrary_FL_SERIALIZE__Serialize_Statics::NewProp_serialization_data_MetaData[] = {
		{ "DisplayName", "Data" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMy_Save_PluginBPLibrary_FL_SERIALIZE__Serialize_Statics::NewProp_serialization_data = { "serialization_data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(My_Save_PluginBPLibrary_eventFL_SERIALIZE__Serialize_Parms, serialization_data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMy_Save_PluginBPLibrary_FL_SERIALIZE__Serialize_Statics::NewProp_serialization_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMy_Save_PluginBPLibrary_FL_SERIALIZE__Serialize_Statics::NewProp_serialization_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMy_Save_PluginBPLibrary_FL_SERIALIZE__Serialize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMy_Save_PluginBPLibrary_FL_SERIALIZE__Serialize_Statics::NewProp_object_reference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMy_Save_PluginBPLibrary_FL_SERIALIZE__Serialize_Statics::NewProp_serialization_data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMy_Save_PluginBPLibrary_FL_SERIALIZE__Serialize_Statics::NewProp_serialization_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMy_Save_PluginBPLibrary_FL_SERIALIZE__Serialize_Statics::Function_MetaDataParams[] = {
		{ "CallableWithoutWorldContext", "" },
		{ "DisplayName", "Serialize" },
		{ "KeyWords", "Serialize" },
		{ "ModuleRelativePath", "Public/My_Save_PluginBPLibrary.h" },
		{ "ToolTip", "Forming an array of bytes of serialization" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMy_Save_PluginBPLibrary_FL_SERIALIZE__Serialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMy_Save_PluginBPLibrary, nullptr, "FL_SERIALIZE__Serialize", nullptr, nullptr, sizeof(My_Save_PluginBPLibrary_eventFL_SERIALIZE__Serialize_Parms), Z_Construct_UFunction_UMy_Save_PluginBPLibrary_FL_SERIALIZE__Serialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMy_Save_PluginBPLibrary_FL_SERIALIZE__Serialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMy_Save_PluginBPLibrary_FL_SERIALIZE__Serialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMy_Save_PluginBPLibrary_FL_SERIALIZE__Serialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMy_Save_PluginBPLibrary_FL_SERIALIZE__Serialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMy_Save_PluginBPLibrary_FL_SERIALIZE__Serialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMy_Save_PluginBPLibrary_NoRegister()
	{
		return UMy_Save_PluginBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMy_Save_PluginBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMy_Save_PluginBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_My_Save_Plugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMy_Save_PluginBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMy_Save_PluginBPLibrary_FL_SERIALIZE__DeSerialize, "FL_SERIALIZE__DeSerialize" }, // 3954206851
		{ &Z_Construct_UFunction_UMy_Save_PluginBPLibrary_FL_SERIALIZE__Serialize, "FL_SERIALIZE__Serialize" }, // 1540529646
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMy_Save_PluginBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "My_Save_PluginBPLibrary.h" },
		{ "ModuleRelativePath", "Public/My_Save_PluginBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMy_Save_PluginBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMy_Save_PluginBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMy_Save_PluginBPLibrary_Statics::ClassParams = {
		&UMy_Save_PluginBPLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMy_Save_PluginBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMy_Save_PluginBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMy_Save_PluginBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMy_Save_PluginBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMy_Save_PluginBPLibrary, 1581827227);
	template<> MY_SAVE_PLUGIN_API UClass* StaticClass<UMy_Save_PluginBPLibrary>()
	{
		return UMy_Save_PluginBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMy_Save_PluginBPLibrary(Z_Construct_UClass_UMy_Save_PluginBPLibrary, &UMy_Save_PluginBPLibrary::StaticClass, TEXT("/Script/My_Save_Plugin"), TEXT("UMy_Save_PluginBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMy_Save_PluginBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
