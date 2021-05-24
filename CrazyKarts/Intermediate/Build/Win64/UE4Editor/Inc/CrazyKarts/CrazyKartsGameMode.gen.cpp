// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrazyKarts/CrazyKartsGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrazyKartsGameMode() {}
// Cross Module References
	CRAZYKARTS_API UClass* Z_Construct_UClass_ACrazyKartsGameMode_NoRegister();
	CRAZYKARTS_API UClass* Z_Construct_UClass_ACrazyKartsGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CrazyKarts();
// End Cross Module References
	void ACrazyKartsGameMode::StaticRegisterNativesACrazyKartsGameMode()
	{
	}
	UClass* Z_Construct_UClass_ACrazyKartsGameMode_NoRegister()
	{
		return ACrazyKartsGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACrazyKartsGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACrazyKartsGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CrazyKarts,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACrazyKartsGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CrazyKartsGameMode.h" },
		{ "ModuleRelativePath", "CrazyKartsGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACrazyKartsGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACrazyKartsGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACrazyKartsGameMode_Statics::ClassParams = {
		&ACrazyKartsGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACrazyKartsGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACrazyKartsGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACrazyKartsGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACrazyKartsGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACrazyKartsGameMode, 2693527311);
	template<> CRAZYKARTS_API UClass* StaticClass<ACrazyKartsGameMode>()
	{
		return ACrazyKartsGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACrazyKartsGameMode(Z_Construct_UClass_ACrazyKartsGameMode, &ACrazyKartsGameMode::StaticClass, TEXT("/Script/CrazyKarts"), TEXT("ACrazyKartsGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACrazyKartsGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
