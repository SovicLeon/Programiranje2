//
// Created by Leon on 6. 05. 2022.
//

#include "Antenna.h"

Antenna::Antenna(double hertz, std::string manufacturer) : hertz(hertz), manufacturer(manufacturer) {
}

std::string Antenna::toString() {
    return "Antenna with " + std::to_string(hertz) + " Hz, manufactured by " + manufacturer + ".\n";
}
