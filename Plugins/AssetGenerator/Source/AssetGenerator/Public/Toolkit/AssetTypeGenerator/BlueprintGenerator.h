#pragma once
#include "CoreMinimal.h"
#include "Toolkit/AssetGeneration/AssetGenerationUtil.h"
#include "Toolkit/AssetGeneration/AssetTypeGenerator.h"
#include "BlueprintGenerator.generated.h"

UCLASS(Blueprintable)
class ASSETGENERATOR_API UBlueprintGenerator : public UAssetTypeGenerator {
GENERATED_BODY()
protected:
	UFUNCTION(BlueprintCallable)
	virtual void CreateAssetPackage() override;
	UFUNCTION(BlueprintCallable)
	virtual void OnExistingPackageLoaded() override;

	UFUNCTION(BlueprintCallable)
	virtual UBlueprint* CreateNewBlueprint(UPackage* Package, UClass* ParentClass);
	virtual void PostConstructOrUpdateAsset(UBlueprint* Blueprint);
	UFUNCTION(BlueprintCallable)
	virtual void PopulateAssetWithData() override;
	UFUNCTION(BlueprintCallable)
	virtual void FinalizeAssetCDO() override;
	UFUNCTION(BlueprintCallable)
	void UpdateDeserializerBlueprintClassObject(bool bRecompileBlueprint);
	virtual UClass* GetFallbackParentClass() const;
public:
	virtual void PopulateStageDependencies(TArray<FPackageDependency>& OutDependencies) const override;
	virtual FName GetAssetClass() override;
};

UCLASS(Blueprintable)
class ASSETGENERATOR_API UBlueprintGeneratorUtils : public UObject {
	GENERATED_BODY()
public:
	/** Determines whenever function with provided name is generated and should not be auto implemented */
	UFUNCTION(BlueprintCallable)
	static bool IsFunctionNameGenerated(const FString& FunctionName);

	/** Determines whenever property name is generated and should not be created */
	UFUNCTION(BlueprintCallable)
	static bool IsPropertyNameGenerated(const FString& PropertyName);
	
	/** Makes sure blueprint is up to date and performs various validation routines */
	UFUNCTION(BlueprintCallable)
	static void EnsureBlueprintUpToDate(UBlueprint* Blueprint);
	
	/** Adds new interface to the list of implemented interfaces and automatically spawns all required graphs */
	UFUNCTION(BlueprintCallable)
	static bool ImplementNewInterface(UBlueprint* Blueprint, UClass* InterfaceClass);

	/** Generates super function call and plugs it automatically, if it is possible */
	UFUNCTION(BlueprintCallable)
	static bool CreateParentFunctionCall(UBlueprint* Blueprint, UFunction* Function, UK2Node* FunctionEntryOrEventNode, class UK2Node_FunctionResult* FunctionReturnNode);

	/** Creates new event node with the provided name, or returns existing one */
	UFUNCTION(BlueprintCallable)
	static class UK2Node_Event* CreateCustomEventNode(UBlueprint* Blueprint, const FName& EventName);
	
	/** Creates function result node for the provided function entry node */
	UFUNCTION(BlueprintCallable)
	static class UK2Node_FunctionResult* CreateFunctionResultNode(const class UK2Node_FunctionEntry* FunctionEntry, bool bAutoConnectNode);

	/** Creates and initializes a new function graph with provided name and possibly allocates K2Node_FunctionResult if asked */
	UFUNCTION(BlueprintCallable)
	static class UK2Node_FunctionEntry* CreateFunctionGraph(UBlueprint* Blueprint, const FName& FunctionName);

	/** Creates an override for the provided function, or returns the existing one */
	UFUNCTION(BlueprintCallable)
	static UK2Node* CreateFunctionOverride(UBlueprint* Blueprint, UFunction* Function, bool bOverrideAsEvent, bool bCreateParentCall);

	/** Retrieves function name from the node, assuming it's either K2Node_Event or K2Node_FunctionEntry */
	UFUNCTION(BlueprintCallable)
	static FName GetFunctionNameForNode(UK2Node* Node);
	
	/** Attempts to find function in the parent class or interfaces */
	UFUNCTION(BlueprintCallable)
	static UFunction* FindFunctionInParentClassOrInterfaces(UBlueprint* Blueprint, const FName& FunctionName);

	/** Creates list of blueprint functions for blueprint */
	UFUNCTION()
	static bool CreateNewBlueprintFunctions(UBlueprint* Blueprint, const TArray<FDeserializedFunction>& Functions, /*const TFunctionRef<bool(const FDeserializedFunction& Function)>& FunctionFilter,*/ bool bCreateFunctionOverrides);

	/** Creates a list of blueprint variables from properties, also removes obsolete properties */
	UFUNCTION()
	static bool CreateBlueprintVariablesForProperties(UBlueprint* Blueprint, const TArray<FDeserializedProperty>& Properties, const TMap<FName, FDeserializedFunction>& Functions/*, const TFunctionRef<bool(const FDeserializedProperty& Property)>& PropertyFilter*/);

	/** Updates FunctionEntry node parameters to match the supplied array */
	UFUNCTION()
	static bool SetFunctionEntryParameters(class UK2Node_EditablePinBase* FunctionEntry, const FDeserializedFunction& Function, bool bIsFunctionEntry);

	/** Retrieves blueprint variable description using it's name, or NULL if it's not found */
	static FBPVariableDescription* FindBlueprintVariableByName(UBlueprint* Blueprint, const FName& VariableName);

	/** Resets "Ghost" node state for the provided node */
	UFUNCTION(BlueprintCallable)
	static void ResetNodeDisabledState(UEdGraphNode* GraphNode);
	/** Creates and initializes event graph for new event dispatcher property with provided name */
	UFUNCTION(BlueprintCallable)
	static UEdGraph* CreateNewBlueprintEventDispatcherSignatureGraph(UBlueprint* Blueprint, const FName& DispatcherName);
};