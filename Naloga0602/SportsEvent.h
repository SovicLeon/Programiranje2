//
// Created by Leon on 15. 04. 2022.
//

#ifndef NALOGA0602_SPORTSEVENT_H
#define NALOGA0602_SPORTSEVENT_H


#include <string>
#include <vector>
#include "TeamSport.h"

class SportsEvent {
private:
    std::string name;
    std::vector<TeamSport*> sportsMatches;
public:
    SportsEvent(std::string name);
    ~SportsEvent();
    void addMatch(TeamSport* sport);
    void print() const;
    TeamSport* getMatch(unsigned int id) const;
};


#endif //NALOGA0602_SPORTSEVENT_H
