//
// Created by Leon on 26. 05. 2022.
//

#include <iostream>
#include "Address.h"

Address::Address(std::string street, std::string post, std::string country) : street(street), post(post), country(country) {
}

std::string Address::toString() const {
    return street + "," + post + "," + country;
}

std::string Address::checkValidStreet(std::string street) {
    bool hasNum = false, hasText = false;
    int i;
    for (i = street.size()-1; i >= 0; --i) {
        if (street[i] == ' ') {
            if (!hasNum) {
                throw InvalidAddressException(street);
            }
            break;
        }
        if (street[i] < 48 || street[i] > 57) {
            throw InvalidAddressException(street);
        } else {
            hasNum = true;
        }
    }
    for (int j = i; j >= 0; --j) {
        if (!((street[j] > 64 && street[j] < 91) || (street[j] > 96 && street[j] < 123) || street[j] == ' ')) {
            throw InvalidAddressException(street);
        } else if ((street[j] > 64 && street[j] < 91) || (street[j] > 96 && street[j] < 123)) {
            hasText = true;
        }
    }
    if (!hasText) {
        throw InvalidAddressException(street);
    }

    return street;
}
