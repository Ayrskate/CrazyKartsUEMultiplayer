// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrazyKarts/GoKart.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoKart() {}
// Cross Module References
	CRAZYKARTS_API UScriptStruct* Z_Construct_UScriptStruct_FGoKartState();
	UPackage* Z_Construct_UPackage__Script_CrazyKarts();
	CRAZYKARTS_API UScriptStruct* Z_Construct_UScriptStruct_FGoKartMove();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	CRAZYKARTS_API UClass* Z_Construct_UClass_AGoKart_NoRegister();
	CRAZYKARTS_API UClass* Z_Construct_UClass_AGoKart();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
// End Cross Module References
class UScriptStruct* FGoKartState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRAZYKARTS_API uint32 Get_Z_Construct_UScriptStruct_FGoKartState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGoKartState, Z_Construct_UPackage__Script_CrazyKarts(), TEXT("GoKartState"), sizeof(FGoKartState), Get_Z_Construct_UScriptStruct_FGoKartState_Hash());
	}
	return Singleton;
}
template<> CRAZYKARTS_API UScriptStruct* StaticStruct<FGoKartState>()
{
	return FGoKartState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGoKartState(FGoKartState::StaticStruct, TEXT("/Script/CrazyKarts"), TEXT("GoKartState"), false, nullptr, nullptr);
static struct FScriptStruct_CrazyKarts_StaticRegisterNativesFGoKartState
{
	FScriptStruct_CrazyKarts_StaticRegisterNativesFGoKartState()
	{
		UScriptStruct::DeferCppStructOps<FGoKartState>(FName(TEXT("GoKartState")));
	}
} ScriptStruct_CrazyKarts_StaticRegisterNativesFGoKartState;
	struct Z_Construct_UScriptStruct_FGoKartState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoKartState_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "GoKart.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGoKartState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGoKartState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoKartState_Statics::NewProp_LastMove_MetaData[] = {
		{ "ModuleRelativePath", "GoKart.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGoKartState_Statics::NewProp_LastMove = { "LastMove", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoKartState, LastMove), Z_Construct_UScriptStruct_FGoKartMove, METADATA_PARAMS(Z_Construct_UScriptStruct_FGoKartState_Statics::NewProp_LastMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoKartState_Statics::NewProp_LastMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoKartState_Statics::NewProp_Velocity_MetaData[] = {
		{ "ModuleRelativePath", "GoKart.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGoKartState_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoKartState, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGoKartState_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoKartState_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoKartState_Statics::NewProp_Transform_MetaData[] = {
		{ "ModuleRelativePath", "GoKart.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGoKartState_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoKartState, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FGoKartState_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoKartState_Statics::NewProp_Transform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGoKartState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoKartState_Statics::NewProp_LastMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoKartState_Statics::NewProp_Velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoKartState_Statics::NewProp_Transform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGoKartState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CrazyKarts,
		nullptr,
		&NewStructOps,
		"GoKartState",
		sizeof(FGoKartState),
		alignof(FGoKartState),
		Z_Construct_UScriptStruct_FGoKartState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoKartState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGoKartState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoKartState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGoKartState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGoKartState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CrazyKarts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GoKartState"), sizeof(FGoKartState), Get_Z_Construct_UScriptStruct_FGoKartState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGoKartState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGoKartState_Hash() { return 2329211016U; }
class UScriptStruct* FGoKartMove::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CRAZYKARTS_API uint32 Get_Z_Construct_UScriptStruct_FGoKartMove_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGoKartMove, Z_Construct_UPackage__Script_CrazyKarts(), TEXT("GoKartMove"), sizeof(FGoKartMove), Get_Z_Construct_UScriptStruct_FGoKartMove_Hash());
	}
	return Singleton;
}
template<> CRAZYKARTS_API UScriptStruct* StaticStruct<FGoKartMove>()
{
	return FGoKartMove::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGoKartMove(FGoKartMove::StaticStruct, TEXT("/Script/CrazyKarts"), TEXT("GoKartMove"), false, nullptr, nullptr);
static struct FScriptStruct_CrazyKarts_StaticRegisterNativesFGoKartMove
{
	FScriptStruct_CrazyKarts_StaticRegisterNativesFGoKartMove()
	{
		UScriptStruct::DeferCppStructOps<FGoKartMove>(FName(TEXT("GoKartMove")));
	}
} ScriptStruct_CrazyKarts_StaticRegisterNativesFGoKartMove;
	struct Z_Construct_UScriptStruct_FGoKartMove_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Throttle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Throttle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteeringThrow_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SteeringThrow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoKartMove_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "GoKart.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGoKartMove_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGoKartMove>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoKartMove_Statics::NewProp_Throttle_MetaData[] = {
		{ "ModuleRelativePath", "GoKart.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGoKartMove_Statics::NewProp_Throttle = { "Throttle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoKartMove, Throttle), METADATA_PARAMS(Z_Construct_UScriptStruct_FGoKartMove_Statics::NewProp_Throttle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoKartMove_Statics::NewProp_Throttle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoKartMove_Statics::NewProp_SteeringThrow_MetaData[] = {
		{ "ModuleRelativePath", "GoKart.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGoKartMove_Statics::NewProp_SteeringThrow = { "SteeringThrow", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoKartMove, SteeringThrow), METADATA_PARAMS(Z_Construct_UScriptStruct_FGoKartMove_Statics::NewProp_SteeringThrow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoKartMove_Statics::NewProp_SteeringThrow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoKartMove_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "ModuleRelativePath", "GoKart.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGoKartMove_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoKartMove, DeltaTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FGoKartMove_Statics::NewProp_DeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoKartMove_Statics::NewProp_DeltaTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoKartMove_Statics::NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "GoKart.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGoKartMove_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoKartMove, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FGoKartMove_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoKartMove_Statics::NewProp_Time_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGoKartMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoKartMove_Statics::NewProp_Throttle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoKartMove_Statics::NewProp_SteeringThrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoKartMove_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoKartMove_Statics::NewProp_Time,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGoKartMove_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CrazyKarts,
		nullptr,
		&NewStructOps,
		"GoKartMove",
		sizeof(FGoKartMove),
		alignof(FGoKartMove),
		Z_Construct_UScriptStruct_FGoKartMove_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoKartMove_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGoKartMove_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoKartMove_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGoKartMove()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGoKartMove_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CrazyKarts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GoKartMove"), sizeof(FGoKartMove), Get_Z_Construct_UScriptStruct_FGoKartMove_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGoKartMove_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGoKartMove_Hash() { return 1080271102U; }
	DEFINE_FUNCTION(AGoKart::execServer_SendMove)
	{
		P_GET_STRUCT(FGoKartMove,Z_Param_Move);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SendMove_Validate(Z_Param_Move))
		{
			RPC_ValidateFailed(TEXT("Server_SendMove_Validate"));
			return;
		}
		P_THIS->Server_SendMove_Implementation(Z_Param_Move);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGoKart::execOnRep_ServerState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ServerState();
		P_NATIVE_END;
	}
	static FName NAME_AGoKart_Server_SendMove = FName(TEXT("Server_SendMove"));
	void AGoKart::Server_SendMove(FGoKartMove Move)
	{
		GoKart_eventServer_SendMove_Parms Parms;
		Parms.Move=Move;
		ProcessEvent(FindFunctionChecked(NAME_AGoKart_Server_SendMove),&Parms);
	}
	void AGoKart::StaticRegisterNativesAGoKart()
	{
		UClass* Class = AGoKart::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_ServerState", &AGoKart::execOnRep_ServerState },
			{ "Server_SendMove", &AGoKart::execServer_SendMove },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGoKart_OnRep_ServerState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGoKart_OnRep_ServerState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GoKart.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGoKart_OnRep_ServerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGoKart, nullptr, "OnRep_ServerState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGoKart_OnRep_ServerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGoKart_OnRep_ServerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGoKart_OnRep_ServerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGoKart_OnRep_ServerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGoKart_Server_SendMove_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Move;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGoKart_Server_SendMove_Statics::NewProp_Move = { "Move", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoKart_eventServer_SendMove_Parms, Move), Z_Construct_UScriptStruct_FGoKartMove, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGoKart_Server_SendMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGoKart_Server_SendMove_Statics::NewProp_Move,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGoKart_Server_SendMove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GoKart.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGoKart_Server_SendMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGoKart, nullptr, "Server_SendMove", nullptr, nullptr, sizeof(GoKart_eventServer_SendMove_Parms), Z_Construct_UFunction_AGoKart_Server_SendMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGoKart_Server_SendMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGoKart_Server_SendMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGoKart_Server_SendMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGoKart_Server_SendMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGoKart_Server_SendMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGoKart_NoRegister()
	{
		return AGoKart::StaticClass();
	}
	struct Z_Construct_UClass_AGoKart_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Mass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDrivingForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDrivingForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragCoefficient_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DragCoefficient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollingResistanceCoefficient_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RollingResistanceCoefficient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumTurningRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumTurningRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ServerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGoKart_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_CrazyKarts,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGoKart_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGoKart_OnRep_ServerState, "OnRep_ServerState" }, // 1496907145
		{ &Z_Construct_UFunction_AGoKart_Server_SendMove, "Server_SendMove" }, // 4285562254
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoKart_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GoKart.h" },
		{ "ModuleRelativePath", "GoKart.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoKart_Statics::NewProp_Mass_MetaData[] = {
		{ "Category", "Kart Parameters" },
		{ "Comment", "// Configuration //\n// ============= //\n// Kg\n" },
		{ "ModuleRelativePath", "GoKart.h" },
		{ "ToolTip", "Configuration\n\nKg" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGoKart_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGoKart, Mass), METADATA_PARAMS(Z_Construct_UClass_AGoKart_Statics::NewProp_Mass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGoKart_Statics::NewProp_Mass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoKart_Statics::NewProp_MaxDrivingForce_MetaData[] = {
		{ "Category", "Kart Parameters" },
		{ "Comment", "// Newtons\n" },
		{ "ModuleRelativePath", "GoKart.h" },
		{ "ToolTip", "Newtons" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGoKart_Statics::NewProp_MaxDrivingForce = { "MaxDrivingForce", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGoKart, MaxDrivingForce), METADATA_PARAMS(Z_Construct_UClass_AGoKart_Statics::NewProp_MaxDrivingForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGoKart_Statics::NewProp_MaxDrivingForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoKart_Statics::NewProp_DragCoefficient_MetaData[] = {
		{ "Category", "Kart Parameters" },
		{ "Comment", "// Kg * m\n" },
		{ "ModuleRelativePath", "GoKart.h" },
		{ "ToolTip", "Kg * m" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGoKart_Statics::NewProp_DragCoefficient = { "DragCoefficient", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGoKart, DragCoefficient), METADATA_PARAMS(Z_Construct_UClass_AGoKart_Statics::NewProp_DragCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGoKart_Statics::NewProp_DragCoefficient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoKart_Statics::NewProp_RollingResistanceCoefficient_MetaData[] = {
		{ "Category", "Kart Parameters" },
		{ "Comment", "// Higher means more rolling resistance\n" },
		{ "ModuleRelativePath", "GoKart.h" },
		{ "ToolTip", "Higher means more rolling resistance" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGoKart_Statics::NewProp_RollingResistanceCoefficient = { "RollingResistanceCoefficient", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGoKart, RollingResistanceCoefficient), METADATA_PARAMS(Z_Construct_UClass_AGoKart_Statics::NewProp_RollingResistanceCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGoKart_Statics::NewProp_RollingResistanceCoefficient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoKart_Statics::NewProp_MinimumTurningRadius_MetaData[] = {
		{ "Category", "Kart Parameters" },
		{ "Comment", "// Meters\n" },
		{ "ModuleRelativePath", "GoKart.h" },
		{ "ToolTip", "Meters" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGoKart_Statics::NewProp_MinimumTurningRadius = { "MinimumTurningRadius", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGoKart, MinimumTurningRadius), METADATA_PARAMS(Z_Construct_UClass_AGoKart_Statics::NewProp_MinimumTurningRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGoKart_Statics::NewProp_MinimumTurningRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoKart_Statics::NewProp_ServerState_MetaData[] = {
		{ "ModuleRelativePath", "GoKart.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGoKart_Statics::NewProp_ServerState = { "ServerState", "OnRep_ServerState", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGoKart, ServerState), Z_Construct_UScriptStruct_FGoKartState, METADATA_PARAMS(Z_Construct_UClass_AGoKart_Statics::NewProp_ServerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGoKart_Statics::NewProp_ServerState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGoKart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoKart_Statics::NewProp_Mass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoKart_Statics::NewProp_MaxDrivingForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoKart_Statics::NewProp_DragCoefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoKart_Statics::NewProp_RollingResistanceCoefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoKart_Statics::NewProp_MinimumTurningRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoKart_Statics::NewProp_ServerState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGoKart_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGoKart>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGoKart_Statics::ClassParams = {
		&AGoKart::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGoKart_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGoKart_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGoKart_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGoKart_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGoKart()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGoKart_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGoKart, 1627841146);
	template<> CRAZYKARTS_API UClass* StaticClass<AGoKart>()
	{
		return AGoKart::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGoKart(Z_Construct_UClass_AGoKart, &AGoKart::StaticClass, TEXT("/Script/CrazyKarts"), TEXT("AGoKart"), false, nullptr, nullptr, nullptr);

	void AGoKart::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ServerState(TEXT("ServerState"));

		const bool bIsValid = true
			&& Name_ServerState == ClassReps[(int32)ENetFields_Private::ServerState].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AGoKart"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGoKart);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
