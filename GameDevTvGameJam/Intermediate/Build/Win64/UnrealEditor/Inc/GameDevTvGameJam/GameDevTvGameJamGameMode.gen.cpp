// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameDevTvGameJam/GameDevTvGameJamGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameDevTvGameJamGameMode() {}
// Cross Module References
	GAMEDEVTVGAMEJAM_API UClass* Z_Construct_UClass_AGameDevTvGameJamGameMode_NoRegister();
	GAMEDEVTVGAMEJAM_API UClass* Z_Construct_UClass_AGameDevTvGameJamGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GameDevTvGameJam();
// End Cross Module References
	void AGameDevTvGameJamGameMode::StaticRegisterNativesAGameDevTvGameJamGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameDevTvGameJamGameMode);
	UClass* Z_Construct_UClass_AGameDevTvGameJamGameMode_NoRegister()
	{
		return AGameDevTvGameJamGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGameDevTvGameJamGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameDevTvGameJamGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GameDevTvGameJam,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameDevTvGameJamGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameDevTvGameJamGameMode.h" },
		{ "ModuleRelativePath", "GameDevTvGameJamGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameDevTvGameJamGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameDevTvGameJamGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameDevTvGameJamGameMode_Statics::ClassParams = {
		&AGameDevTvGameJamGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGameDevTvGameJamGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameDevTvGameJamGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameDevTvGameJamGameMode()
	{
		if (!Z_Registration_Info_UClass_AGameDevTvGameJamGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameDevTvGameJamGameMode.OuterSingleton, Z_Construct_UClass_AGameDevTvGameJamGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGameDevTvGameJamGameMode.OuterSingleton;
	}
	template<> GAMEDEVTVGAMEJAM_API UClass* StaticClass<AGameDevTvGameJamGameMode>()
	{
		return AGameDevTvGameJamGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameDevTvGameJamGameMode);
	struct Z_CompiledInDeferFile_FID_GameDevTvGameJam_Source_GameDevTvGameJam_GameDevTvGameJamGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevTvGameJam_Source_GameDevTvGameJam_GameDevTvGameJamGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameDevTvGameJamGameMode, AGameDevTvGameJamGameMode::StaticClass, TEXT("AGameDevTvGameJamGameMode"), &Z_Registration_Info_UClass_AGameDevTvGameJamGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameDevTvGameJamGameMode), 970131281U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameDevTvGameJam_Source_GameDevTvGameJam_GameDevTvGameJamGameMode_h_753262117(TEXT("/Script/GameDevTvGameJam"),
		Z_CompiledInDeferFile_FID_GameDevTvGameJam_Source_GameDevTvGameJam_GameDevTvGameJamGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameDevTvGameJam_Source_GameDevTvGameJam_GameDevTvGameJamGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
