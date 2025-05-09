// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealShadows/Public/US_PlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUS_PlayerState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
UNREALSHADOWS_API UClass* Z_Construct_UClass_AUS_PlayerState();
UNREALSHADOWS_API UClass* Z_Construct_UClass_AUS_PlayerState_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealShadows();
// End Cross Module References

// Begin Class AUS_PlayerState
void AUS_PlayerState::StaticRegisterNativesAUS_PlayerState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUS_PlayerState);
UClass* Z_Construct_UClass_AUS_PlayerState_NoRegister()
{
	return AUS_PlayerState::StaticClass();
}
struct Z_Construct_UClass_AUS_PlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "US_PlayerState.h" },
		{ "ModuleRelativePath", "Public/US_PlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUS_PlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AUS_PlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealShadows,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUS_PlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUS_PlayerState_Statics::ClassParams = {
	&AUS_PlayerState::StaticClass,
	"Engine",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUS_PlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_AUS_PlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUS_PlayerState()
{
	if (!Z_Registration_Info_UClass_AUS_PlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUS_PlayerState.OuterSingleton, Z_Construct_UClass_AUS_PlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUS_PlayerState.OuterSingleton;
}
template<> UNREALSHADOWS_API UClass* StaticClass<AUS_PlayerState>()
{
	return AUS_PlayerState::StaticClass();
}
AUS_PlayerState::AUS_PlayerState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUS_PlayerState);
AUS_PlayerState::~AUS_PlayerState() {}
// End Class AUS_PlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_Multiplayer_Game_Development_with_Unreal_Engine_5_main_UnrealShadows_Source_UnrealShadows_Public_US_PlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUS_PlayerState, AUS_PlayerState::StaticClass, TEXT("AUS_PlayerState"), &Z_Registration_Info_UClass_AUS_PlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUS_PlayerState), 1614228690U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_Multiplayer_Game_Development_with_Unreal_Engine_5_main_UnrealShadows_Source_UnrealShadows_Public_US_PlayerState_h_100451420(TEXT("/Script/UnrealShadows"),
	Z_CompiledInDeferFile_FID_UE_Projects_Multiplayer_Game_Development_with_Unreal_Engine_5_main_UnrealShadows_Source_UnrealShadows_Public_US_PlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_Multiplayer_Game_Development_with_Unreal_Engine_5_main_UnrealShadows_Source_UnrealShadows_Public_US_PlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
