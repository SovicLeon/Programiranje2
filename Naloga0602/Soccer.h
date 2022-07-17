//
// Created by Leon on 15. 04. 2022.
//

#ifndef NALOGA0602_SOCCER_H
#define NALOGA0602_SOCCER_H


#include "TeamSport.h"

class Soccer : public TeamSport {
public:
    Soccer(std::string homeTeam, std::string awayTeam);
    void score(int team, int type) override;
    void scoreOption() const override;
    std::string toString() const override;
    void endMatch() override;
};


#endif //NALOGA0602_SOCCER_H
