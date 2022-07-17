//
// Created by Leon on 14. 04. 2022.
//

#ifndef NALOGA0601_RECTANGLE_H
#define NALOGA0601_RECTANGLE_H

#include "Shape2D.h"

class Rectangle : public Shape2D {
private:
    int width, height;
public:
    Rectangle(ColorCode color, int width, int height);
    int getSurfaceArea() const override;
    void draw() const override;
    std::string toString() const;
    int getPerimeter() const override;
};


#endif //NALOGA0601_RECTANGLE_H
