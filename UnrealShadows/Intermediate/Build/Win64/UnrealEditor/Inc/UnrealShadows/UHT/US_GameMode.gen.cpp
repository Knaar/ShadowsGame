// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealShadows/Public/US_GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUS_GameMode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
UNREALSHADOWS_API UClass* Z_Construct_UClass_AUS_GameMode();
UNREALSHADOWS_API UClass* Z_Construct_UClass_AUS_GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealShadows();
// End Cross Module References

// Begin Class AUS_GameMode
void AUS_GameMode::StaticRegisterNativesAUS_GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUS_GameMode);
UClass* Z_Construct_UClass_AUS_GameMode_NoRegister()
{
	return AUS_GameMode::StaticClass();
}
struct Z_Construct_UClass_AUS_GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "US_GameMode.h" },
		{ "ModuleRelativePath", "Public/US_GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerPawnClass_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/US_GameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PlayerPawnClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUS_GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AUS_GameMode_Statics::NewProp_PlayerPawnClass = { "PlayerPawnClass", nullptr, (EPropertyFlags)0x0014000000020005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUS_GameMode, PlayerPawnClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerPawnClass_MetaData), NewProp_PlayerPawnClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUS_GameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUS_GameMode_Statics::NewProp_PlayerPawnClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUS_GameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AUS_GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealShadows,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUS_GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUS_GameMode_Statics::ClassParams = {
	&AUS_GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AUS_GameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AUS_GameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUS_GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AUS_GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUS_GameMode()
{
	if (!Z_Registration_Info_UClass_AUS_GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUS_GameMode.OuterSingleton, Z_Construct_UClass_AUS_GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUS_GameMode.OuterSingleton;
}
template<> UNREALSHADOWS_API UClass* StaticClass<AUS_GameMode>()
{
	return AUS_GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUS_GameMode);
AUS_GameMode::~AUS_GameMode() {}
// End Class AUS_GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_Multiplayer_Game_Development_with_Unreal_Engine_5_main_UnrealShadows_Source_UnrealShadows_Public_US_GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUS_GameMode, AUS_GameMode::StaticClass, TEXT("AUS_GameMode"), &Z_Registration_Info_UClass_AUS_GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUS_GameMode), 1371214438U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_Multiplayer_Game_Development_with_Unreal_Engine_5_main_UnrealShadows_Source_UnrealShadows_Public_US_GameMode_h_3963224930(TEXT("/Script/UnrealShadows"),
	Z_CompiledInDeferFile_FID_UE_Projects_Multiplayer_Game_Development_with_Unreal_Engine_5_main_UnrealShadows_Source_UnrealShadows_Public_US_GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_Multiplayer_Game_Development_with_Unreal_Engine_5_main_UnrealShadows_Source_UnrealShadows_Public_US_GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
