//
// Created by Leon on 20. 05. 2022.
//

#include "Tablet.h"

Tablet::Tablet(unsigned int screenSize, unsigned int batterySize, unsigned int model, std::string brand, bool multitouch) : screenSize(screenSize), batterySize(batterySize), model(model), brand(brand), multitouch(multitouch) {
    hasPen = true;
}

bool Tablet::getMultitouch() const {
    return multitouch;
}

std::string Tablet::toString() const {
    return std::to_string(screenSize) + " " + std::to_string(batterySize) + " " + std::to_string(model) + " " + brand + " " + std::to_string(hasPen);
}

void Tablet::removeAddPen() {
    if (hasPen) {
        hasPen = false;
    } else {
        hasPen = true;
    }
}

