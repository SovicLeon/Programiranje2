//
// Created by Leon on 31. 03. 2022.
//

#include "AirConditioner.h"

AirConditioner::AirConditioner(std::string id, std::string name, int targetTemperature) : Device(id,name), targetTemperature(targetTemperature) {
}

std::string AirConditioner::toString() const {
    return Device::toString() + " " + std::to_string(targetTemperature);
}
