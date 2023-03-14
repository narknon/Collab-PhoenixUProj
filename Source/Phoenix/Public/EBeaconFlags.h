#pragma once
#include "CoreMinimal.h"
#include "EBeaconFlags.generated.h"

UENUM(BlueprintType)
enum class EBeaconFlags : uint8 {
    BEACON_FLAG_NONE,
    BEACON_FLAG_HIDEINACTIVE,
    BEACON_FLAG_SHOWINWORLD,
    BEACON_FLAG_FORCESTATIC = 0x4,
    BEACON_FLAG_FORCEINACTIVE = 0x8,
    BEACON_FLAG_ALWAYSCOMPASS = 0x10,
    BEACON_FLAG_HIDEDISTANCEONHUD = 0x20,
    BEACON_FLAG_DONTLOCKONHUD = 0x40,
    BEACON_FLAG_HIDEFROMMAP = 0x80,
    BEACON_FLAG_ALL = 0xFF,
};

