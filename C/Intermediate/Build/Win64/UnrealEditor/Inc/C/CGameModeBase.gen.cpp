// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C/CGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCGameModeBase() {}
// Cross Module References
	C_API UClass* Z_Construct_UClass_ACGameModeBase_NoRegister();
	C_API UClass* Z_Construct_UClass_ACGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_C();
// End Cross Module References
	void ACGameModeBase::StaticRegisterNativesACGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACGameModeBase);
	UClass* Z_Construct_UClass_ACGameModeBase_NoRegister()
	{
		return ACGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_C,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CGameModeBase.h" },
		{ "ModuleRelativePath", "CGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACGameModeBase_Statics::ClassParams = {
		&ACGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ACGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACGameModeBase.OuterSingleton, Z_Construct_UClass_ACGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACGameModeBase.OuterSingleton;
	}
	template<> C_API UClass* StaticClass<ACGameModeBase>()
	{
		return ACGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACGameModeBase);
	struct Z_CompiledInDeferFile_FID_C_Source_C_CGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C_Source_C_CGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACGameModeBase, ACGameModeBase::StaticClass, TEXT("ACGameModeBase"), &Z_Registration_Info_UClass_ACGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACGameModeBase), 3990764572U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C_Source_C_CGameModeBase_h_435760984(TEXT("/Script/C"),
		Z_CompiledInDeferFile_FID_C_Source_C_CGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C_Source_C_CGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
