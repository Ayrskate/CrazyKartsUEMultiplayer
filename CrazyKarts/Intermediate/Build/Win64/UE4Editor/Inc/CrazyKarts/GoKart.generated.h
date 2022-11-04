// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGoKartMove;
#ifdef CRAZYKARTS_GoKart_generated_h
#error "GoKart.generated.h already included, missing '#pragma once' in GoKart.h"
#endif
#define CRAZYKARTS_GoKart_generated_h

#define CrazyKarts_Source_CrazyKarts_GoKart_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGoKartState_Statics; \
	CRAZYKARTS_API static class UScriptStruct* StaticStruct();


template<> CRAZYKARTS_API UScriptStruct* StaticStruct<struct FGoKartState>();

#define CrazyKarts_Source_CrazyKarts_GoKart_h_9_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGoKartMove_Statics; \
	CRAZYKARTS_API static class UScriptStruct* StaticStruct();


template<> CRAZYKARTS_API UScriptStruct* StaticStruct<struct FGoKartMove>();

#define CrazyKarts_Source_CrazyKarts_GoKart_h_42_SPARSE_DATA
#define CrazyKarts_Source_CrazyKarts_GoKart_h_42_RPC_WRAPPERS \
	virtual bool Server_SendMove_Validate(FGoKartMove ); \
	virtual void Server_SendMove_Implementation(FGoKartMove Move); \
 \
	DECLARE_FUNCTION(execServer_SendMove); \
	DECLARE_FUNCTION(execOnRep_ServerState);


#define CrazyKarts_Source_CrazyKarts_GoKart_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_SendMove_Validate(FGoKartMove ); \
	virtual void Server_SendMove_Implementation(FGoKartMove Move); \
 \
	DECLARE_FUNCTION(execServer_SendMove); \
	DECLARE_FUNCTION(execOnRep_ServerState);


#define CrazyKarts_Source_CrazyKarts_GoKart_h_42_EVENT_PARMS \
	struct GoKart_eventServer_SendMove_Parms \
	{ \
		FGoKartMove Move; \
	};


#define CrazyKarts_Source_CrazyKarts_GoKart_h_42_CALLBACK_WRAPPERS
#define CrazyKarts_Source_CrazyKarts_GoKart_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGoKart(); \
	friend struct Z_Construct_UClass_AGoKart_Statics; \
public: \
	DECLARE_CLASS(AGoKart, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CrazyKarts"), NO_API) \
	DECLARE_SERIALIZER(AGoKart) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ServerState=NETFIELD_REP_START, \
		NETFIELD_REP_END=ServerState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define CrazyKarts_Source_CrazyKarts_GoKart_h_42_INCLASS \
private: \
	static void StaticRegisterNativesAGoKart(); \
	friend struct Z_Construct_UClass_AGoKart_Statics; \
public: \
	DECLARE_CLASS(AGoKart, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CrazyKarts"), NO_API) \
	DECLARE_SERIALIZER(AGoKart) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ServerState=NETFIELD_REP_START, \
		NETFIELD_REP_END=ServerState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define CrazyKarts_Source_CrazyKarts_GoKart_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGoKart(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGoKart) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoKart); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoKart); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGoKart(AGoKart&&); \
	NO_API AGoKart(const AGoKart&); \
public:


#define CrazyKarts_Source_CrazyKarts_GoKart_h_42_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGoKart(AGoKart&&); \
	NO_API AGoKart(const AGoKart&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoKart); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoKart); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGoKart)


#define CrazyKarts_Source_CrazyKarts_GoKart_h_42_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mass() { return STRUCT_OFFSET(AGoKart, Mass); } \
	FORCEINLINE static uint32 __PPO__MaxDrivingForce() { return STRUCT_OFFSET(AGoKart, MaxDrivingForce); } \
	FORCEINLINE static uint32 __PPO__DragCoefficient() { return STRUCT_OFFSET(AGoKart, DragCoefficient); } \
	FORCEINLINE static uint32 __PPO__RollingResistanceCoefficient() { return STRUCT_OFFSET(AGoKart, RollingResistanceCoefficient); } \
	FORCEINLINE static uint32 __PPO__MinimumTurningRadius() { return STRUCT_OFFSET(AGoKart, MinimumTurningRadius); } \
	FORCEINLINE static uint32 __PPO__ServerState() { return STRUCT_OFFSET(AGoKart, ServerState); }


#define CrazyKarts_Source_CrazyKarts_GoKart_h_39_PROLOG \
	CrazyKarts_Source_CrazyKarts_GoKart_h_42_EVENT_PARMS


#define CrazyKarts_Source_CrazyKarts_GoKart_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CrazyKarts_Source_CrazyKarts_GoKart_h_42_PRIVATE_PROPERTY_OFFSET \
	CrazyKarts_Source_CrazyKarts_GoKart_h_42_SPARSE_DATA \
	CrazyKarts_Source_CrazyKarts_GoKart_h_42_RPC_WRAPPERS \
	CrazyKarts_Source_CrazyKarts_GoKart_h_42_CALLBACK_WRAPPERS \
	CrazyKarts_Source_CrazyKarts_GoKart_h_42_INCLASS \
	CrazyKarts_Source_CrazyKarts_GoKart_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CrazyKarts_Source_CrazyKarts_GoKart_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CrazyKarts_Source_CrazyKarts_GoKart_h_42_PRIVATE_PROPERTY_OFFSET \
	CrazyKarts_Source_CrazyKarts_GoKart_h_42_SPARSE_DATA \
	CrazyKarts_Source_CrazyKarts_GoKart_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	CrazyKarts_Source_CrazyKarts_GoKart_h_42_CALLBACK_WRAPPERS \
	CrazyKarts_Source_CrazyKarts_GoKart_h_42_INCLASS_NO_PURE_DECLS \
	CrazyKarts_Source_CrazyKarts_GoKart_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRAZYKARTS_API UClass* StaticClass<class AGoKart>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CrazyKarts_Source_CrazyKarts_GoKart_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
