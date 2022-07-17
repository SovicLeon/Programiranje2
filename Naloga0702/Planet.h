//
// Created by Leon on 22. 04. 2022.
//

#ifndef NALOGA0701_PLANET_H
#define NALOGA0701_PLANET_H


#include <string>

class Planet {
private:
    std::string name;
    int circumference, orderNumber;
public:
    Planet();
    Planet(std::string name, int circumference, int orderNumber);
    std::string toString() const;
};


#endif //NALOGA0701_PLANET_H
