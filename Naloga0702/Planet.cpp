//
// Created by Leon on 22. 04. 2022.
//

#include "Planet.h"

Planet::Planet() : name("Placeholder planet"), circumference(0), orderNumber(0) {
}

Planet::Planet(std::string name, int circumference, int orderNumber) : name(name), circumference(circumference), orderNumber(orderNumber) {
}

std::string Planet::toString() const {
    return "Planet: " + name + ", circumference: " + std::to_string(circumference) + ", in order from star: " + std::to_string(orderNumber);
}
