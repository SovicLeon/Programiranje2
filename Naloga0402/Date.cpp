//
// Created by Leon on 21. 03. 2022.
//

#include "Date.h"

Date::Date(unsigned int day, unsigned int month, unsigned int year) : day(day), month(month), year(year) {
}

std::string Date::toString() const {
    std::string dayString, monthString, yearString;
    dayString = std::to_string(day);
    monthString = std::to_string(month);
    yearString = std::to_string(year);
    return dayString + "." + monthString + "." + yearString;
}
