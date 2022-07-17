//
// Created by Leon on 11. 03. 2022.
//

#include "WaterIntake.h"

WaterIntake::WaterIntake(unsigned int day, unsigned int month, unsigned int year, float quantity) : day(day), month(month), year(year), quantity(quantity) {
}

unsigned int WaterIntake::getDay() {
    return day;
}

unsigned int WaterIntake::getMonth() {
    return month;
}

unsigned int WaterIntake::getYear() {
    return year;
}

float WaterIntake::getQuantity() {
    return quantity;
}

void WaterIntake::setQuantity(float quantity) {
    this->quantity = quantity;
}

std::string WaterIntake::toString() {
    std::string dayString = std::to_string(day);
    std::string monthString = std::to_string(month);
    std::string yearString = std::to_string(year);
    std::string quantityString = std::to_string(quantity);
    return dayString + " " + monthString + " " + yearString + " " + quantityString;
}

void WaterIntake::addQuantity(float quantity) {
    this->quantity += quantity;
}