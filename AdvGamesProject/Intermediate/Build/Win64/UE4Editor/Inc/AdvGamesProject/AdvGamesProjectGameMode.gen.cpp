// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AdvGamesProject/AdvGamesProjectGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAdvGamesProjectGameMode() {}
// Cross Module References
	ADVGAMESPROJECT_API UClass* Z_Construct_UClass_AAdvGamesProjectGameMode_NoRegister();
	ADVGAMESPROJECT_API UClass* Z_Construct_UClass_AAdvGamesProjectGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AdvGamesProject();
// End Cross Module References
	void AAdvGamesProjectGameMode::StaticRegisterNativesAAdvGamesProjectGameMode()
	{
	}
	UClass* Z_Construct_UClass_AAdvGamesProjectGameMode_NoRegister()
	{
		return AAdvGamesProjectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AAdvGamesProjectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAdvGamesProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AdvGamesProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAdvGamesProjectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AdvGamesProjectGameMode.h" },
		{ "ModuleRelativePath", "AdvGamesProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAdvGamesProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAdvGamesProjectGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAdvGamesProjectGameMode_Statics::ClassParams = {
		&AAdvGamesProjectGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AAdvGamesProjectGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAdvGamesProjectGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAdvGamesProjectGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAdvGamesProjectGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAdvGamesProjectGameMode, 3894943978);
	template<> ADVGAMESPROJECT_API UClass* StaticClass<AAdvGamesProjectGameMode>()
	{
		return AAdvGamesProjectGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAdvGamesProjectGameMode(Z_Construct_UClass_AAdvGamesProjectGameMode, &AAdvGamesProjectGameMode::StaticClass, TEXT("/Script/AdvGamesProject"), TEXT("AAdvGamesProjectGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAdvGamesProjectGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
