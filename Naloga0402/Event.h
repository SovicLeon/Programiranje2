//
// Created by Leon on 21. 03. 2022.
//

#ifndef NALOGA0402_EVENT_H
#define NALOGA0402_EVENT_H


#include <string>
#include <vector>
#include "Person.h"
#include "Date.h"

class Event {
private:
    std::string title, description;
    Person* presenter;
    Date date;
    std::vector<Person*> attendees;
public:
    Event(std::string title, std::string description, Person* presenter, Date date);
    void addAttendee(Person* person);
    std::string toString() const;
};


#endif //NALOGA0402_EVENT_H
