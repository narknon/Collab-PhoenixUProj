#pragma once
#include "CoreMinimal.h"
#include "FlockPersonalityDistribution.h"
#include "FlockPersonalityWanderer.generated.h"

USTRUCT(BlueprintType)
struct FFlockPersonalityWanderer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlockPersonalityDistribution Distribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Frequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFactor;
    
    PHOENIX_API FFlockPersonalityWanderer();
};

