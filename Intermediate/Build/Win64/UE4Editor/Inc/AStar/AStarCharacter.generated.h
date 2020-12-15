// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASTAR_AStarCharacter_generated_h
#error "AStarCharacter.generated.h already included, missing '#pragma once' in AStarCharacter.h"
#endif
#define ASTAR_AStarCharacter_generated_h

#define AStar_Source_AStar_AStarCharacter_h_22_SPARSE_DATA
#define AStar_Source_AStar_AStarCharacter_h_22_RPC_WRAPPERS
#define AStar_Source_AStar_AStarCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define AStar_Source_AStar_AStarCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAStarCharacter(); \
	friend struct Z_Construct_UClass_AAStarCharacter_Statics; \
public: \
	DECLARE_CLASS(AAStarCharacter, APaperCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AStar"), NO_API) \
	DECLARE_SERIALIZER(AAStarCharacter)


#define AStar_Source_AStar_AStarCharacter_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAAStarCharacter(); \
	friend struct Z_Construct_UClass_AAStarCharacter_Statics; \
public: \
	DECLARE_CLASS(AAStarCharacter, APaperCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AStar"), NO_API) \
	DECLARE_SERIALIZER(AAStarCharacter)


#define AStar_Source_AStar_AStarCharacter_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAStarCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAStarCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAStarCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAStarCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAStarCharacter(AAStarCharacter&&); \
	NO_API AAStarCharacter(const AAStarCharacter&); \
public:


#define AStar_Source_AStar_AStarCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAStarCharacter(AAStarCharacter&&); \
	NO_API AAStarCharacter(const AAStarCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAStarCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAStarCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAStarCharacter)


#define AStar_Source_AStar_AStarCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SideViewCameraComponent() { return STRUCT_OFFSET(AAStarCharacter, SideViewCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AAStarCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__RunningAnimation() { return STRUCT_OFFSET(AAStarCharacter, RunningAnimation); } \
	FORCEINLINE static uint32 __PPO__IdleAnimation() { return STRUCT_OFFSET(AAStarCharacter, IdleAnimation); }


#define AStar_Source_AStar_AStarCharacter_h_19_PROLOG
#define AStar_Source_AStar_AStarCharacter_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AStar_Source_AStar_AStarCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	AStar_Source_AStar_AStarCharacter_h_22_SPARSE_DATA \
	AStar_Source_AStar_AStarCharacter_h_22_RPC_WRAPPERS \
	AStar_Source_AStar_AStarCharacter_h_22_INCLASS \
	AStar_Source_AStar_AStarCharacter_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AStar_Source_AStar_AStarCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AStar_Source_AStar_AStarCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	AStar_Source_AStar_AStarCharacter_h_22_SPARSE_DATA \
	AStar_Source_AStar_AStarCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	AStar_Source_AStar_AStarCharacter_h_22_INCLASS_NO_PURE_DECLS \
	AStar_Source_AStar_AStarCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASTAR_API UClass* StaticClass<class AAStarCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AStar_Source_AStar_AStarCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
