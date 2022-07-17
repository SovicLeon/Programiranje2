//
// Created by Leon on 24. 03. 2022.
//

#ifndef NALOGA0402_CONFERENCE_H
#define NALOGA0402_CONFERENCE_H


#include "Event.h"

class Conference {
private:
    std::string title;
    Date startDate, endDate;
    std::vector<Event> events;
public:
    Conference(std::string title, Date startDate, Date endDate);
    void addEvent(const Event& event);
    std::string toString() const;
    std::vector<Event> getEvents() const;
};


#endif //NALOGA0402_CONFERENCE_H
