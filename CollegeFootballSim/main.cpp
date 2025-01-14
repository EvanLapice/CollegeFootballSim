#include "CollegeTeamManager.h"
#include <iostream>

int main() {
    // Create and initialize the manager
    CollegeTeamManager manager;
    manager.initializeAllConferences();

    // Display initial state
    std::cout << "Initial Conference Status:\n";
    std::cout << "=========================\n";
    manager.displayAllTeamRecords();

    // Generate schedules
    std::cout << "\nGenerating Conference Schedules...\n";
    manager.generateConferenceSchedules();

    std::cout << "\nGenerating Independent Team Schedules...\n";
    manager.generateIndependentSchedules();

    // Simulate all games
    std::cout << "\nSimulating Season...\n";
    manager.simulateAllGames();

    // Display final records
    std::cout << "\nFinal Season Records:\n";
    std::cout << "====================\n";
    manager.displayAllTeamRecords();

    // Test specific conference display
    std::cout << "\nDetailed Big Ten Conference Information:\n";
    manager.displaySpecificConference("Big Ten");

    // Test specific team display
    std::cout << "\nDetailed Team Information for Ohio State:\n";
    manager.displaySpecificTeam("Ohio State");

    // Test specific team display
    std::cout << "\nDetailed Team Information for Colorado:\n";
    manager.displaySpecificTeam("Colorado");

    // After simulating games and showing final records
    std::cout << "\nFinal Top 25 Rankings:\n";
    manager.displayTop25();

    return 0;
}