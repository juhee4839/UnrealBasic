// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelloUnral/HelloUnralGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHelloUnralGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	HELLOUNRAL_API UClass* Z_Construct_UClass_AHelloUnralGameModeBase();
	HELLOUNRAL_API UClass* Z_Construct_UClass_AHelloUnralGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HelloUnral();
// End Cross Module References
	void AHelloUnralGameModeBase::StaticRegisterNativesAHelloUnralGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHelloUnralGameModeBase);
	UClass* Z_Construct_UClass_AHelloUnralGameModeBase_NoRegister()
	{
		return AHelloUnralGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AHelloUnralGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHelloUnralGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HelloUnral,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHelloUnralGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "HelloUnralGameModeBase.h" },
		{ "ModuleRelativePath", "HelloUnralGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHelloUnralGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHelloUnralGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHelloUnralGameModeBase_Statics::ClassParams = {
		&AHelloUnralGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AHelloUnralGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHelloUnralGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHelloUnralGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AHelloUnralGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHelloUnralGameModeBase.OuterSingleton, Z_Construct_UClass_AHelloUnralGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHelloUnralGameModeBase.OuterSingleton;
	}
	template<> HELLOUNRAL_API UClass* StaticClass<AHelloUnralGameModeBase>()
	{
		return AHelloUnralGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHelloUnralGameModeBase);
	AHelloUnralGameModeBase::~AHelloUnralGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_JH_unreal_241226_HelloUnral_Source_HelloUnral_HelloUnralGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JH_unreal_241226_HelloUnral_Source_HelloUnral_HelloUnralGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHelloUnralGameModeBase, AHelloUnralGameModeBase::StaticClass, TEXT("AHelloUnralGameModeBase"), &Z_Registration_Info_UClass_AHelloUnralGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHelloUnralGameModeBase), 335334810U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JH_unreal_241226_HelloUnral_Source_HelloUnral_HelloUnralGameModeBase_h_4057585821(TEXT("/Script/HelloUnral"),
		Z_CompiledInDeferFile_FID_JH_unreal_241226_HelloUnral_Source_HelloUnral_HelloUnralGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_JH_unreal_241226_HelloUnral_Source_HelloUnral_HelloUnralGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
