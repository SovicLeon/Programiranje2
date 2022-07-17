//
// Created by Leon on 14. 04. 2022.
//

#include <iostream>
#include "Canvas.h"

void Canvas::addShape(Shape2D* shape) {
    shapes.push_back(shape);
}

void Canvas::print() const {
    /*std::string shapesString;
    for (int i = 0; i < shapes.size(); ++i) {
        shapesString += "\n" + shapes[i]->toString();
    }
    std::cout << shapesString;*/
    for (int i = 0; i < shapes.size(); ++i) {
        shapes[i]->draw();
        std::cout << "\n";
    }
}
