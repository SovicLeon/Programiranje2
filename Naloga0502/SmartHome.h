//
// Created by Leon on 31. 03. 2022.
//

#ifndef NALOGA0502_SMARTHOME_H
#define NALOGA0502_SMARTHOME_H


#include <vector>
#include "Device.h"

class SmartHome {
private:
    std::string name;
    std::vector<Device*> devices;
public:
    SmartHome(std::string name);
    ~SmartHome();
    void addDevice(Device* device);
    std::string toString() const;
};


#endif //NALOGA0502_SMARTHOME_H
