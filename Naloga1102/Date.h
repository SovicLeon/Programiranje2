//
// Created by Leon on 26. 05. 2022.
//

#ifndef NALOGA1101_DATE_H
#define NALOGA1101_DATE_H

#include "UnparseableDateException.h"
#include <string>

class Date {
private:
    int day, month, year;
public:
    Date(int day, int month, int year);
    std::string toString() const;
    int getYear() const;
    int getMonth() const;
    int getDay() const;
    static Date GetDateFromString(std::string dateString);
};


#endif //NALOGA1101_DATE_H
