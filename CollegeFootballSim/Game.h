#ifndef GAME_H
#define GAME_H

#include "Team.h"

class Game {
private:
    Team& team1;
    Team& team2;
    std::string result; // Holds the result of the game (winner's name).

public:
    Game(Team& t1, Team& t2);

    void simulateGame(); // Simulate the game without points
    void displayResult() const; // Display the winner
};

#endif // GAME_H
