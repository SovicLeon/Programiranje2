//
// Created by Leon on 26. 05. 2022.
//

#include "Date.h"

Date::Date(int day, int month, int year) : day(day), month(month), year(year) {
}

std::string Date::toString() const {
    std::string dayString, monthString, yearString;
    dayString = std::to_string(day);
    monthString = std::to_string(month);
    yearString = std::to_string(year);
    return dayString + "." + monthString + "." + yearString;
}

int Date::getYear() const {
    return year;
}

int Date::getMonth() const {
    return month;
}

int Date::getDay() const {
    return day;
}

Date Date::GetDateFromString(std::string dateString) {
    std::string newDate[3];
    int dotCount = 0, state = 0;
    if (dateString.size() > 10 || dateString.size() < 5) {
        throw UnparseableDateException(dateString);
    }
    for (int i = 0; i < dateString.size(); ++i) {
        if (dateString[i] == '.' && dotCount < 2) {
            dotCount++;
            state++;
            if (newDate[state-1].empty()) {
                throw UnparseableDateException(dateString);
            }
        } else if (dateString[i] > 47 && dateString[i] < 58) {
            newDate[state] += dateString[i];
        } else {
            throw UnparseableDateException(dateString);
        }
    }
    if (newDate[0].size() > 2 || newDate[1].size() > 2 || newDate[2].size() > 4) {
        throw UnparseableDateException(dateString);
    }
    if (!((stoi(newDate[0]) > 0 && stoi(newDate[0]) < 32) || (stoi(newDate[1]) > 0 && stoi(newDate[1]) < 13) || (stoi(newDate[2]) > 1950 && stoi(newDate[2]) < 2004))) {
        throw UnparseableDateException(dateString);
    }
    return Date(stoi(newDate[0]), stoi(newDate[1]), stoi(newDate[2]));
}
