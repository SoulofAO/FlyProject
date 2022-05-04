// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Vehile_Movement_Ubgrade/Public/Vehile_Movement_UbgradeBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVehile_Movement_UbgradeBPLibrary() {}
// Cross Module References
	VEHILE_MOVEMENT_UBGRADE_API UClass* Z_Construct_UClass_UVehile_Movement_UbgradeBPLibrary_NoRegister();
	VEHILE_MOVEMENT_UBGRADE_API UClass* Z_Construct_UClass_UVehile_Movement_UbgradeBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Vehile_Movement_Ubgrade();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UWheeledVehicleMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVehile_Movement_UbgradeBPLibrary::execVehile_Movement_Ubgrade_Set_Torcue_Curve)
	{
		P_GET_OBJECT(UCurveFloat,Z_Param_Curve);
		P_GET_OBJECT(UWheeledVehicleMovementComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVehile_Movement_UbgradeBPLibrary::Vehile_Movement_Ubgrade_Set_Torcue_Curve(Z_Param_Curve,Z_Param_Component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVehile_Movement_UbgradeBPLibrary::execVehile_Movement_Ubgrade_Set_Max_RPM)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Speed);
		P_GET_OBJECT(UWheeledVehicleMovementComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVehile_Movement_UbgradeBPLibrary::Vehile_Movement_Ubgrade_Set_Max_RPM(Z_Param_Speed,Z_Param_Component);
		P_NATIVE_END;
	}
	void UVehile_Movement_UbgradeBPLibrary::StaticRegisterNativesUVehile_Movement_UbgradeBPLibrary()
	{
		UClass* Class = UVehile_Movement_UbgradeBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Vehile_Movement_Ubgrade_Set_Max_RPM", &UVehile_Movement_UbgradeBPLibrary::execVehile_Movement_Ubgrade_Set_Max_RPM },
			{ "Vehile_Movement_Ubgrade_Set_Torcue_Curve", &UVehile_Movement_UbgradeBPLibrary::execVehile_Movement_Ubgrade_Set_Torcue_Curve },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVehile_Movement_UbgradeBPLibrary_Vehile_Movement_Ubgrade_Set_Max_RPM_Statics
	{
		struct Vehile_Movement_UbgradeBPLibrary_eventVehile_Movement_Ubgrade_Set_Max_RPM_Parms
		{
			float Speed;
			UWheeledVehicleMovementComponent* Component;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehile_Movement_UbgradeBPLibrary_Vehile_Movement_Ubgrade_Set_Max_RPM_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Vehile_Movement_UbgradeBPLibrary_eventVehile_Movement_Ubgrade_Set_Max_RPM_Parms, Speed), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehile_Movement_UbgradeBPLibrary_Vehile_Movement_Ubgrade_Set_Max_RPM_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVehile_Movement_UbgradeBPLibrary_Vehile_Movement_Ubgrade_Set_Max_RPM_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Vehile_Movement_UbgradeBPLibrary_eventVehile_Movement_Ubgrade_Set_Max_RPM_Parms, Component), Z_Construct_UClass_UWheeledVehicleMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVehile_Movement_UbgradeBPLibrary_Vehile_Movement_Ubgrade_Set_Max_RPM_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehile_Movement_UbgradeBPLibrary_Vehile_Movement_Ubgrade_Set_Max_RPM_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehile_Movement_UbgradeBPLibrary_Vehile_Movement_Ubgrade_Set_Max_RPM_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehile_Movement_UbgradeBPLibrary_Vehile_Movement_Ubgrade_Set_Max_RPM_Statics::NewProp_Speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehile_Movement_UbgradeBPLibrary_Vehile_Movement_Ubgrade_Set_Max_RPM_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehile_Movement_UbgradeBPLibrary_Vehile_Movement_Ubgrade_Set_Max_RPM_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehile_Movement_Ubgrade" },
		{ "DisplayName", "Set_Max_RPM" },
		{ "Keywords", "Set_Max_RPM" },
		{ "ModuleRelativePath", "Public/Vehile_Movement_UbgradeBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehile_Movement_UbgradeBPLibrary_Vehile_Movement_Ubgrade_Set_Max_RPM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehile_Movement_UbgradeBPLibrary, nullptr, "Vehile_Movement_Ubgrade_Set_Max_RPM", nullptr, nullptr, sizeof(Vehile_Movement_UbgradeBPLibrary_eventVehile_Movement_Ubgrade_Set_Max_RPM_Parms), Z_Construct_UFunction_UVehile_Movement_UbgradeBPLibrary_Vehile_Movement_Ubgrade_Set_Max_RPM_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehile_Movement_UbgradeBPLibrary_Vehile_Movement_Ubgrade_Set_Max_RPM_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehile_Movement_UbgradeBPLibrary_Vehile_Movement_Ubgrade_Set_Max_RPM_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehile_Movement_UbgradeBPLibrary_Vehile_Movement_Ubgrade_Set_Max_RPM_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehile_Movement_UbgradeBPLibrary_Vehile_Movement_Ubgrade_Set_Max_RPM()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehile_Movement_UbgradeBPLibrary_Vehile_Movement_Ubgrade_Set_Max_RPM_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehile_Movement_UbgradeBPLibrary_Vehile_Movement_Ubgrade_Set_Torcue_Curve_Statics
	{
		struct Vehile_Movement_UbgradeBPLibrary_eventVehile_Movement_Ubgrade_Set_Torcue_Curve_Parms
		{
			UCurveFloat* Curve;
			UWheeledVehicleMovementComponent* Component;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Curve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVehile_Movement_UbgradeBPLibrary_Vehile_Movement_Ubgrade_Set_Torcue_Curve_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Vehile_Movement_UbgradeBPLibrary_eventVehile_Movement_Ubgrade_Set_Torcue_Curve_Parms, Curve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehile_Movement_UbgradeBPLibrary_Vehile_Movement_Ubgrade_Set_Torcue_Curve_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVehile_Movement_UbgradeBPLibrary_Vehile_Movement_Ubgrade_Set_Torcue_Curve_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Vehile_Movement_UbgradeBPLibrary_eventVehile_Movement_Ubgrade_Set_Torcue_Curve_Parms, Component), Z_Construct_UClass_UWheeledVehicleMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVehile_Movement_UbgradeBPLibrary_Vehile_Movement_Ubgrade_Set_Torcue_Curve_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehile_Movement_UbgradeBPLibrary_Vehile_Movement_Ubgrade_Set_Torcue_Curve_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehile_Movement_UbgradeBPLibrary_Vehile_Movement_Ubgrade_Set_Torcue_Curve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehile_Movement_UbgradeBPLibrary_Vehile_Movement_Ubgrade_Set_Torcue_Curve_Statics::NewProp_Curve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehile_Movement_UbgradeBPLibrary_Vehile_Movement_Ubgrade_Set_Torcue_Curve_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehile_Movement_UbgradeBPLibrary_Vehile_Movement_Ubgrade_Set_Torcue_Curve_Statics::Function_MetaDataParams[] = {
		{ "Category", "Vehile_Movement_Ubgrade" },
		{ "DisplayName", "Set_Torcue_Curve" },
		{ "Keywords", "Set_Torcue_Curve" },
		{ "ModuleRelativePath", "Public/Vehile_Movement_UbgradeBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehile_Movement_UbgradeBPLibrary_Vehile_Movement_Ubgrade_Set_Torcue_Curve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehile_Movement_UbgradeBPLibrary, nullptr, "Vehile_Movement_Ubgrade_Set_Torcue_Curve", nullptr, nullptr, sizeof(Vehile_Movement_UbgradeBPLibrary_eventVehile_Movement_Ubgrade_Set_Torcue_Curve_Parms), Z_Construct_UFunction_UVehile_Movement_UbgradeBPLibrary_Vehile_Movement_Ubgrade_Set_Torcue_Curve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehile_Movement_UbgradeBPLibrary_Vehile_Movement_Ubgrade_Set_Torcue_Curve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVehile_Movement_UbgradeBPLibrary_Vehile_Movement_Ubgrade_Set_Torcue_Curve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehile_Movement_UbgradeBPLibrary_Vehile_Movement_Ubgrade_Set_Torcue_Curve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVehile_Movement_UbgradeBPLibrary_Vehile_Movement_Ubgrade_Set_Torcue_Curve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVehile_Movement_UbgradeBPLibrary_Vehile_Movement_Ubgrade_Set_Torcue_Curve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVehile_Movement_UbgradeBPLibrary_NoRegister()
	{
		return UVehile_Movement_UbgradeBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVehile_Movement_UbgradeBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVehile_Movement_UbgradeBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Vehile_Movement_Ubgrade,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVehile_Movement_UbgradeBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVehile_Movement_UbgradeBPLibrary_Vehile_Movement_Ubgrade_Set_Max_RPM, "Vehile_Movement_Ubgrade_Set_Max_RPM" }, // 3600961230
		{ &Z_Construct_UFunction_UVehile_Movement_UbgradeBPLibrary_Vehile_Movement_Ubgrade_Set_Torcue_Curve, "Vehile_Movement_Ubgrade_Set_Torcue_Curve" }, // 3495216494
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehile_Movement_UbgradeBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "Vehile_Movement_UbgradeBPLibrary.h" },
		{ "ModuleRelativePath", "Public/Vehile_Movement_UbgradeBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVehile_Movement_UbgradeBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVehile_Movement_UbgradeBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVehile_Movement_UbgradeBPLibrary_Statics::ClassParams = {
		&UVehile_Movement_UbgradeBPLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVehile_Movement_UbgradeBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVehile_Movement_UbgradeBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVehile_Movement_UbgradeBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVehile_Movement_UbgradeBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVehile_Movement_UbgradeBPLibrary, 2203351536);
	template<> VEHILE_MOVEMENT_UBGRADE_API UClass* StaticClass<UVehile_Movement_UbgradeBPLibrary>()
	{
		return UVehile_Movement_UbgradeBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVehile_Movement_UbgradeBPLibrary(Z_Construct_UClass_UVehile_Movement_UbgradeBPLibrary, &UVehile_Movement_UbgradeBPLibrary::StaticClass, TEXT("/Script/Vehile_Movement_Ubgrade"), TEXT("UVehile_Movement_UbgradeBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVehile_Movement_UbgradeBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
