#pragma once
#include "CoreMinimal.h"
#include "EInventoryChangeReason.generated.h"

UENUM(BlueprintType)
enum class EInventoryChangeReason : uint8 {
    INVENTORY_CHANGE_REASON_GENERIC,
    INVENTORY_CHANGE_REASON_SOLD,
    INVENTORY_CHANGE_REASON_STOLEN,
    INVENTORY_CHANGE_REASON_PLANTED,
    INVENTORY_CHANGE_REASON_CONSOLE_DEBUG,
    INVENTORY_CHANGE_REASON_POPULATE_VENDOR,
    INVENTORY_CHANGE_REASON_TRANSFERRED,
    INVENTORY_CHANGE_REASON_DROPPED,
    INVENTORY_CHANGE_REASON_GIFTED,
    INVENTORY_CHANGE_REASON_ACTIVITY,
    INVENTORY_CHANGE_REASON_CURRICULUM,
    INVENTORY_CHANGE_REASON_LOOT,
    INVENTORY_CHANGE_REASON_MAIL,
    INVENTORY_CHANGE_REASON_MISSION,
    INVENTORY_CHANGE_REASON_CREATURES,
    INVENTORY_CHANGE_REASON_CRIME,
    INVENTORY_CHANGE_REASON_HERBOLOGY,
    INVENTORY_CHANGE_REASON_POTION_BREW,
    INVENTORY_CHANGE_REASON_CONVERTER,
    INVENTORY_CHANGE_REASON_CONJURATION,
    INVENTORY_CHANGE_REASON_USED,
    INVENTORY_CHANGE_REASON_FORAGED,
    INVENTORY_CHANGE_REASON_PURCHASE,
    INVENTORY_CHANGE_REASON_GEAR_TRANSFER,
    INVENTORY_CHANGE_REASON_MAX UMETA(Hidden),
};
