// CollegeTeamManager.h
#ifndef COLLEGETEAMMANAGER_H
#define COLLEGETEAMMANAGER_H

#include "Conference.h"
#include "Team.h"
#include <vector>
#include <string>
#include <random>
#include <algorithm>
#include <map>
#include <iomanip> 

class CollegeTeamManager {
private:
    std::vector<Conference> conferences;

    struct ScheduledGame {
        Team* team1;
        Team* team2;
        ScheduledGame(Team* t1, Team* t2) : team1(t1), team2(t2) {}
    };

    std::vector<ScheduledGame> scheduledGames;

    // Private methods to initialize each conference
    void initACC();
    void initAmerican();
    void initBig12();
    void initBigTen();
    void initCUSA();
    void initIndependents();
    void initSEC();  // Add this line

    // Helper function to find a conference by name
    Conference* findConferenceByName(const std::string& name);
    const bool win = true;
    const bool loss = false;

public:
    CollegeTeamManager();
    void initializeAllConferences();
    void displayAllConferences() const;
    void displaySpecificConference(const std::string& name) const;
    void displaySpecificTeam(const std::string& teamName) const;
    void displayAllTeamRecords() const;
    void addWinToTeam(const std::string& teamName);
    void addLossToTeam(const std::string& teamName);
    Team* findTeamByName(const std::string& teamName);
    Conference* getConference(const std::string& name);
    void generateConferenceSchedules();
    void generateIndependentSchedules();
    void simulateAllGames();
    void displayTop25() const;
};

#endif // COLLEGETEAMMANAGER_H