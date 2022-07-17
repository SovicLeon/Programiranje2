//
// Created by Leon on 20. 05. 2022.
//

#ifndef NALOGA1001_BUILDING_H
#define NALOGA1001_BUILDING_H


#include <string>

class Building {
protected:
    std::string address;
    unsigned int floors, undergroundFloors;
    double height, width, length;
public:
    Building(std::string address, double height, double width, double length, unsigned int floors, unsigned int undergroundFloors);
    virtual ~Building() {};
    virtual std::string toString() const;
};


#endif //NALOGA1001_BUILDING_H
