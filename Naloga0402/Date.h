//
// Created by Leon on 21. 03. 2022.
//

#ifndef NALOGA0401_DATE_H
#define NALOGA0401_DATE_H

#include <string>

class Date {
private:
    unsigned int day, month, year;
public:
    Date(unsigned int day, unsigned int month, unsigned int year);
    std::string toString() const;
};


#endif //NALOGA0401_DATE_H
