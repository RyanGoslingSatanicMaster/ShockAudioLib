#pragma once

#include <cstdint>
#include "ControlInfo.h"

#ifndef SHOCK_AUDIO_AUDIOCONFIG_H
#define SHOCK_AUDIO_AUDIOCONFIG_H

#endif //SHOCK_AUDIO_AUDIOCONFIG_H

namespace shock_audio{

    class Config{
    public:
        virtual float getControlValue(ControlInfo control, int32_t position) = 0;
    };
}