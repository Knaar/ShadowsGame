// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealShadows/Public/US_PlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUS_PlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UNREALSHADOWS_API UClass* Z_Construct_UClass_AUS_PlayerController();
UNREALSHADOWS_API UClass* Z_Construct_UClass_AUS_PlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealShadows();
// End Cross Module References

// Begin Class AUS_PlayerController
void AUS_PlayerController::StaticRegisterNativesAUS_PlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUS_PlayerController);
UClass* Z_Construct_UClass_AUS_PlayerController_NoRegister()
{
	return AUS_PlayerController::StaticClass();
}
struct Z_Construct_UClass_AUS_PlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "US_PlayerController.h" },
		{ "ModuleRelativePath", "Public/US_PlayerController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUS_PlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AUS_PlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealShadows,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUS_PlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUS_PlayerController_Statics::ClassParams = {
	&AUS_PlayerController::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUS_PlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AUS_PlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUS_PlayerController()
{
	if (!Z_Registration_Info_UClass_AUS_PlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUS_PlayerController.OuterSingleton, Z_Construct_UClass_AUS_PlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUS_PlayerController.OuterSingleton;
}
template<> UNREALSHADOWS_API UClass* StaticClass<AUS_PlayerController>()
{
	return AUS_PlayerController::StaticClass();
}
AUS_PlayerController::AUS_PlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUS_PlayerController);
AUS_PlayerController::~AUS_PlayerController() {}
// End Class AUS_PlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_Multiplayer_Game_Development_with_Unreal_Engine_5_main_UnrealShadows_Source_UnrealShadows_Public_US_PlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUS_PlayerController, AUS_PlayerController::StaticClass, TEXT("AUS_PlayerController"), &Z_Registration_Info_UClass_AUS_PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUS_PlayerController), 54375975U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_Multiplayer_Game_Development_with_Unreal_Engine_5_main_UnrealShadows_Source_UnrealShadows_Public_US_PlayerController_h_3326110933(TEXT("/Script/UnrealShadows"),
	Z_CompiledInDeferFile_FID_UE_Projects_Multiplayer_Game_Development_with_Unreal_Engine_5_main_UnrealShadows_Source_UnrealShadows_Public_US_PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_Multiplayer_Game_Development_with_Unreal_Engine_5_main_UnrealShadows_Source_UnrealShadows_Public_US_PlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
