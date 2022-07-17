//
// Created by Leon on 11. 03. 2022.
//

#ifndef NALOGA0202_WATERINTAKE_H
#define NALOGA0202_WATERINTAKE_H

#include <iostream>
#include <vector>
#include <random>

class WaterIntake {
private:
    unsigned int day, month, year;
    float quantity;
public:
    WaterIntake(unsigned int day, unsigned int month, unsigned int year, float quantity);
    unsigned int getDay();
    unsigned int getMonth();
    unsigned int getYear();
    float getQuantity();
    void setQuantity(float quantity);
    std::string toString();
    void addQuantity(float quantity);
};


#endif //NALOGA0202_WATERINTAKE_H
