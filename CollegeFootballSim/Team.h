#ifndef TEAM_H
#define TEAM_H

#include <string>
#include <iostream>

class Team {
private:
    std::string teamName;
    std::string teamLocation;
    std::string teamConference;
    int wins;
    int losses;
    std::string teamRecord;
    int teamRankInConference;
    int teamNationalRank;

    void updateRecord(); // Updates the record display string.

public:
    // Constructor
    Team(const std::string& conference, const std::string& name, const std::string& location);

    // Record Management
    void addWin();
    void addLoss();
    void updateRecord(bool won);

    // Getters
    std::string getTeamName() const;
    std::string getTeamLocation() const;
    std::string getTeamRecord() const;
    std::string getTeamConference() const;
    int getWins() const;
    int getLosses() const;
    int getTeamRankInConference() const;
    int getTeamNationalRank() const;

    // Setters
    void setTeamName(const std::string& name);
    void setTeamLocation(const std::string& location);
    void setTeamConference(const std::string& conference);
    void setTeamRankInConference(int rank);
    void setTeamNationalRank(int rank);

    // Display Info
    void displayTeamInfo() const;
};

#endif // TEAM_H
