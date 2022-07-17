//
// Created by Leon on 21. 03. 2022.
//

#include "Artist.h"

Artist::Artist(std::string name, std::string biography, Date dateOfBirth) : name(name), biography(biography), dateOfBirth(dateOfBirth) {
}

std::string Artist::toString() const {
    return name + " " + biography + " " + dateOfBirth.toString();
}

Date Artist::getDateOfBirth() const {
    return dateOfBirth;
}
