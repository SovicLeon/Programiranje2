//
// Created by Leon on 31. 03. 2022.
//

#include "Device.h"
#include "Lock.h"
#include "Light.h"
#include "AirConditioner.h"

Device::Device(std::string id, std::string name) : id(id), name(name) {
}

std::string Device::toString() const {
    return id + " " + name;
}

Device * Device::createRandomDevice() {
    std::random_device r;
    std::default_random_engine e1(r());
    std::uniform_int_distribution<int> uniform_dist1(1, 3);
    int type = uniform_dist1(e1);
    std::uniform_int_distribution<int> uniform_dist2(1, 1000);
    int id = uniform_dist2(e1);
    std::string idStr = std::to_string(id);
    std::uniform_int_distribution<int> uniform_dist3(0, 1);
    bool boolType = uniform_dist3(e1);
    std::uniform_int_distribution<int> uniform_dist4(10, 30);
    int temperature = uniform_dist4(e1);

    if (type==1) {
        Device *returnDevice = new Lock(idStr, "Lock" + idStr, boolType);
        return returnDevice;
    } else if (type==2) {
        Light *returnDevice = new Light(idStr, "Light" + idStr, boolType);
        return returnDevice;
    } else {
        auto *returnDevice = new AirConditioner(idStr, "AC" + idStr, temperature);
        return returnDevice;
    }
}
