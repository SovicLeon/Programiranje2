//
// Created by Leon on 15. 04. 2022.
//

#ifndef NALOGA0602_TEAMSPORT_H
#define NALOGA0602_TEAMSPORT_H


#include <string>

class TeamSport {
protected:
    std::string homeTeam, awayTeam;
    unsigned int scoreHomeTeam, scoreAwayTeam;
    bool finished;
public:
    TeamSport(std::string homeTeam, std::string awayTeam);
    virtual void score(int team, int type) = 0;
    virtual ~TeamSport() = default;
    virtual std::string toString() const = 0;
    void setScoreHomeTeam(unsigned int scoreHomeTeam);
    void setScoreAwayTeam(unsigned int scoreAwayTeam);
    unsigned int getScoreHomeTeam() const;
    unsigned int getScoreAwayTeam() const;
    virtual void scoreOption() const = 0;
    virtual void endMatch() = 0;
};


#endif //NALOGA0602_TEAMSPORT_H
