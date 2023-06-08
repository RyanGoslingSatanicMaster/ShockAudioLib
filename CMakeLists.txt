cmake_minimum_required(VERSION 3.25)
project(shock_audio)

set(CMAKE_CXX_STANDARD 20)

add_library(shock_audio SHARED include/general/AudioProcessor.h include/general/AudioConfig.h include/general/ControlInfo.h include/general/Controller.h include/general/ControlAudioProcessor.h include/general/AudioStream.h src/general/AudioStream.cpp src/general/ControlAudioProcessor.cpp src/general/ControlInfo.cpp include/general/Mixer.h src/general/Mixer.cpp include/general/AudioGenerator.h src/general/AudioGenerator.cpp include/components/AudioChannel.h include/components/Effect.h include/components/MasterChannel.h include/components/AudioTrack.h src/components/AudioChannel.cpp)
