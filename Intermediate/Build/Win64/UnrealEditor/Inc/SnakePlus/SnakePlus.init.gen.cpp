// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnakePlus_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SnakePlus;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SnakePlus()
	{
		if (!Z_Registration_Info_UPackage__Script_SnakePlus.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SnakePlus",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x3F6B22CB,
				0x09C2B32C,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SnakePlus.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SnakePlus.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SnakePlus(Z_Construct_UPackage__Script_SnakePlus, TEXT("/Script/SnakePlus"), Z_Registration_Info_UPackage__Script_SnakePlus, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x3F6B22CB, 0x09C2B32C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
