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
    Conference(std::string name);
    std::string getConferenceName() const;
    void setConferenceName(const std::string& name);
    const std::vector<Team>& getConferenceTeams() const;
    void addTeam(const Team& team);
    void displayConference() const;
};

#endif