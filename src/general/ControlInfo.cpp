#include <cstdint>
#include <utility>
#include "../../include/general/ControlInfo.h"

namespace shock_audio{

    ControlInfo::ControlInfo(std::string name, float from, float to): _name(std::move(name)), _from(from), _to(to) {}

    std::string ControlInfo::getName() const{
        return _name;
    }
    std::pair<float, float> ControlInfo::getRange() const {
        return std::pair{_from, _to};
    }

    float ControlInfo::getFrom() const {
        return _from;
    }

    float ControlInfo::getTo() const {
        return _to;
    }
}