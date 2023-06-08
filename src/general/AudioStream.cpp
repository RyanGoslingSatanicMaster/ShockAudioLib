#include <utility>

#include "../../include/general/AudioStream.h"

namespace shock_audio{

    AudioStream::AudioStream(std::shared_ptr<ControlAudioProcessor> controlAudioProc, std::string name):
    _innerControlAudioProc(std::move(controlAudioProc)),
    ControlAudioProcessor(std::move(name)) {}

    float AudioStream::processAudio(int position, shock_audio::Config& config) const{
        return _innerControlAudioProc->processAudio(position, config);
    }

    void AudioStream::setInputAudioProcessor(std::shared_ptr<ControlAudioProcessor> controlAudioProc) {
        _innerControlAudioProc = std::move(controlAudioProc);
    }
}