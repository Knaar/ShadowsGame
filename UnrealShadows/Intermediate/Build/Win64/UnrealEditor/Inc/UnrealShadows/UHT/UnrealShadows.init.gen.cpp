// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealShadows_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UnrealShadows;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UnrealShadows()
	{
		if (!Z_Registration_Info_UPackage__Script_UnrealShadows.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UnrealShadows",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x96DE9E98,
				0x27A27508,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UnrealShadows.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UnrealShadows.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UnrealShadows(Z_Construct_UPackage__Script_UnrealShadows, TEXT("/Script/UnrealShadows"), Z_Registration_Info_UPackage__Script_UnrealShadows, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x96DE9E98, 0x27A27508));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
