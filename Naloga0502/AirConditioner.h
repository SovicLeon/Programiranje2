//
// Created by Leon on 31. 03. 2022.
//

#ifndef NALOGA0502_AIRCONDITIONER_H
#define NALOGA0502_AIRCONDITIONER_H


#include "Device.h"

class AirConditioner : public Device {
private:
    int targetTemperature;
public:
    AirConditioner(std::string id, std::string name, int targetTemperature);
    std::string toString() const override;
};


#endif //NALOGA0502_AIRCONDITIONER_H
