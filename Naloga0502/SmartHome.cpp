//
// Created by Leon on 31. 03. 2022.
//

#include "SmartHome.h"

SmartHome::SmartHome(std::string name) : name(name) {
}

SmartHome::~SmartHome() {
    for (int i = 0; i < devices.size(); ++i) {
        delete devices[i];
    }
}

void SmartHome::addDevice(Device *device) {
    devices.push_back(device);
}

std::string SmartHome::toString() const {
    std::string devicesString;
    for (int i = 0; i < devices.size(); ++i) {
        devicesString += "\n" + devices[i]->toString();
    }
    return name + ": " + devicesString;
}
