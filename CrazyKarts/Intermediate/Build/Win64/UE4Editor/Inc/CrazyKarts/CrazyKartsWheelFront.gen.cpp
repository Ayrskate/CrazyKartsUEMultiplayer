// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrazyKarts/CrazyKartsWheelFront.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrazyKartsWheelFront() {}
// Cross Module References
	CRAZYKARTS_API UClass* Z_Construct_UClass_UCrazyKartsWheelFront_NoRegister();
	CRAZYKARTS_API UClass* Z_Construct_UClass_UCrazyKartsWheelFront();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_CrazyKarts();
// End Cross Module References
	void UCrazyKartsWheelFront::StaticRegisterNativesUCrazyKartsWheelFront()
	{
	}
	UClass* Z_Construct_UClass_UCrazyKartsWheelFront_NoRegister()
	{
		return UCrazyKartsWheelFront::StaticClass();
	}
	struct Z_Construct_UClass_UCrazyKartsWheelFront_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCrazyKartsWheelFront_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_CrazyKarts,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrazyKartsWheelFront_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CrazyKartsWheelFront.h" },
		{ "ModuleRelativePath", "CrazyKartsWheelFront.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCrazyKartsWheelFront_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrazyKartsWheelFront>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCrazyKartsWheelFront_Statics::ClassParams = {
		&UCrazyKartsWheelFront::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCrazyKartsWheelFront_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCrazyKartsWheelFront_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCrazyKartsWheelFront()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCrazyKartsWheelFront_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCrazyKartsWheelFront, 842218696);
	template<> CRAZYKARTS_API UClass* StaticClass<UCrazyKartsWheelFront>()
	{
		return UCrazyKartsWheelFront::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCrazyKartsWheelFront(Z_Construct_UClass_UCrazyKartsWheelFront, &UCrazyKartsWheelFront::StaticClass, TEXT("/Script/CrazyKarts"), TEXT("UCrazyKartsWheelFront"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCrazyKartsWheelFront);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
