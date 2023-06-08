#pragma once
#include "AudioConfig.h"

namespace shock_audio{

    class AudioProcessor{
    public:
       virtual float processAudio(int position, Config& config) const = 0;
    };
}
