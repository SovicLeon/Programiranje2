//
// Created by Leon on 27. 05. 2022.
//

#include "InvalidAddressException.h"

InvalidAddressException::InvalidAddressException(std::string wrongAddress) : message("Wrong address format: \"" + wrongAddress + "\"") {
}

const char *InvalidAddressException::what() const noexcept {
    const char * c = message.c_str();
    return c;
}
