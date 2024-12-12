#ifndef COLLEGETEAMMANAGER_H
#define COLLEGETEAMMANAGER_H

#include "Conference.h"
#include "Team.h"
#include <vector>
#include <string>

class CollegeTeamManager {
private:
    std::vector<Conference> conferences; // Holds all conferences.

    // Private methods to initialize each conference
    void initACC();
    void initAmerican();
    void initBig12();
    void initBigTen();
    void initCUSA();
    void initIndependents();

    // Helper function to find a conference by name
    Conference* findConferenceByName(const std::string& name);
    const bool win = true;
    const bool loss = false;

public:
    // Constructor
    CollegeTeamManager();

    // Initialize all conferences
    void initializeAllConferences();

    // Display methods
    void displayAllConferences() const;
    void displaySpecificConference(const std::string& name) const;

    // Manage team records
    void addWinToTeam(const std::string& teamName);
    void addLossToTeam(const std::string& teamName);

    // Helper function to find a team by name
    Team* findTeamByName(const std::string& teamName);

    // Method to display a specific team's information
    void displaySpecificTeam(const std::string& teamName) const;
};

#endif // COLLEGETEAMMANAGER_H
