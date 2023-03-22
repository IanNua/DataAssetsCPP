// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_C;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_C()
	{
		if (!Z_Registration_Info_UPackage__Script_C.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/C",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xF712B0F8,
				0x66A9E51D,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_C.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_C.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_C(Z_Construct_UPackage__Script_C, TEXT("/Script/C"), Z_Registration_Info_UPackage__Script_C, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF712B0F8, 0x66A9E51D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
