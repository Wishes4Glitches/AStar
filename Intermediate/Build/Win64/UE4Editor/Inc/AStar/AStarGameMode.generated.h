// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASTAR_AStarGameMode_generated_h
#error "AStarGameMode.generated.h already included, missing '#pragma once' in AStarGameMode.h"
#endif
#define ASTAR_AStarGameMode_generated_h

#define AStar_Source_AStar_AStarGameMode_h_18_SPARSE_DATA
#define AStar_Source_AStar_AStarGameMode_h_18_RPC_WRAPPERS
#define AStar_Source_AStar_AStarGameMode_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define AStar_Source_AStar_AStarGameMode_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAStarGameMode(); \
	friend struct Z_Construct_UClass_AAStarGameMode_Statics; \
public: \
	DECLARE_CLASS(AAStarGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/AStar"), ASTAR_API) \
	DECLARE_SERIALIZER(AAStarGameMode)


#define AStar_Source_AStar_AStarGameMode_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAAStarGameMode(); \
	friend struct Z_Construct_UClass_AAStarGameMode_Statics; \
public: \
	DECLARE_CLASS(AAStarGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/AStar"), ASTAR_API) \
	DECLARE_SERIALIZER(AAStarGameMode)


#define AStar_Source_AStar_AStarGameMode_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ASTAR_API AAStarGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAStarGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ASTAR_API, AAStarGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAStarGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASTAR_API AAStarGameMode(AAStarGameMode&&); \
	ASTAR_API AAStarGameMode(const AAStarGameMode&); \
public:


#define AStar_Source_AStar_AStarGameMode_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASTAR_API AAStarGameMode(AAStarGameMode&&); \
	ASTAR_API AAStarGameMode(const AAStarGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ASTAR_API, AAStarGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAStarGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAStarGameMode)


#define AStar_Source_AStar_AStarGameMode_h_18_PRIVATE_PROPERTY_OFFSET
#define AStar_Source_AStar_AStarGameMode_h_15_PROLOG
#define AStar_Source_AStar_AStarGameMode_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AStar_Source_AStar_AStarGameMode_h_18_PRIVATE_PROPERTY_OFFSET \
	AStar_Source_AStar_AStarGameMode_h_18_SPARSE_DATA \
	AStar_Source_AStar_AStarGameMode_h_18_RPC_WRAPPERS \
	AStar_Source_AStar_AStarGameMode_h_18_INCLASS \
	AStar_Source_AStar_AStarGameMode_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AStar_Source_AStar_AStarGameMode_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AStar_Source_AStar_AStarGameMode_h_18_PRIVATE_PROPERTY_OFFSET \
	AStar_Source_AStar_AStarGameMode_h_18_SPARSE_DATA \
	AStar_Source_AStar_AStarGameMode_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	AStar_Source_AStar_AStarGameMode_h_18_INCLASS_NO_PURE_DECLS \
	AStar_Source_AStar_AStarGameMode_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASTAR_API UClass* StaticClass<class AAStarGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AStar_Source_AStar_AStarGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
