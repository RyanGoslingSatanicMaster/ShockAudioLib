#pragma once

#include <memory>
#include "AudioConfig.h"
#include "ControlAudioProcessor.h"

#ifndef SHOCK_AUDIO_AUDIOSTREAM_H
#define SHOCK_AUDIO_AUDIOSTREAM_H

#endif //SHOCK_AUDIO_AUDIOSTREAM_H
namespace shock_audio{

    class AudioGenerator: public ControlAudioProcessor{
    public:
        AudioGenerator(std::string name);
    };

}