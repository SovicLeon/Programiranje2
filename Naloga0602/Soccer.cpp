//
// Created by Leon on 15. 04. 2022.
//

#include <iostream>
#include "Soccer.h"

Soccer::Soccer(std::string homeTeam, std::string awayTeam) : TeamSport(homeTeam, awayTeam) {
    finished = false;
}

void Soccer::score(int team, int type) {
    if (finished) {
        std::cout << "Match has ended!\n";
        return;
    }
    if (team == 1) {
        if (type == 1) {
            scoreHomeTeam++;
            std::cout << homeTeam << " have scored a regular goal!\n";
        } else if (type == 2) {
            scoreHomeTeam++;
            std::cout << homeTeam << " have scored from a free kick!\n";
        } else if (type == 3) {
            scoreHomeTeam++;
            std::cout << homeTeam << " have scored from a penalty kick!\n";
        } else {
            std::cout << "\nWrong team selected for scoring!\n";
        }
    } else if (team == 2) {
        if (type == 1) {
            scoreAwayTeam++;
            std::cout << awayTeam << " have scored a regular goal!\n";
        } else if (type == 2) {
            scoreAwayTeam++;
            std::cout << awayTeam << " have scored from a free kick!\n";
        } else if (type == 3) {
            scoreAwayTeam++;
            std::cout << awayTeam << " have scored from a penalty kick!\n";
        } else {
            std::cout << "\nWrong team selected for scoring!\n";
        }
    } else {
        std::cout << "\nWrong team selected for scoring!\n";
    }
}

std::string Soccer::toString() const {
    if (finished) {
        return "The soccer match between " + homeTeam + " and " + awayTeam + " has ended in " + std::to_string(scoreHomeTeam) + ":" + std::to_string(scoreAwayTeam);
    } else {
        return "The soccer match between " + homeTeam + " and " + awayTeam + " has not ended yet! The current score is " + std::to_string(scoreHomeTeam) + ":" + std::to_string(scoreAwayTeam);
    }
}

void Soccer::scoreOption() const {
    std::cout << "1 - regular goal\n2 - free kick\n3 - penalty kick\n";
}

void Soccer::endMatch() {
    std::cout << "The soccer match between " << homeTeam << " and " << awayTeam << " has ended in " << std::to_string(scoreHomeTeam) << ":" << std::to_string(scoreAwayTeam);
    finished = true;
}
