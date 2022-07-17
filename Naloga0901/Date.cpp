//
// Created by Leon on 12. 05. 2022.
//

#include <iostream>
#include "Date.h"

Date::Date(int day, int month, int year) : day(day), month(month), year(year) {
}

std::string Date::toString() const {
    return std::to_string(day) + "." + std::to_string(month) + "." + std::to_string(year);
}

void Date::print() const {
    std::cout << toString() << std::endl;
}

int Date::getDay() const {
    return day;
}

int Date::getMonth() const {
    return month;
}

int Date::getYear() const {
    return year;
}

std::ostream &operator<<(std::ostream &out, const Date &date) {
    return out << date.toString();
}

bool Date::operator==(const Date &other) const {
    if (year == other.getYear()) {
        if (month == other.getMonth()) {
            if (day == other.getDay()) {
                return true;
            }
        }
    }
    return false;
}

Date &Date::operator++() {
    int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (day + 1 <= months[month-1]) {
        ++day;
        return *this;
    } else {
        day = 0;
        ++day;
        if (month != 12) {
            ++month;
        } else {
            month = 0;
            ++month;
            ++year;
        }
        return *this;
    }
}

Date Date::operator++(int dummy) {
    int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (day + 1 <= months[month-1]) {
        return Date(day++, month, year);
    } else {
        if (month != 12) {
            day = 0;
            return Date(day++ + months[month-2], month++, year);
        } else {
            day = 0;
            month = 0;
            return Date(day++ + 31, month++ + 12, year++);
        }
    }
}

bool Date::operator<(const Date &other) const {
    if (year < other.getYear()) {
        return true;
    } else if (year == other.getYear()) {
        if (month < other.getMonth()) {
            return true;
        } else if (month == other.getMonth()) {
            if (day < other.getDay()) {
                return true;
            }
        }
    }
    return false;
}
//months[month-1]-1 + day++