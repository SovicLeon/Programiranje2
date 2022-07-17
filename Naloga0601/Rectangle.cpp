//
// Created by Leon on 14. 04. 2022.
//

#include "Rectangle.h"

Rectangle::Rectangle(ColorCode color, int width, int height) : Shape2D(color), width(width), height(height) {

}

int Rectangle::getSurfaceArea() const {
    return width * height;
}

void Rectangle::draw() const {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            PrintUtility::print(color, "*");
        }
        std::cout << std::endl;
    }
}

std::string Rectangle::toString() const {
    return std::to_string(width) + " " + std::to_string(height) + " " + colorToString() + " " +
           std::to_string(getSurfaceArea()) + " " + std::to_string(getPerimeter());
}

int Rectangle::getPerimeter() const {
    return width * 2 + height * 2;
}

