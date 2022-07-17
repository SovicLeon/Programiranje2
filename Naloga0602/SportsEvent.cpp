//
// Created by Leon on 15. 04. 2022.
//

#include <iostream>
#include "SportsEvent.h"

SportsEvent::SportsEvent(std::string name) : name(name) {

}

void SportsEvent::addMatch(TeamSport *sport) {
    sportsMatches.push_back(sport);
}

void SportsEvent::print() const {
    std::cout << "\n" + name + ":\n";
    for (int i = 0; i < sportsMatches.size(); ++i) {
        std::cout << i+1 << " " << sportsMatches[i]->toString() << std::endl;
    }
}

SportsEvent::~SportsEvent() {
    for (TeamSport* i : sportsMatches) {
        delete i;
    }
}

TeamSport *SportsEvent::getMatch(unsigned int id) const {
    return sportsMatches[id];
}
