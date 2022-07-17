//
// Created by Leon on 13. 03. 2022.
//

#include "Time.h"


Time::Time(unsigned int hour, unsigned int minute, unsigned int second) {
    if (isTimeValid(hour, minute, second)) {
        this->hour = hour;
        this->minute = minute;
        this->second = second;
    } else {
        this->hour = this->minute = this->second = 0;
    }
}

std::string Time::addZeroToHour(unsigned int timeValue) {
    if (timeValue > 9) {
        return std::to_string(timeValue);
    } else {
        return "0" + std::to_string(timeValue);
    }
}

std::string Time::toString() const {
    std::string hh, mm, ss;

    hh = addZeroToHour(hour);
    mm = addZeroToHour(minute);
    ss = addZeroToHour(second);

    return hh + ":" + mm + ":" + ss;
}

std::string Time::toString12HourFormat() const {
    unsigned int hour12HourFormat;
    std::string AMPM;
    std::string hh, mm, ss;

    if (hour > noonHour) {
        AMPM = " PM";
        hour12HourFormat = hour - noonHour;
    } else if (hour == 12) {
        AMPM = " PM";
        hour12HourFormat = noonHour;
    } else if (hour == 0) {
        AMPM = " AM";
        hour12HourFormat = noonHour;
    } else {
        AMPM = " AM";
        hour12HourFormat = hour;
    }

    hh = addZeroToHour(hour12HourFormat);
    mm = addZeroToHour(minute);
    ss = addZeroToHour(second);

    return hh + ":" + mm + ":" + ss + AMPM;
}

bool Time::isTimeValid(unsigned int hour, unsigned int minute, unsigned int second) {
    if (hour >= maxHour || minute > 59 || second > 59) {
        return false;
    }
    return true;
}

Time Time::parse(const std::string &time) {
    unsigned int hour, minute, second;
    std::string hh, mm, ss;

    hh = time.substr(0, 2);
    mm = time.substr(3, 2);
    ss = time.substr(6, 2);

    std::stringstream sstringHour, sstringMinute, sstringSecond;

    sstringHour << hh;
    sstringHour >> hour;

    sstringMinute << mm;
    sstringMinute >> minute;

    sstringSecond << ss;
    sstringSecond >> second;

    return {hour, minute, second};
}

bool Time::isLater(const Time *time1, const Time *time2) {
    if (time1->hour < time2->hour) {
        return true;
    } else if (time1->hour > time2->hour) {
        return false;
    } else {
        if (time1->minute < time2->minute) {
            return true;
        } else if (time1->minute > time2->minute) {
            return false;
        } else {
            if (time1->second < time2->second) {
                return true;
            } else if (time1->second > time2->second) {
                return false;
            } else {
                return false;
            }
        }
    }
}

unsigned int Time::getHour() const {
    return hour;
}

unsigned int Time::getMinute() const {
    return minute;
}

unsigned int Time::getSecond() const {
    return second;
}
