//
// Created by Leon on 14. 04. 2022.

#include "Squere.h"

Squere::Squere(ColorCode color, int sideLength) : Shape2D(color), sideLength(sideLength) {

}

int Squere::getSurfaceArea() const {
    return sideLength * sideLength;
}


void Squere::draw() const {
    for (int i = 0; i < sideLength; ++i) {
        for (int j = 0; j < sideLength; ++j) {
            PrintUtility::print(color, "*");
        }
        std::cout << std::endl;
    }
}

std::string Squere::toString() const {
    return std::to_string(sideLength) + " " + colorToString() + " " + std::to_string(getSurfaceArea()) + " " +
           std::to_string(getPerimeter());
}

int Squere::getPerimeter() const {
    return sideLength * 4;
}
