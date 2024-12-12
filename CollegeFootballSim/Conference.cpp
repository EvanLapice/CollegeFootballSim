#include "Conference.h"
#include <iostream>

// Constructor
Conference::Conference(const std::string& name) : conferenceName(name) {}

// Add a team to the conference
void Conference::addTeam(const Team& team) {
    teams.push_back(team);
}

// Get the list of teams in the conference
std::vector<Team> Conference::getTeams() const {
    return teams;
}

// Display all teams in the conference
void Conference::displayTeams() const {
    std::cout << "\n=== " << conferenceName << " Teams ===\n";
    for (const auto& team : teams) {
        team.displayTeamInfo();
    }
    std::cout << "=========================\n";
}

// Get conference name
std::string Conference::getConferenceName() const {
    return conferenceName;
}

// Set conference name
void Conference::setConferenceName(const std::string& name) {
    conferenceName = name;
}
