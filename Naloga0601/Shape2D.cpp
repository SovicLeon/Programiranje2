//
// Created by Leon on 14. 04. 2022.
//

#include "Shape2D.h"

Shape2D::Shape2D(ColorCode color) : color(color) {
}

std::string Shape2D::colorToString() const {
    switch (color) {
        case ColorCode::Red:
            return "red";
        case ColorCode::Green:
            return "green";
        case ColorCode::Blue:
            return "blue";
        case ColorCode::Default:
            return "default";
        default: return "unknown";
    }
}
