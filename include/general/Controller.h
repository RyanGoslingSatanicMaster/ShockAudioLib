#pragma once

#include <vector>
#include "ControlInfo.h"

#ifndef SHOCK_AUDIO_CONTROLINFO_H
#define SHOCK_AUDIO_CONTROLINFO_H

#endif //SHOCK_AUDIO_CONTROLINFO_H

namespace shock_audio{

    class Controller{
    public:
        [[nodiscard]] virtual std::vector<ControlInfo> getControlInfo() const = 0;
    protected:
        [[nodiscard]] virtual std::pair<std::string, Controller> getInnerControlInfo() const = 0;
    };
}
