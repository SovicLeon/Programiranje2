//
// Created by Leon on 20. 05. 2022.
//

#ifndef NALOGA1001_TABLET_H
#define NALOGA1001_TABLET_H

#include <string>

class Tablet {
protected:
    unsigned int screenSize, batterySize, model;
    std::string brand;
    bool hasPen, multitouch;
public:
    Tablet(unsigned int screenSize, unsigned int batterySize, unsigned int model, std::string brand, bool multitouch);
    virtual ~Tablet() {}
    bool getMultitouch() const;
    virtual std::string toString() const;
    void removeAddPen();
};


#endif //NALOGA1001_TABLET_H
