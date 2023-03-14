#pragma once
#include "CoreMinimal.h"
#include "EMapFadeState.generated.h"

UENUM(BlueprintType)
enum EMapFadeState {
    MAP_FADE_STATE_IDLE,
    MAP_FADE_STATE_FADING_OUT,
    MAP_FADE_STATE_FADING_IN,
    MAP_FADE_STATE_FADING_TRANSITION,
    MAP_FADE_STATE_ZOOMING_IN,
    MAP_FADE_STATE_ZOOMING_OUT,
    MAP_FADE_STATE_FADED_OUT,
    MAP_FADE_SCREEN_WIDGET_IN,
    MAP_FADE_SCREEN_WIDGET_OUT,
    MAP_FADE_TENT_FADING_OUT,
    MAP_FADE_TENT_FADING_IN,
    MAP_FADE_TENT_WAITING,
    MAP_WIDGET_STATE_FADING_OUT,
    MAP_WIDGET_STATE_FADING_IN,
    MAP_FADE_STATE_PULSE,
    MAP_MAX UMETA(Hidden),
};

