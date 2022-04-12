// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASnakeElementBase;
class AActor;
#ifdef PROJECTSNAKE_SnakeBase_generated_h
#error "SnakeBase.generated.h already included, missing '#pragma once' in SnakeBase.h"
#endif
#define PROJECTSNAKE_SnakeBase_generated_h

#define ProjectSnake_Source_ProjectSnake_SnakeBase_h_23_SPARSE_DATA
#define ProjectSnake_Source_ProjectSnake_SnakeBase_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSnakeElementOverlap); \
	DECLARE_FUNCTION(execMove); \
	DECLARE_FUNCTION(execAddSnakeElement);


#define ProjectSnake_Source_ProjectSnake_SnakeBase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSnakeElementOverlap); \
	DECLARE_FUNCTION(execMove); \
	DECLARE_FUNCTION(execAddSnakeElement);


#define ProjectSnake_Source_ProjectSnake_SnakeBase_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASnakeBase(); \
	friend struct Z_Construct_UClass_ASnakeBase_Statics; \
public: \
	DECLARE_CLASS(ASnakeBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectSnake"), NO_API) \
	DECLARE_SERIALIZER(ASnakeBase)


#define ProjectSnake_Source_ProjectSnake_SnakeBase_h_23_INCLASS \
private: \
	static void StaticRegisterNativesASnakeBase(); \
	friend struct Z_Construct_UClass_ASnakeBase_Statics; \
public: \
	DECLARE_CLASS(ASnakeBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectSnake"), NO_API) \
	DECLARE_SERIALIZER(ASnakeBase)


#define ProjectSnake_Source_ProjectSnake_SnakeBase_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASnakeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASnakeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnakeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnakeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASnakeBase(ASnakeBase&&); \
	NO_API ASnakeBase(const ASnakeBase&); \
public:


#define ProjectSnake_Source_ProjectSnake_SnakeBase_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASnakeBase(ASnakeBase&&); \
	NO_API ASnakeBase(const ASnakeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnakeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnakeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASnakeBase)


#define ProjectSnake_Source_ProjectSnake_SnakeBase_h_23_PRIVATE_PROPERTY_OFFSET
#define ProjectSnake_Source_ProjectSnake_SnakeBase_h_20_PROLOG
#define ProjectSnake_Source_ProjectSnake_SnakeBase_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectSnake_Source_ProjectSnake_SnakeBase_h_23_PRIVATE_PROPERTY_OFFSET \
	ProjectSnake_Source_ProjectSnake_SnakeBase_h_23_SPARSE_DATA \
	ProjectSnake_Source_ProjectSnake_SnakeBase_h_23_RPC_WRAPPERS \
	ProjectSnake_Source_ProjectSnake_SnakeBase_h_23_INCLASS \
	ProjectSnake_Source_ProjectSnake_SnakeBase_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectSnake_Source_ProjectSnake_SnakeBase_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectSnake_Source_ProjectSnake_SnakeBase_h_23_PRIVATE_PROPERTY_OFFSET \
	ProjectSnake_Source_ProjectSnake_SnakeBase_h_23_SPARSE_DATA \
	ProjectSnake_Source_ProjectSnake_SnakeBase_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectSnake_Source_ProjectSnake_SnakeBase_h_23_INCLASS_NO_PURE_DECLS \
	ProjectSnake_Source_ProjectSnake_SnakeBase_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTSNAKE_API UClass* StaticClass<class ASnakeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectSnake_Source_ProjectSnake_SnakeBase_h


#define FOREACH_ENUM_EMOVEMENTDIRECTION(op) \
	op(EMovementDirection::UP) \
	op(EMovementDirection::DOWN) \
	op(EMovementDirection::LEFT) \
	op(EMovementDirection::RIGHT) 

enum class EMovementDirection;
template<> PROJECTSNAKE_API UEnum* StaticEnum<EMovementDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS