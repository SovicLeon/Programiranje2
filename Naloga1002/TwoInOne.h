//
// Created by Leon on 20. 05. 2022.
//

#ifndef NALOGA1001_TWOINONE_H
#define NALOGA1001_TWOINONE_H


#include "Laptop.h"
#include "Tablet.h"

class TwoInOne : public Laptop, public Tablet{
public:
    TwoInOne(unsigned int screenSize, unsigned int batterySize, unsigned int model, std::string brand, std::string keyLayout, bool multitouch);
    virtual ~TwoInOne(){}
    std::string toString() const override;
};


#endif //NALOGA1001_TWOINONE_H
