//
// Created by Leon on 31. 03. 2022.
//

#include "Light.h"

Light::Light(std::string id, std::string name, bool turnedOn) : Device(id,name), turnedOn(turnedOn) {
}

std::string Light::toString() const {
    return Device::toString() + " " + std::to_string(turnedOn);
}
