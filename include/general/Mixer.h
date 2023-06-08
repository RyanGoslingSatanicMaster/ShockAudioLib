#pragma once

#include <memory>
#include "AudioConfig.h"
#include "ControlAudioProcessor.h"

#ifndef SHOCK_AUDIO_AUDIOSTREAM_H
#define SHOCK_AUDIO_AUDIOSTREAM_H

#endif //SHOCK_AUDIO_AUDIOSTREAM_H
namespace shock_audio{

    class Mixer: public ControlAudioProcessor{
    public:
        Mixer(std::vector<std::shared_ptr<ControlAudioProcessor>> controlAudioProcList, std::string name);

        float processAudio(int position, Config& config) const override;

        bool addInputAudioProcessor(std::shared_ptr<ControlAudioProcessor> controlAudioProc);

        bool removeInputAudioProcessorByName(const std::string& name);

        void setAudioProcessorList(std::vector<std::shared_ptr<ControlAudioProcessor>> controlAudioProcList);
    private:
        std::vector<std::shared_ptr<ControlAudioProcessor>> _innerControlAudioProcList;
    };

}
