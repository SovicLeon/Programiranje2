//
// Created by Leon on 15. 04. 2022.
//

#include <iostream>
#include "Basketball.h"

Basketball::Basketball(std::string homeTeam, std::string awayTeam) : TeamSport(homeTeam,awayTeam) {
    finished = false;
}

void Basketball::score(int team, int type) {
    if (finished) {
        std::cout << "Match has ended!\n";
        return;
    }
    if (team == 1) {
        if (type == 1) {
            scoreHomeTeam++;
            std::cout << homeTeam << " have scored from a free throw!\n";
        } else if (type == 2) {
            scoreHomeTeam+=2;
            std::cout << homeTeam << " have scored a 2 pointer!\n";
        } else if (type == 3) {
            scoreHomeTeam+=3;
            std::cout << homeTeam << " have scored a 3 pointer!\n";
        } else {
            std::cout << "\nWrong team selected for scoring!\n";
        }
    } else if (team == 2) {
        if (type == 1) {
            scoreAwayTeam++;
            std::cout << awayTeam << " have scored from a free throw!\n";
        } else if (type == 2) {
            scoreAwayTeam+=2;
            std::cout << awayTeam << " have scored a 2 pointer!\n";
        } else if (type == 3) {
            scoreAwayTeam+=3;
            std::cout << awayTeam << " have scored a 3 pointer!\n";
        } else {
            std::cout << "\nWrong team selected for scoring!\n";
        }
    } else {
        std::cout << "\nWrong team selected for scoring!\n";
    }
}

void Basketball::scoreOption() const {
    std::cout << "1 - free throw\n2 - 2 pointer\n3 - 3 pointer\n";
}

std::string Basketball::toString() const {
    if (finished) {
        return "The basketball match between " + homeTeam + " and " + awayTeam + " has ended in " + std::to_string(scoreHomeTeam) + ":" + std::to_string(scoreAwayTeam);
    } else {
        return "The basketball match between " + homeTeam + " and " + awayTeam + " has not ended yet! The current score is " + std::to_string(scoreHomeTeam) + ":" + std::to_string(scoreAwayTeam);
    }
}

void Basketball::endMatch() {
    std::cout << "The basketball match between " << homeTeam << " and " << awayTeam << " has ended in " << std::to_string(scoreHomeTeam) << ":" << std::to_string(scoreAwayTeam);
    finished = true;
}