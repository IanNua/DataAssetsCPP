// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C/Public/MyPrimaryDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPrimaryDataAsset() {}
// Cross Module References
	C_API UClass* Z_Construct_UClass_UMyPrimaryDataAsset_NoRegister();
	C_API UClass* Z_Construct_UClass_UMyPrimaryDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
	UPackage* Z_Construct_UPackage__Script_C();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UMyPrimaryDataAsset::StaticRegisterNativesUMyPrimaryDataAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyPrimaryDataAsset);
	UClass* Z_Construct_UClass_UMyPrimaryDataAsset_NoRegister()
	{
		return UMyPrimaryDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UMyPrimaryDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fantasyRaceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_fantasyRaceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_villagerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_villagerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_villagerHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_villagerHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_materialColour_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_materialColour;
		static const UECodeGen_Private::FStructPropertyParams NewProp_multiMaterialColour_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_multiMaterialColour_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_multiMaterialColour;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeofCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SizeofCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyPrimaryDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_C,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyPrimaryDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyPrimaryDataAsset.h" },
		{ "ModuleRelativePath", "Public/MyPrimaryDataAsset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyPrimaryDataAsset_Statics::NewProp_fantasyRaceName_MetaData[] = {
		{ "Category", "MyPrimaryDataAsset" },
		{ "ModuleRelativePath", "Public/MyPrimaryDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMyPrimaryDataAsset_Statics::NewProp_fantasyRaceName = { "fantasyRaceName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyPrimaryDataAsset, fantasyRaceName), METADATA_PARAMS(Z_Construct_UClass_UMyPrimaryDataAsset_Statics::NewProp_fantasyRaceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyPrimaryDataAsset_Statics::NewProp_fantasyRaceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyPrimaryDataAsset_Statics::NewProp_villagerName_MetaData[] = {
		{ "Category", "MyPrimaryDataAsset" },
		{ "ModuleRelativePath", "Public/MyPrimaryDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMyPrimaryDataAsset_Statics::NewProp_villagerName = { "villagerName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyPrimaryDataAsset, villagerName), METADATA_PARAMS(Z_Construct_UClass_UMyPrimaryDataAsset_Statics::NewProp_villagerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyPrimaryDataAsset_Statics::NewProp_villagerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyPrimaryDataAsset_Statics::NewProp_villagerHealth_MetaData[] = {
		{ "Category", "MyPrimaryDataAsset" },
		{ "ModuleRelativePath", "Public/MyPrimaryDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyPrimaryDataAsset_Statics::NewProp_villagerHealth = { "villagerHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyPrimaryDataAsset, villagerHealth), METADATA_PARAMS(Z_Construct_UClass_UMyPrimaryDataAsset_Statics::NewProp_villagerHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyPrimaryDataAsset_Statics::NewProp_villagerHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyPrimaryDataAsset_Statics::NewProp_materialColour_MetaData[] = {
		{ "Category", "MyPrimaryDataAsset" },
		{ "ModuleRelativePath", "Public/MyPrimaryDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyPrimaryDataAsset_Statics::NewProp_materialColour = { "materialColour", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyPrimaryDataAsset, materialColour), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UMyPrimaryDataAsset_Statics::NewProp_materialColour_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyPrimaryDataAsset_Statics::NewProp_materialColour_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyPrimaryDataAsset_Statics::NewProp_multiMaterialColour_Inner = { "multiMaterialColour", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyPrimaryDataAsset_Statics::NewProp_multiMaterialColour_MetaData[] = {
		{ "Category", "MyPrimaryDataAsset" },
		{ "ModuleRelativePath", "Public/MyPrimaryDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMyPrimaryDataAsset_Statics::NewProp_multiMaterialColour = { "multiMaterialColour", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyPrimaryDataAsset, multiMaterialColour), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMyPrimaryDataAsset_Statics::NewProp_multiMaterialColour_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyPrimaryDataAsset_Statics::NewProp_multiMaterialColour_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyPrimaryDataAsset_Statics::NewProp_SizeofCharacter_MetaData[] = {
		{ "Category", "MyPrimaryDataAsset" },
		{ "ModuleRelativePath", "Public/MyPrimaryDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyPrimaryDataAsset_Statics::NewProp_SizeofCharacter = { "SizeofCharacter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyPrimaryDataAsset, SizeofCharacter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMyPrimaryDataAsset_Statics::NewProp_SizeofCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyPrimaryDataAsset_Statics::NewProp_SizeofCharacter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyPrimaryDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyPrimaryDataAsset_Statics::NewProp_fantasyRaceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyPrimaryDataAsset_Statics::NewProp_villagerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyPrimaryDataAsset_Statics::NewProp_villagerHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyPrimaryDataAsset_Statics::NewProp_materialColour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyPrimaryDataAsset_Statics::NewProp_multiMaterialColour_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyPrimaryDataAsset_Statics::NewProp_multiMaterialColour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyPrimaryDataAsset_Statics::NewProp_SizeofCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyPrimaryDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyPrimaryDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyPrimaryDataAsset_Statics::ClassParams = {
		&UMyPrimaryDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMyPrimaryDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyPrimaryDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyPrimaryDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyPrimaryDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyPrimaryDataAsset()
	{
		if (!Z_Registration_Info_UClass_UMyPrimaryDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyPrimaryDataAsset.OuterSingleton, Z_Construct_UClass_UMyPrimaryDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyPrimaryDataAsset.OuterSingleton;
	}
	template<> C_API UClass* StaticClass<UMyPrimaryDataAsset>()
	{
		return UMyPrimaryDataAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyPrimaryDataAsset);
	struct Z_CompiledInDeferFile_FID_C_Source_C_Public_MyPrimaryDataAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C_Source_C_Public_MyPrimaryDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyPrimaryDataAsset, UMyPrimaryDataAsset::StaticClass, TEXT("UMyPrimaryDataAsset"), &Z_Registration_Info_UClass_UMyPrimaryDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyPrimaryDataAsset), 3381181640U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_C_Source_C_Public_MyPrimaryDataAsset_h_2471639841(TEXT("/Script/C"),
		Z_CompiledInDeferFile_FID_C_Source_C_Public_MyPrimaryDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_C_Source_C_Public_MyPrimaryDataAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
