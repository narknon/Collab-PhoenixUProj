#pragma once
#include "CoreMinimal.h"
#include "ModFilter_DealDamage_Base.h"
#include "ModFilter_DealDamage_Spell_IsConfringoOrTalent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UModFilter_DealDamage_Spell_IsConfringoOrTalent : public UModFilter_DealDamage_Base {
    GENERATED_BODY()
public:
    UModFilter_DealDamage_Spell_IsConfringoOrTalent();
};

