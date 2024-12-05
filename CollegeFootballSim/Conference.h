// Conference.h
#ifndef CONFERENCE_H
#define CONFERENCE_H

#include <vector>
#include <string>
#include "Team.h"

class Conference {
private:
    std::string conferenceName;
    std::vector<Team> conferenceTeams;

public:
    Conference();
    Conference(std::string name);

    std::string getConferenceName() const;
    void setConferenceName(const std::string& name);

    // Add both const and non-const versions
    const std::vector<Team>& getConferenceTeams() const;
    std::vector<Team>& getConferenceTeams();

    void addTeam(const Team& team);
    void displayConference() const;
};

#endif