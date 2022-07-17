//
// Created by Leon on 13. 03. 2022.
//

#ifndef NALOGA0301_TIME_H
#define NALOGA0301_TIME_H


#include <iostream>
#include <string>
#include <sstream>

class Time {
private:
    unsigned int hour, minute, second;
    static const unsigned int noonHour = 12;
    static const unsigned int maxHour = 24;
public:
    Time(unsigned int hour, unsigned int minute, unsigned int second);
    static std::string addZeroToHour(unsigned int timeValue);
    std::string toString() const;
    std::string toString12HourFormat() const;
    static bool isTimeValid(unsigned int hour, unsigned int minute, unsigned int second);
    static Time parse(const std::string& time);
    static bool isLater(const Time* time1, const Time* time2);
    unsigned int getHour() const;
    unsigned int getMinute() const;
    unsigned int getSecond() const;
};


#endif //NALOGA0301_TIME_H