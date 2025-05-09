// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealShadows/Public/US_Character.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUS_Character() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
UNREALSHADOWS_API UClass* Z_Construct_UClass_AUS_Character();
UNREALSHADOWS_API UClass* Z_Construct_UClass_AUS_Character_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealShadows();
// End Cross Module References

// Begin Class AUS_Character
void AUS_Character::StaticRegisterNativesAUS_Character()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUS_Character);
UClass* Z_Construct_UClass_AUS_Character_NoRegister()
{
	return AUS_Character::StaticClass();
}
struct Z_Construct_UClass_AUS_Character_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "US_Character.h" },
		{ "ModuleRelativePath", "Public/US_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/US_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/US_Character.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUS_Character>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUS_Character_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUS_Character, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUS_Character_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUS_Character, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FollowCamera_MetaData), NewProp_FollowCamera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUS_Character_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUS_Character_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUS_Character_Statics::NewProp_FollowCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUS_Character_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AUS_Character_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealShadows,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUS_Character_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AUS_Character_Statics::ClassParams = {
	&AUS_Character::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AUS_Character_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AUS_Character_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUS_Character_Statics::Class_MetaDataParams), Z_Construct_UClass_AUS_Character_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AUS_Character()
{
	if (!Z_Registration_Info_UClass_AUS_Character.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUS_Character.OuterSingleton, Z_Construct_UClass_AUS_Character_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AUS_Character.OuterSingleton;
}
template<> UNREALSHADOWS_API UClass* StaticClass<AUS_Character>()
{
	return AUS_Character::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AUS_Character);
AUS_Character::~AUS_Character() {}
// End Class AUS_Character

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_Multiplayer_Game_Development_with_Unreal_Engine_5_main_UnrealShadows_Source_UnrealShadows_Public_US_Character_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AUS_Character, AUS_Character::StaticClass, TEXT("AUS_Character"), &Z_Registration_Info_UClass_AUS_Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUS_Character), 1203623755U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_Multiplayer_Game_Development_with_Unreal_Engine_5_main_UnrealShadows_Source_UnrealShadows_Public_US_Character_h_1364274269(TEXT("/Script/UnrealShadows"),
	Z_CompiledInDeferFile_FID_UE_Projects_Multiplayer_Game_Development_with_Unreal_Engine_5_main_UnrealShadows_Source_UnrealShadows_Public_US_Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_Multiplayer_Game_Development_with_Unreal_Engine_5_main_UnrealShadows_Source_UnrealShadows_Public_US_Character_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
