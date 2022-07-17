//
// Created by Leon on 6. 05. 2022.
//

#ifndef NALOGA0801_ANTENNA_H
#define NALOGA0801_ANTENNA_H


#include <string>

class Antenna {
private:
    double hertz;
    std::string manufacturer;
public:
    Antenna(double hertz, std::string manufacturer);
    std::string toString();
};


#endif //NALOGA0801_ANTENNA_H
