// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealShadows/Public/US_GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUS_GameInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
UNREALSHADOWS_API UClass* Z_Construct_UClass_UUS_GameInstance();
UNREALSHADOWS_API UClass* Z_Construct_UClass_UUS_GameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealShadows();
// End Cross Module References

// Begin Class UUS_GameInstance
void UUS_GameInstance::StaticRegisterNativesUUS_GameInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUS_GameInstance);
UClass* Z_Construct_UClass_UUS_GameInstance_NoRegister()
{
	return UUS_GameInstance::StaticClass();
}
struct Z_Construct_UClass_UUS_GameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "US_GameInstance.h" },
		{ "ModuleRelativePath", "Public/US_GameInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUS_GameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUS_GameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealShadows,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUS_GameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUS_GameInstance_Statics::ClassParams = {
	&UUS_GameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUS_GameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UUS_GameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUS_GameInstance()
{
	if (!Z_Registration_Info_UClass_UUS_GameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUS_GameInstance.OuterSingleton, Z_Construct_UClass_UUS_GameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUS_GameInstance.OuterSingleton;
}
template<> UNREALSHADOWS_API UClass* StaticClass<UUS_GameInstance>()
{
	return UUS_GameInstance::StaticClass();
}
UUS_GameInstance::UUS_GameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUS_GameInstance);
UUS_GameInstance::~UUS_GameInstance() {}
// End Class UUS_GameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_Multiplayer_Game_Development_with_Unreal_Engine_5_main_UnrealShadows_Source_UnrealShadows_Public_US_GameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUS_GameInstance, UUS_GameInstance::StaticClass, TEXT("UUS_GameInstance"), &Z_Registration_Info_UClass_UUS_GameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUS_GameInstance), 2699183987U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_Multiplayer_Game_Development_with_Unreal_Engine_5_main_UnrealShadows_Source_UnrealShadows_Public_US_GameInstance_h_1511683324(TEXT("/Script/UnrealShadows"),
	Z_CompiledInDeferFile_FID_UE_Projects_Multiplayer_Game_Development_with_Unreal_Engine_5_main_UnrealShadows_Source_UnrealShadows_Public_US_GameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_Multiplayer_Game_Development_with_Unreal_Engine_5_main_UnrealShadows_Source_UnrealShadows_Public_US_GameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
