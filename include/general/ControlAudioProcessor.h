#pragma once

#include "AudioProcessor.h"
#include "Controller.h"

#ifndef SHOCK_AUDIO_CONTROLAUDIOPROCESSOR_H
#define SHOCK_AUDIO_CONTROLAUDIOPROCESSOR_H

#endif //SHOCK_AUDIO_CONTROLAUDIOPROCESSOR_H

namespace shock_audio{

    class ControlAudioProcessor: public AudioProcessor, public Controller{
    public:
        std::string getName();

        [[nodiscard]] std::vector<ControlInfo> getControlInfo() const override;
    protected:
        explicit ControlAudioProcessor(std::string name);
        explicit ControlAudioProcessor(char* name);
    private:
        const std::string _name;
        const std::vector<ControlInfo> _baseControls{
                ControlInfo(VOLUME_CONTROL_TAG, VOLUME_CONTROL_FROM, VOLUME_CONTROL_TO),
                ControlInfo(PAN_CONTROL_TAG, PAN_CONTROL_FROM, PAN_CONTROL_TO)
        };
    };
}