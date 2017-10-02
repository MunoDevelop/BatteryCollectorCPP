// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Pickup.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickup() {}
// Cross Module References
	BATTERYCOLLECTOR_API UFunction* Z_Construct_UFunction_APickup_IsActive();
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_APickup();
	BATTERYCOLLECTOR_API UFunction* Z_Construct_UFunction_APickup_SetActive();
	BATTERYCOLLECTOR_API UFunction* Z_Construct_UFunction_APickup_WasCollected();
	BATTERYCOLLECTOR_API UClass* Z_Construct_UClass_APickup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BatteryCollector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	static FName NAME_APickup_WasCollected = FName(TEXT("WasCollected"));
	void APickup::WasCollected()
	{
		ProcessEvent(FindFunctionChecked(NAME_APickup_WasCollected),NULL);
	}
	void APickup::StaticRegisterNativesAPickup()
	{
		UClass* Class = APickup::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "IsActive", (Native)&APickup::execIsActive },
			{ "SetActive", (Native)&APickup::execSetActive },
			{ "WasCollected", (Native)&APickup::execWasCollected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_APickup_IsActive()
	{
		struct Pickup_eventIsActive_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_APickup();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsActive"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14020401, 65535, sizeof(Pickup_eventIsActive_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, Pickup_eventIsActive_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, Pickup_eventIsActive_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, Pickup_eventIsActive_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Pickup"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Pickup.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("{ return PickupMesh; }"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APickup_SetActive()
	{
		struct Pickup_eventSetActive_Parms
		{
			bool NewPickupState;
		};
		UObject* Outer = Z_Construct_UClass_APickup();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetActive"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(Pickup_eventSetActive_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(NewPickupState, Pickup_eventSetActive_Parms);
			UProperty* NewProp_NewPickupState = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewPickupState"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(NewPickupState, Pickup_eventSetActive_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(NewPickupState, Pickup_eventSetActive_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Pickup"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Pickup.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APickup_WasCollected()
	{
		UObject* Outer = Z_Construct_UClass_APickup();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("WasCollected"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x08020C00, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Pickup.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Function to call when the pickup is collected"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APickup_NoRegister()
	{
		return APickup::StaticClass();
	}
	UClass* Z_Construct_UClass_APickup()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_BatteryCollector();
			OuterClass = APickup::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;

				OuterClass->LinkChild(Z_Construct_UFunction_APickup_IsActive());
				OuterClass->LinkChild(Z_Construct_UFunction_APickup_SetActive());
				OuterClass->LinkChild(Z_Construct_UFunction_APickup_WasCollected());

				UProperty* NewProp_PickupMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PickupMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PickupMesh, APickup), 0x00400000000a001d, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_APickup_IsActive(), "IsActive"); // 301004794
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_APickup_SetActive(), "SetActive"); // 1851641552
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_APickup_WasCollected(), "WasCollected"); // 445766424
				static TCppClassTypeInfo<TCppClassTypeTraits<APickup> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Pickup.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Pickup.h"));
				MetaData->SetValue(NewProp_PickupMesh, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_PickupMesh, TEXT("Category"), TEXT("Pickup"));
				MetaData->SetValue(NewProp_PickupMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_PickupMesh, TEXT("ModuleRelativePath"), TEXT("Pickup.h"));
				MetaData->SetValue(NewProp_PickupMesh, TEXT("ToolTip"), TEXT("Static Mesh to represent the pickup in the level"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(APickup, 4208909956);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickup(Z_Construct_UClass_APickup, &APickup::StaticClass, TEXT("/Script/BatteryCollector"), TEXT("APickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
