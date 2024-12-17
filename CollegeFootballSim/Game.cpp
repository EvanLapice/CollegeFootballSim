#include "Game.h"
#include <iostream>
#include <random>

// Constructor
Game::Game(Team& t1, Team& t2) : team1(t1), team2(t2), result("") {}

// Simulate the game and determine a winner randomly
void Game::simulateGame() {
    std::random_device rd;   // Seed
    std::mt19937 gen(rd());  // Random engine
    std::uniform_int_distribution<> randomWinner(0, 1); // Random number between 0 and 1

    int winner = randomWinner(gen); // Randomly pick a winner

    if (winner == 0) {
        team1.addWin();
        team2.addLoss();
        result = team1.getTeamName() + " wins!";
    }
    else {
        team2.addWin();
        team1.addLoss();
        result = team2.getTeamName() + " wins!";
    }
}

// Display the result of the game
void Game::displayResult() const {
    std::cout << "Game Result: " << result << std::endl;
}
