//
// Created by Leon on 14. 04. 2022.
//

#ifndef NALOGA0601_SQUERE_H
#define NALOGA0601_SQUERE_H


#include "Shape2D.h"

class Squere : public Shape2D {
private:
    int sideLength;
public:
    Squere(ColorCode color, int sideLength);
    int getSurfaceArea() const override;
    void draw() const override;
    std::string toString() const;
    int getPerimeter() const override;
};


#endif //NALOGA0601_SQUERE_H
