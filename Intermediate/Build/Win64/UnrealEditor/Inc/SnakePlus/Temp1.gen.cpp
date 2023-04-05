// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakePlus/Public/Temp1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTemp1() {}
// Cross Module References
	SNAKEPLUS_API UClass* Z_Construct_UClass_ATemp1_NoRegister();
	SNAKEPLUS_API UClass* Z_Construct_UClass_ATemp1();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SnakePlus();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ATemp1::StaticRegisterNativesATemp1()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATemp1);
	UClass* Z_Construct_UClass_ATemp1_NoRegister()
	{
		return ATemp1::StaticClass();
	}
	struct Z_Construct_UClass_ATemp1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CubeMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CubeMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATemp1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SnakePlus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATemp1_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Temp1.h" },
		{ "ModuleRelativePath", "Public/Temp1.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATemp1_Statics::NewProp_CubeMesh_MetaData[] = {
		{ "Category", "Temp1" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Temp1.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATemp1_Statics::NewProp_CubeMesh = { "CubeMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATemp1, CubeMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATemp1_Statics::NewProp_CubeMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATemp1_Statics::NewProp_CubeMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATemp1_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATemp1_Statics::NewProp_CubeMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATemp1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATemp1>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATemp1_Statics::ClassParams = {
		&ATemp1::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATemp1_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATemp1_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATemp1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATemp1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATemp1()
	{
		if (!Z_Registration_Info_UClass_ATemp1.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATemp1.OuterSingleton, Z_Construct_UClass_ATemp1_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATemp1.OuterSingleton;
	}
	template<> SNAKEPLUS_API UClass* StaticClass<ATemp1>()
	{
		return ATemp1::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATemp1);
	struct Z_CompiledInDeferFile_FID_SnakePlus_Source_SnakePlus_Public_Temp1_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SnakePlus_Source_SnakePlus_Public_Temp1_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATemp1, ATemp1::StaticClass, TEXT("ATemp1"), &Z_Registration_Info_UClass_ATemp1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATemp1), 327927221U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SnakePlus_Source_SnakePlus_Public_Temp1_h_1984846338(TEXT("/Script/SnakePlus"),
		Z_CompiledInDeferFile_FID_SnakePlus_Source_SnakePlus_Public_Temp1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SnakePlus_Source_SnakePlus_Public_Temp1_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
