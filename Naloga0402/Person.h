//
// Created by Leon on 21. 03. 2022.
//

#ifndef NALOGA0402_PERSON_H
#define NALOGA0402_PERSON_H


#include <string>

class Person {
private:
    std::string firstName, lastName;
public:
    Person(std::string firstName, std::string lastName);
    std::string toString() const;
};


#endif //NALOGA0402_PERSON_H
