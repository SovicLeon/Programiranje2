//
// Created by Leon on 12. 05. 2022.
//

#ifndef NALOGA0901_DATE_H
#define NALOGA0901_DATE_H


#include <string>

class Date {
private:
    int day, month, year;
public:
    Date(int day, int month, int year);
    std::string toString() const;
    void print() const;
    int getDay() const;
    int getMonth() const;
    int getYear() const;
    friend std::ostream& operator<<(std::ostream &out, const Date &date);
    bool operator==(const Date& other);
    Date& operator++();
    Date operator++(int dummy);
};


#endif //NALOGA0901_DATE_H
