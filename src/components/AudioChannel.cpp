

#include <utility>

#include "../../include/components/AudioChannel.h"

namespace shock_audio{

    AudioChannel::AudioChannel(std::shared_ptr<AudioChannel> audioChannel, std::string name):
            AudioStream(std::move(audioChannel), std::move(name)) {}

    AudioChannel::AudioChannel(std::shared_ptr<Effect> effect, std::string name):
            AudioStream(std::move(effect), std::move(name)) {}

    AudioChannel::AudioChannel(std::shared_ptr<AudioTrack> audioTrack, std::string name):
            AudioStream(std::move(audioTrack), std::move(name)) {}

    float AudioStream::processAudio(int position, shock_audio::Config& config) const{
        return _innerControlAudioProc->processAudio(position, config);
    }

    void AudioStream::setInputAudioProcessor(std::shared_ptr<ControlAudioProcessor> controlAudioProc) {
        _innerControlAudioProc = std::move(controlAudioProc);
    }
}