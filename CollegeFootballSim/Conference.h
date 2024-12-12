#ifndef CONFERENCE_H
#define CONFERENCE_H

#include <vector>
#include <string>
#include "Team.h"

class Conference {
private:
    std::string conferenceName;
    std::vector<Team> teams; // Holds the list of teams in the conference.

public:
    // Constructor
    Conference(const std::string& name);

    // Add a team to the conference
    void addTeam(const Team& team);

    // Get the list of teams in the conference
    std::vector<Team> getTeams() const;

    // Display all teams in the conference
    void displayTeams() const;

    // Get conference name
    std::string getConferenceName() const;

    // Set conference name
    void setConferenceName(const std::string& name);
};

#endif // CONFERENCE_H
