#pragma once
#include "CoreMinimal.h"
#include "ModFilter_Player_Base.h"
#include "ModFilter_Player_HasMaximaUpgrade.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UModFilter_Player_HasMaximaUpgrade : public UModFilter_Player_Base {
    GENERATED_BODY()
public:
    UModFilter_Player_HasMaximaUpgrade();
};

