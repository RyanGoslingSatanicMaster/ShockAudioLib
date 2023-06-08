#include <utility>

#include "../../include/general/Mixer.h"

namespace shock_audio{

    Mixer::Mixer(std::vector<std::shared_ptr<ControlAudioProcessor>> controlAudioProc, std::string name):
            _innerControlAudioProcList(std::move(controlAudioProc)),
            ControlAudioProcessor(std::move(name)) {}

    float Mixer::processAudio(int position, shock_audio::Config& config) const {
        //return _innerControlAudioProcList->processAudio(position, config);
        return 1.0f;
    }

    bool Mixer::addInputAudioProcessor(std::shared_ptr<ControlAudioProcessor> controlAudioProc){
        _innerControlAudioProcList.push_back(std::move(controlAudioProc));
        return true;
    }

    bool Mixer::removeInputAudioProcessorByName(const std::string& name){
        _innerControlAudioProcList.erase(
                std::remove_if(
                _innerControlAudioProcList.begin(),
                _innerControlAudioProcList.end(),
                [&name] (const std::shared_ptr<ControlAudioProcessor>& controlAudioProcessor) {
                    return name == controlAudioProcessor->getName();
                }),
           _innerControlAudioProcList.end());
        return true;
    }

    void Mixer::setAudioProcessorList(std::vector<std::shared_ptr<ControlAudioProcessor>> controlAudioProcList){
        _innerControlAudioProcList = std::move(controlAudioProcList);
    }
}