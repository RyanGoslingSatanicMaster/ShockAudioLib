#pragma once

#ifndef SHOCK_AUDIO_AUDIOCHANNEL_H
#define SHOCK_AUDIO_AUDIOCHANNEL_H

#include <memory>
#include "../general/ControlAudioProcessor.h"
#include "../general/AudioStream.h"
#include "Effect.h"
#include "AudioTrack.h"

namespace shock_audio{

    class AudioChannel: public AudioStream{
    public:

        explicit AudioChannel(std::shared_ptr<AudioChannel> audioChannel, std::string name);

        explicit AudioChannel(std::shared_ptr<Effect> effect, std::string name);

        explicit AudioChannel(std::shared_ptr<AudioTrack> audioTrack, std::string name);

        [[nodiscard]] std::vector<ControlInfo> getControlInfo() const override;

        float processAudio(int position, Config& config) const override;

        void setInput(std::shared_ptr<ControlAudioProcessor> controlAudioProc);

    protected:
        AudioChannel(std::shared_ptr<ControlAudioProcessor> controlAudioProc, std::string name);
    };

}

#endif //SHOCK_AUDIO_AUDIOCHANNEL_H
