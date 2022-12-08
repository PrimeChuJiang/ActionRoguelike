// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRoguelike/ActionRoguelikeGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionRoguelikeGameModeBase() {}
// Cross Module References
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_AActionRoguelikeGameModeBase_NoRegister();
	ACTIONROGUELIKE_API UClass* Z_Construct_UClass_AActionRoguelikeGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ActionRoguelike();
// End Cross Module References
	void AActionRoguelikeGameModeBase::StaticRegisterNativesAActionRoguelikeGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AActionRoguelikeGameModeBase);
	UClass* Z_Construct_UClass_AActionRoguelikeGameModeBase_NoRegister()
	{
		return AActionRoguelikeGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AActionRoguelikeGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AActionRoguelikeGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRoguelike,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActionRoguelikeGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ActionRoguelikeGameModeBase.h" },
		{ "ModuleRelativePath", "ActionRoguelikeGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AActionRoguelikeGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActionRoguelikeGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AActionRoguelikeGameModeBase_Statics::ClassParams = {
		&AActionRoguelikeGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AActionRoguelikeGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AActionRoguelikeGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AActionRoguelikeGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AActionRoguelikeGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AActionRoguelikeGameModeBase.OuterSingleton, Z_Construct_UClass_AActionRoguelikeGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AActionRoguelikeGameModeBase.OuterSingleton;
	}
	template<> ACTIONROGUELIKE_API UClass* StaticClass<AActionRoguelikeGameModeBase>()
	{
		return AActionRoguelikeGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActionRoguelikeGameModeBase);
	struct Z_CompiledInDeferFile_FID_ActionRoguelike_Source_ActionRoguelike_ActionRoguelikeGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRoguelike_Source_ActionRoguelike_ActionRoguelikeGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AActionRoguelikeGameModeBase, AActionRoguelikeGameModeBase::StaticClass, TEXT("AActionRoguelikeGameModeBase"), &Z_Registration_Info_UClass_AActionRoguelikeGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AActionRoguelikeGameModeBase), 1441637383U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionRoguelike_Source_ActionRoguelike_ActionRoguelikeGameModeBase_h_2894729512(TEXT("/Script/ActionRoguelike"),
		Z_CompiledInDeferFile_FID_ActionRoguelike_Source_ActionRoguelike_ActionRoguelikeGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ActionRoguelike_Source_ActionRoguelike_ActionRoguelikeGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
