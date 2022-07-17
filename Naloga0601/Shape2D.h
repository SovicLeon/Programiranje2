//
// Created by Leon on 14. 04. 2022.
//

#ifndef NALOGA0601_SHAPE2D_H
#define NALOGA0601_SHAPE2D_H

#include <string>
#include "PrintUtility.h"

class Shape2D {
protected:
    ColorCode color;
public:
    Shape2D(ColorCode color);
    virtual ~Shape2D() {}
    std::string colorToString() const;
    virtual int getSurfaceArea() const = 0;
    virtual void draw() const = 0;
    virtual int getPerimeter() const = 0;
};


#endif //NALOGA0601_SHAPE2D_H
