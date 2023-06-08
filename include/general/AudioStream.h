#pragma once

#include <memory>
#include "AudioConfig.h"
#include "ControlAudioProcessor.h"

#ifndef SHOCK_AUDIO_AUDIOSTREAM_H
#define SHOCK_AUDIO_AUDIOSTREAM_H

#endif //SHOCK_AUDIO_AUDIOSTREAM_H
namespace shock_audio{

    class AudioStream: public ControlAudioProcessor{
    public:
        AudioStream(std::shared_ptr<ControlAudioProcessor> controlAudioProc, std::string name);

        [[nodiscard]] std::vector<ControlInfo> getControlInfo() const override;

        float processAudio(int position, Config& config) const override;

    protected:

        void setInputAudioProcessor(std::shared_ptr<ControlAudioProcessor> controlAudioProc);

    private:
        std::shared_ptr<ControlAudioProcessor> _innerControlAudioProc;
    };

}