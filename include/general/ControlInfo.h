#pragma once

#include <string>

#ifndef SHOCK_AUDIO_CONTROL_H
#define SHOCK_AUDIO_CONTROL_H

#endif //SHOCK_AUDIO_CONTROL_H
namespace shock_audio{

    // VOLUME CONTROLS
    static constexpr auto VOLUME_CONTROL_TAG = "VOLUME_CONTROL_TAG";
    static constexpr auto VOLUME_CONTROL_FROM = -100.0f;
    static constexpr auto VOLUME_CONTROL_TO = 0.0f;

    // PAN COMMON CONTROLS
    static const auto PAN_CONTROL_TAG = "PAN_CONTROL_TAG";
    static const auto PAN_CONTROL_FROM = 0.0f;
    static const auto PAN_CONTROL_TO = 1.0f;

    class ControlInfo{
    private:
        const std::string _name;
        const float _from;
        const float _to;
    public:
        ControlInfo(std::string name, float from, float to);
        [[nodiscard]] std::string getName() const;
        [[nodiscard]] float getFrom() const;
        [[nodiscard]] float getTo() const;
        [[nodiscard]] std::pair<float, float> getRange() const;
    };
}