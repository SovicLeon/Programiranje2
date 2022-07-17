//
// Created by Leon on 31. 03. 2022.
//

#ifndef NALOGA0502_DEVICE_H
#define NALOGA0502_DEVICE_H


#include <string>
#include <random>

class Device {
protected:
    std::string id, name;
public:
    Device(std::string id, std::string name);
    virtual ~Device() {};
    virtual std::string toString() const;
    static Device* createRandomDevice();
};


#endif //NALOGA0502_DEVICE_H
