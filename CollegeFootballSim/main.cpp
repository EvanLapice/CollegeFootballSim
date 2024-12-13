#include "CollegeTeamManager.h"
#include <iostream>

int main() {
    // Create the CollegeTeamManager
    CollegeTeamManager manager;

    // Initialize all conferences and teams
    manager.initializeAllConferences();

    // Display all conferences and their teams
    /*std::cout << "Displaying all conferences and teams:\n";
    manager.displayAllConferences();*/

    // Add a win to Clemson
    std::cout << "\nAdding a win to Arizone State...\n";
    manager.addWinToTeam("Arizona State");

    // Add a loss to Florida State
    std::cout << "\nAdding a loss to Arizona...\n";
    manager.addLossToTeam("Arizona");

    // Display the ACC conference to see the updated records
    //std::cout << "\nDisplaying the Big 12:\n";
    manager.displaySpecificConference("Big 12");

    manager.displaySpecificTeam("Arizona State");
    manager.displaySpecificTeam("Arizona");
    return 0;
}
