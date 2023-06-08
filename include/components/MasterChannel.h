#pragma once

#ifndef SHOCK_AUDIO_MASTERCHANNEL_H
#define SHOCK_AUDIO_MASTERCHANNEL_H

#include "AudioChannel.h"
#include "../general/Mixer.h"

namespace shock_audio{

    class MasterChannel: public AudioChannel{
    public:
        MasterChannel(std::shared_ptr<Mixer> mixer, std::string name);
    };

}

#endif //SHOCK_AUDIO_MASTERCHANNEL_H
