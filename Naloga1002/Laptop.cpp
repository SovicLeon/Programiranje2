//
// Created by Leon on 20. 05. 2022.
//

#include "Laptop.h"

Laptop::Laptop(unsigned int screenSize, unsigned int batterySize, unsigned int model, std::string brand, std::string keyLayout) : screenSize(screenSize), batterySize(batterySize), model(model), brand(brand), keyLayout(keyLayout) {
    isOpened = false;
}

std::string Laptop::toString() const {
    return "Screen size: " + std::to_string(screenSize) + "cm, battery size " + std::to_string(batterySize) + "mAh, model: " + std::to_string(model) + ", brand: " + brand + ", keyboard layout: " + keyLayout + ", is opened: " + std::to_string(isOpened);
}

void Laptop::openClose() {
    if (isOpened) {
        isOpened = false;
    } else {
        isOpened = true;
    }
}
