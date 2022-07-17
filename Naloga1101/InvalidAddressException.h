//
// Created by Leon on 27. 05. 2022.
//

#ifndef NALOGA1101_INVALIDADDRESSEXCEPTION_H
#define NALOGA1101_INVALIDADDRESSEXCEPTION_H

#include <exception>
#include <string>

class InvalidAddressException : public std::exception {
private:
    std::string message;
public:
    InvalidAddressException(std::string wrongAddress);
    const char* what() const noexcept override;
};


#endif //NALOGA1101_INVALIDADDRESSEXCEPTION_H
