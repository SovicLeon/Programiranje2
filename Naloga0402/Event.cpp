//
// Created by Leon on 21. 03. 2022.
//

#include "Event.h"

Event::Event(std::string title, std::string description, Person *presenter, Date date) : title(title), description(description), presenter(presenter), date(date) {
}

void Event::addAttendee(Person *person) {
    attendees.push_back(person);
}

std::string Event::toString() const {
    std::string attendeesString;
    for (int i = 0; i < attendees.size(); ++i) {
        attendeesString += "\n" + attendees[i]->toString();
    }
    return title + " " + description + " " + presenter->toString() + " " + date.toString() + ":" + attendeesString;
}
