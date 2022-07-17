#include <iostream>

#include "Soccer.h"
#include "Basketball.h"
#include "SportsEvent.h"

using std::string; using std::cin; using std::cout;

void meni() {
    cout << "\n\nOptions:\n";
    cout << "1: Add match to event.\n";
    cout << "2: Add score to match.\n";
    cout << "3: End a match.\n";
    cout << "4: Print out whole event status.\n";
    cout << "5: End.\n";
    cout << "\noption: ";
}

int main() {
    string eventName;
    cout << "Enter event name: ";
    cin >> eventName;
    SportsEvent E1(eventName);
    bool working = true;
    int option, n;

    int sportMatchID, sportScoreType, teamHA;
    int sportType;
    std::string team1, team2;
    bool addMatch = false;

    do {
        if (addMatch) {
            addMatch = false;
            if (sportType==1) {
                E1.addMatch(new Soccer(team1,team2));
            } else if (sportType==2) {
                E1.addMatch(new Basketball(team1,team2));
            }
        }
        meni();
        cin >> option;
        switch (option) {
            case 1:
                cout << "Type of sport: 1 - soccer, 2 - basketball: ";
                cin >> sportType;
                if (sportType==1) {
                    cout << "Sport match home team name: ";
                    cin >> team1;
                    cout << "Sport match away team name: ";
                    cin >> team2;
                    addMatch = true;
                } else if (sportType==2) {
                    cout << "Sport match home team name: ";
                    cin >> team1;
                    cout << "Sport match away team name: ";
                    cin >> team2;
                    addMatch = true;
                } else {
                    cout << "Invalid sport type option!\n";
                }
                break;
            case 2:
                cout << "Enter sport match ID(see option 4): ";
                cin >> sportMatchID;
                cout << "Enter home or away team(1 - home, 2 - away): ";
                cin >> teamHA;
                E1.getMatch(sportMatchID-1)->scoreOption();
                cout << "Enter score type: ";
                cin >> sportScoreType;
                E1.getMatch(sportMatchID-1)->score(teamHA,sportScoreType);
                break;
            case 3:
                cout << "Enter sport match ID(see option 4): ";
                cin >> sportMatchID;
                E1.getMatch(sportMatchID-1)->endMatch();
                break;
            case 4:
                E1.print();
                break;
            case 5:
                working = false;
                break;
            default:
                cout << "False input!" << std::endl;
                break;
        }
        std::cout << std::endl;
    } while (working);


    return 0;
}
