//
// Created by Leon on 14. 04. 2022.
//

#ifndef NALOGA0601_CANVAS_H
#define NALOGA0601_CANVAS_H


#include <vector>
#include "Shape2D.h"

class Canvas {
private:
    std::vector<Shape2D*> shapes;
public:
    void addShape(Shape2D* shape);
    void print() const;
};


#endif //NALOGA0601_CANVAS_H
