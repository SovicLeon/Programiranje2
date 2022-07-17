//
// Created by Leon on 31. 03. 2022.
//

#include "Lock.h"

Lock::Lock(std::string id, std::string name, bool locked) : Device(id,name), locked(locked) {
}

std::string Lock::toString() const {
    return Device::toString() + " " + std::to_string(locked);
}
