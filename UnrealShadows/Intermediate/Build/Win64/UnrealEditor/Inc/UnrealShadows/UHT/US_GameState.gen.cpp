// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealShadows/Public/US_GameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUS_GameState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameState();
UNREALSHADOWS_API UClass* Z_Construct_UClass_AUS_GameState();
UNREALSHADOWS_API UClass* Z_Construct_UClass_AUS_GameState_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealShadows();
// End Cross Module References

// Begin Class AUS_GameState
void AUS_GameState::StaticRegisterNativesAUS_GameState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUS_GameState);
UClass* Z_Construct_UClass_AUS_GameState_NoRegister()
{
	return AUS_GameState::StaticClass();
}
struct Z_Construct_UClass_AUS_GameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "US_GameState.h" },
		{ "ModuleRelativePath", "Public/US_GameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUS_GameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AUS_GameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameState,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealShadows,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUS_GameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUS_GameState_Statics::ClassParams = {
	&AUS_GameState::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUS_GameState_Statics::Class_MetaDataParams), Z_Construct_UClass_AUS_GameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUS_GameState()
{
	if (!Z_Registration_Info_UClass_AUS_GameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUS_GameState.OuterSingleton, Z_Construct_UClass_AUS_GameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUS_GameState.OuterSingleton;
}
template<> UNREALSHADOWS_API UClass* StaticClass<AUS_GameState>()
{
	return AUS_GameState::StaticClass();
}
AUS_GameState::AUS_GameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUS_GameState);
AUS_GameState::~AUS_GameState() {}
// End Class AUS_GameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_Multiplayer_Game_Development_with_Unreal_Engine_5_main_UnrealShadows_Source_UnrealShadows_Public_US_GameState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUS_GameState, AUS_GameState::StaticClass, TEXT("AUS_GameState"), &Z_Registration_Info_UClass_AUS_GameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUS_GameState), 156926006U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_Multiplayer_Game_Development_with_Unreal_Engine_5_main_UnrealShadows_Source_UnrealShadows_Public_US_GameState_h_847705509(TEXT("/Script/UnrealShadows"),
	Z_CompiledInDeferFile_FID_UE_Projects_Multiplayer_Game_Development_with_Unreal_Engine_5_main_UnrealShadows_Source_UnrealShadows_Public_US_GameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_Multiplayer_Game_Development_with_Unreal_Engine_5_main_UnrealShadows_Source_UnrealShadows_Public_US_GameState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
