//
// Created by Leon on 21. 03. 2022.
//

#include "Person.h"

Person::Person(std::string firstName, std::string lastName) : firstName(firstName), lastName(lastName) {
}

std::string Person::toString() const {
    return firstName + " " + lastName;
}
