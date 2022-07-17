//
// Created by Leon on 24. 03. 2022.
//

#include "Conference.h"

Conference::Conference(std::string title, Date startDate, Date endDate) : title(title), startDate(startDate), endDate(endDate) {
}

void Conference::addEvent(const Event &event) {
    events.push_back(event);
}

std::string Conference::toString() const {
    std::string eventsString;
    for (int i = 0; i < events.size(); ++i) {
        eventsString += "\n" + events[i].toString();
    }
    return title + " " + startDate.toString() + " " + endDate.toString() + ":" + eventsString;
}

std::vector<Event> Conference::getEvents() const {
    return events;
}
