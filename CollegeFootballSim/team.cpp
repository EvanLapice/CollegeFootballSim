#include "Team.h"

// Updates the record string to reflect current wins and losses.
void Team::updateRecord() {
    teamRecord = std::to_string(wins) + " - " + std::to_string(losses);
}

// Constructor: Initializes the team attributes and sets default values for wins, losses, and ranks.
Team::Team(const std::string& conference, const std::string& name, const std::string& location)
    : teamConference(conference), teamName(name), teamLocation(location), wins(0), losses(0),
    teamRankInConference(0), teamNationalRank(0) {
    updateRecord();
}

// Increment the win count and update the record display.
void Team::addWin() {
    wins++;
    updateRecord();
}

// Increment the loss count and update the record display.
void Team::addLoss() {
    losses++;
    updateRecord();
}

// Updates the team's record based on whether they won or lost a game.
void Team::updateRecord(bool won) {
    if (won) {
        addWin();
    }
    else {
        addLoss();
    }
}

// Getters
std::string Team::getTeamName() const { return teamName; }
std::string Team::getTeamLocation() const { return teamLocation; }
std::string Team::getTeamRecord() const { return teamRecord; }
std::string Team::getTeamConference() const { return teamConference; }
int Team::getWins() const { return wins; }
int Team::getLosses() const { return losses; }
int Team::getTeamRankInConference() const { return teamRankInConference; }
int Team::getTeamNationalRank() const { return teamNationalRank; }

// Setters
void Team::setTeamName(const std::string& name) { teamName = name; }
void Team::setTeamLocation(const std::string& location) { teamLocation = location; }
void Team::setTeamConference(const std::string& conference) { teamConference = conference; }
void Team::setTeamRankInConference(int rank) { teamRankInConference = rank; }
void Team::setTeamNationalRank(int rank) { teamNationalRank = rank; }

// Displays all team information to the console.
void Team::displayTeamInfo() const {
    std::cout << "\n=== Team Information ===\n";
    std::cout << "Conference: " << teamConference << "\n";
    std::cout << "Location: " << teamLocation << "\n";
    std::cout << "Team Name: " << teamName << "\n";
    std::cout << "Record: " << teamRecord << "\n";
    std::cout << "Conference Rank: " << teamRankInConference << "\n";
    std::cout << "National Rank: " << teamNationalRank << "\n";
    std::cout << "=========================\n";
}
