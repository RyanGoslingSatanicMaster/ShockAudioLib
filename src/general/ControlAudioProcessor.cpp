
#include <utility>

#include "../../include/general/ControlAudioProcessor.h"

namespace shock_audio{
    ControlAudioProcessor::ControlAudioProcessor(std::string name): _name(std::move(name)) {}

    ControlAudioProcessor::ControlAudioProcessor(char* name): _name(name) {}

    std::vector<ControlInfo> ControlAudioProcessor::getControlInfo() const {
        return _baseControls;
    }

    std::string ControlAudioProcessor::getName() { return _name; }
}
