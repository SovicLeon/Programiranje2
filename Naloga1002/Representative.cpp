//
// Created by Leon on 20. 05. 2022.
//

#include "Representative.h"

Representative::Representative(std::string firstName, std::string lastName, unsigned int termFrom,
                               unsigned int termTo) : firstName(firstName), lastName(lastName), termFrom(termFrom), termTo(termTo) {

}

std::string Representative::toString() const {
    return "Representative " + firstName + " " + lastName + ", with the term from " + std::to_string(termFrom) + " to " + std::to_string(termTo) + ".";
}
