//
// Created by Leon on 20. 05. 2022.
//

#include "TwoInOne.h"

TwoInOne::TwoInOne(unsigned int screenSize, unsigned int batterySize, unsigned int model, std::string brand,
                   std::string keyLayout, bool multitouch) : Laptop(screenSize,batterySize,model,brand,keyLayout),
                                                             Tablet(screenSize,batterySize,model,brand,multitouch) {

}

std::string TwoInOne::toString() const {
    std::string multitouchStr;
    if (Tablet::getMultitouch()) {
        multitouchStr = "has multitouch.";
    } else {
        multitouchStr = "doesn't have multitouch.";
    }
    return Laptop::toString() + ", multitouch: " + multitouchStr;
}
