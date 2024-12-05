#include "Team.h"

void Team::updateRecord() {
	teamRecord = std::to_string(wins) + std::string(" - ") + std::to_string(losses);
}

Team::Team(std::string location, std::string name)
	: teamLocation(location), teamName(name), wins(0), losses(0), teamRank(0) {
	updateRecord();
}

void Team::addWin() {
	wins++;
	updateRecord();
}

void Team::addLoss() {
	losses++;
	updateRecord();
}

std::string Team::getTeamName() const { return teamName; }
std::string Team::getTeamLocation() const { return teamLocation; }
int Team::getWins() const { return wins; }
int Team::getLosses() const { return losses; }
std::string Team::getTeamRecord() const { return teamRecord; }
int Team::getTeamRank() const { return teamRank; }

void Team::setTeamName(const std::string& name) { teamName = name; }
void Team::setTeamLocation(const std::string& location) { teamLocation = location; }
void Team::setTeamRank(int rank) { teamRank = rank; }

void Team::displayTeamInfo() const {
	std::cout << "\n=== Team Information ===\n";
	std::cout << "Location: " << teamLocation << "\n";
	std::cout << "Team Name: " << teamName << "\n";
	std::cout << "Record: " << teamRecord << "\n";
	std::cout << "Rank: " << teamRank << "\n";
	std::cout << "=====================\n";
}