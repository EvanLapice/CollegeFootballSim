#include <iostream>
#include <string>
#include <iomanip>

class Team {
private:
	std::string teamName;
	std::string teamLocation;
	int wins;
	int losses;
	std::string teamRecord;
	int teamRank;

	void updateRecord() {
        teamRecord = std::to_string(wins) + std::string(" - ") + std::to_string(losses);
	}

public:
    // Constructor
    Team(std::string name, std::string location)
        : teamName(name), teamLocation(location), wins(0), losses(0), teamRank(0) {
        updateRecord();
    }

    // Methods to modify team stats
    void addWin() {
        wins++;
        updateRecord();
    }

    void addLoss() {
        losses++;
        updateRecord();
    }

    // Getters
    std::string getTeamName() const { return teamName; }
    std::string getTeamLocation() const { return teamLocation; }
    int getWins() const { return wins; }
    int getLosses() const { return losses; }
    std::string getTeamRecord() const { return teamRecord; }
    int getTeamRank() const { return teamRank; }

    // Setters
    void setTeamName(const std::string& name) { teamName = name; }
    void setTeamLocation(const std::string& location) { teamLocation = location; }
    void setTeamRank(int rank) { teamRank = rank; }

    // Display team information
    void displayTeamInfo() const {
        std::cout << "\n=== Team Information ===\n";
        std::cout << "Team Name: " << teamName << "\n";
        std::cout << "Location: " << teamLocation << "\n";
        std::cout << "Record: " << teamRecord << "\n";
        std::cout << "Rank: " << teamRank << "\n";
        std::cout << "=====================\n";
    }


};