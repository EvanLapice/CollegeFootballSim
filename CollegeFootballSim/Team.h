#ifndef TEAM_H
#define TEAM_H

#include <string>
#include <iostream>

class Team {
private:
    std::string teamName;
    std::string teamLocation;
    int wins;
    int losses;
    std::string teamRecord;
    int teamRank;
    void updateRecord();

public:
    Team(std::string name, std::string location);
    void addWin();
    void addLoss();
    std::string getTeamName() const;
    std::string getTeamLocation() const;
    int getWins() const;
    int getLosses() const;
    std::string getTeamRecord() const;
    int getTeamRank() const;
    void setTeamName(const std::string& name);
    void setTeamLocation(const std::string& location);
    void setTeamRank(int rank);
    void displayTeamInfo() const;
};

#endif