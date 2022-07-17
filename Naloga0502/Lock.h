//
// Created by Leon on 31. 03. 2022.
//

#ifndef NALOGA0502_LOCK_H
#define NALOGA0502_LOCK_H


#include "Device.h"

class Lock : public Device {
private:
    bool locked;
public:
    Lock(std::string id, std::string name, bool locked);
    std::string toString() const override;
};


#endif //NALOGA0502_LOCK_H
