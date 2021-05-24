// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CrazyKarts/CrazyKartsWheelRear.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrazyKartsWheelRear() {}
// Cross Module References
	CRAZYKARTS_API UClass* Z_Construct_UClass_UCrazyKartsWheelRear_NoRegister();
	CRAZYKARTS_API UClass* Z_Construct_UClass_UCrazyKartsWheelRear();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UVehicleWheel();
	UPackage* Z_Construct_UPackage__Script_CrazyKarts();
// End Cross Module References
	void UCrazyKartsWheelRear::StaticRegisterNativesUCrazyKartsWheelRear()
	{
	}
	UClass* Z_Construct_UClass_UCrazyKartsWheelRear_NoRegister()
	{
		return UCrazyKartsWheelRear::StaticClass();
	}
	struct Z_Construct_UClass_UCrazyKartsWheelRear_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCrazyKartsWheelRear_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVehicleWheel,
		(UObject* (*)())Z_Construct_UPackage__Script_CrazyKarts,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrazyKartsWheelRear_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CrazyKartsWheelRear.h" },
		{ "ModuleRelativePath", "CrazyKartsWheelRear.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCrazyKartsWheelRear_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrazyKartsWheelRear>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCrazyKartsWheelRear_Statics::ClassParams = {
		&UCrazyKartsWheelRear::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCrazyKartsWheelRear_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCrazyKartsWheelRear_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCrazyKartsWheelRear()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCrazyKartsWheelRear_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCrazyKartsWheelRear, 127865845);
	template<> CRAZYKARTS_API UClass* StaticClass<UCrazyKartsWheelRear>()
	{
		return UCrazyKartsWheelRear::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCrazyKartsWheelRear(Z_Construct_UClass_UCrazyKartsWheelRear, &UCrazyKartsWheelRear::StaticClass, TEXT("/Script/CrazyKarts"), TEXT("UCrazyKartsWheelRear"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCrazyKartsWheelRear);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
