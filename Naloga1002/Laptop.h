//
// Created by Leon on 20. 05. 2022.
//

#ifndef NALOGA1001_LAPTOP_H
#define NALOGA1001_LAPTOP_H


#include <string>

class Laptop {
protected:
    unsigned int screenSize, batterySize, model;
    std::string brand, keyLayout;
    bool isOpened;
public:
    Laptop(unsigned int screenSize, unsigned int batterySize, unsigned int model, std::string brand, std::string keyLayout);
    virtual ~Laptop() {}
    virtual std::string toString() const;
    void openClose();
};


#endif //NALOGA1001_LAPTOP_H
