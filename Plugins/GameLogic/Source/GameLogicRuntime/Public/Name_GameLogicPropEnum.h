#pragma once
#include "CoreMinimal.h"
#include "Name_GameLogicElement.h"
#include "Name_GameLogicPropEnum.generated.h"

USTRUCT(BlueprintType)
struct GAMELOGICRUNTIME_API FName_GameLogicPropEnum : public FName_GameLogicElement {
    GENERATED_BODY()
public:
    FName_GameLogicPropEnum();
};

