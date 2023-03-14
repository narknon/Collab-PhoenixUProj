#pragma once
#include "CoreMinimal.h"
#include "RenderSettingsCustomBlendDomainBase.h"
#include "RenderSettingsCustomBlendDomainHDRBase.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class RENDERSETTINGS_API URenderSettingsCustomBlendDomainHDRBase : public URenderSettingsCustomBlendDomainBase {
    GENERATED_BODY()
public:
    URenderSettingsCustomBlendDomainHDRBase();
};

