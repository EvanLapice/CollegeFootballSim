// Conference.cpp
#include "Conference.h"
#include <iostream>

Conference::Conference() : conferenceName("") {}

Conference::Conference(std::string name) : conferenceName(name) {}

std::string Conference::getConferenceName() const {
    return conferenceName;
}

void Conference::setConferenceName(const std::string& name) {
    conferenceName = name;
}

const std::vector<Team>& Conference::getConferenceTeams() const {
    return conferenceTeams;
}

std::vector<Team>& Conference::getConferenceTeams() {
    return conferenceTeams;
}

void Conference::addTeam(const Team& team) {
    conferenceTeams.push_back(team);
}

void Conference::displayConference() const {
    std::cout << "\n=== " << conferenceName << " Conference ===\n";
    std::cout << "Number of teams: " << conferenceTeams.size() << "\n\n";

    for (const auto& team : conferenceTeams) {
        team.displayTeamInfo();
    }
}