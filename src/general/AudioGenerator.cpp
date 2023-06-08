#include <string>
#include "../../include/general/AudioGenerator.h"

namespace shock_audio{

    AudioGenerator::AudioGenerator(std::string name): ControlAudioProcessor(std::move(name)) {}

}
