// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakePlus/SnakePlusGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnakePlusGameModeBase() {}
// Cross Module References
	SNAKEPLUS_API UClass* Z_Construct_UClass_ASnakePlusGameModeBase_NoRegister();
	SNAKEPLUS_API UClass* Z_Construct_UClass_ASnakePlusGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SnakePlus();
// End Cross Module References
	void ASnakePlusGameModeBase::StaticRegisterNativesASnakePlusGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASnakePlusGameModeBase);
	UClass* Z_Construct_UClass_ASnakePlusGameModeBase_NoRegister()
	{
		return ASnakePlusGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASnakePlusGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASnakePlusGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SnakePlus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakePlusGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SnakePlusGameModeBase.h" },
		{ "ModuleRelativePath", "SnakePlusGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASnakePlusGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnakePlusGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASnakePlusGameModeBase_Statics::ClassParams = {
		&ASnakePlusGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASnakePlusGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASnakePlusGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASnakePlusGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ASnakePlusGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASnakePlusGameModeBase.OuterSingleton, Z_Construct_UClass_ASnakePlusGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASnakePlusGameModeBase.OuterSingleton;
	}
	template<> SNAKEPLUS_API UClass* StaticClass<ASnakePlusGameModeBase>()
	{
		return ASnakePlusGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASnakePlusGameModeBase);
	struct Z_CompiledInDeferFile_FID_SnakePlus_Source_SnakePlus_SnakePlusGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SnakePlus_Source_SnakePlus_SnakePlusGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASnakePlusGameModeBase, ASnakePlusGameModeBase::StaticClass, TEXT("ASnakePlusGameModeBase"), &Z_Registration_Info_UClass_ASnakePlusGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASnakePlusGameModeBase), 3122337348U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SnakePlus_Source_SnakePlus_SnakePlusGameModeBase_h_2011210810(TEXT("/Script/SnakePlus"),
		Z_CompiledInDeferFile_FID_SnakePlus_Source_SnakePlus_SnakePlusGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SnakePlus_Source_SnakePlus_SnakePlusGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
