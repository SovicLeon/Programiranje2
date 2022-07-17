//
// Created by Leon on 26. 05. 2022.
//

#ifndef NALOGA1101_ADDRESS_H
#define NALOGA1101_ADDRESS_H


#include <string>
#include "InvalidAddressException.h"

class Address {
private:
    std::string street, post, country;
public:
    Address(std::string street, std::string post, std::string country);
    std::string toString() const;
    static std::string checkValidStreet(std::string street);
};


#endif //NALOGA1101_ADDRESS_H
