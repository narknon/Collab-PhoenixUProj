#include "CreatureGrowthHandler.h"



void ACreatureGrowthHandler::ShowNewCreature() {
}


bool ACreatureGrowthHandler::IsNewCreatureReady() const {
    return false;
}

void ACreatureGrowthHandler::Finish() {
}

ACreatureGrowthHandler::ACreatureGrowthHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TargetCreatureActor = NULL;
    this->NewCreatureActor = NULL;
    this->NewCreatureScaleVariation = 1.00f;
}

