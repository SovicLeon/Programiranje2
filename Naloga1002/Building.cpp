//
// Created by Leon on 20. 05. 2022.
//

#include "Building.h"

Building::Building(std::string address, double height,
                   double width, double length, unsigned int floors, unsigned int undergroundFloors) : address(address), height(height), width(width), length(length), floors(floors), undergroundFloors(undergroundFloors) {

}

std::string Building::toString() const {
    return "Building at: " + address + ", dimensions(W x H x L): " + std::to_string(width) + ", " + std::to_string(height) + ", " + std::to_string(length) + ", with " + std::to_string(floors) + " floors and " + std::to_string(undergroundFloors) + " underground floors.";
}
