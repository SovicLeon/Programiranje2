#include <iostream>
#include "PrintUtility.h"
#include "Rectangle.h"
#include "Squere.h"
#include "Canvas.h"

using namespace std::string_literals;

int main() {
    // system(("chcp "s + std::to_string(65001)).c_str());

    Canvas c;
    Rectangle* r1 = new Rectangle(ColorCode(ColorCode::Green), 5, 2);
    Rectangle* r2 = new Rectangle(ColorCode(ColorCode::Blue), 10, 5);
    Rectangle* r3 = new Rectangle(ColorCode(ColorCode::Red), 2, 3);
    Squere* s1 = new Squere(ColorCode(ColorCode::Default), 4);
    Squere* s2 = new Squere(ColorCode(ColorCode::Red), 2);
    c.addShape(r1);
    c.addShape(r2);
    c.addShape(r3);
    c.addShape(s1);
    c.addShape(s2);
    c.print();

    std::cout << "Rectangle 1: " << r1->toString() << std::endl;
    std::cout << "Rectangle 2: " << r2->toString() << std::endl;
    std::cout << "Squere 2: " << s2->toString() << std::endl;

    delete r1;
    delete r2;
    delete r3;
    delete s1;
    delete s2;


    return 0;
}
