#include "PersistentBreakable.h"

bool APersistentBreakable::ResetState_Implementation(EBreakableState NextState) {
    return false;
}

APersistentBreakable::APersistentBreakable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

