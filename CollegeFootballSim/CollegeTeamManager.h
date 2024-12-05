#ifndef COLLEGE_TEAM_MANAGER_H
#define COLLEGE_TEAM_MANAGER_H

#include "Conference.h"
#include "Team.h"
#include <map>

class CollegeTeamManager {
private:
    std::map<std::string, Conference> conferences;

    void initACC();
    void initAmerican();
    void initBig12();
    void initBigTen();
    void initCUSA();
    void initIndependents();

public:
    CollegeTeamManager();
    void initializeAllConferences();
    void displayAllConferences() const;
    Conference& getConference(const std::string& name);
    
    void displayACC_Conference() const;
    void displayAmerican_Conference() const;
    void displayBig12_Conference() const;
    void displayBigTen_Conference() const;
    void displayCUSA_Conference() const;
    void displayIndependents_Conference() const;

    void addWinToTeam(const std::string& teamName);
    void addLossToTeam(const std::string& teamName);
};

#endif