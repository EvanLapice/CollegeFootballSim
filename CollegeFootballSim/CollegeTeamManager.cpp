#include "CollegeTeamManager.h"
#include <iostream>
#include <iomanip> 

// Constructor
CollegeTeamManager::CollegeTeamManager() {
	// Initialize the conferences
	conferences.emplace_back("ACC");
	conferences.emplace_back("American");
	conferences.emplace_back("Big 12");
	conferences.emplace_back("Big Ten");
	conferences.emplace_back("Conference USA");
	conferences.emplace_back("FBS Independents");
	conferences.emplace_back("SEC");
}

// Helper: Find a conference by name
Conference* CollegeTeamManager::findConferenceByName(const std::string& name) {
	for (auto& conference : conferences) {
		if (conference.getConferenceName() == name) {
			return &conference;
		}
	}
	return nullptr;
}

// Initialize ACC teams
void CollegeTeamManager::initACC() {
	Conference* acc = findConferenceByName("ACC");
	if (acc) {
		acc->addTeam(Team("ACC", "Boston College", "Eagles"));
		acc->addTeam(Team("ACC", "California", "Golden Bears"));
		acc->addTeam(Team("ACC", "Clemson", "Tigers"));
		acc->addTeam(Team("ACC", "Duke", "Blue Devils"));
		acc->addTeam(Team("ACC", "Florida State", "Seminoles"));
		acc->addTeam(Team("ACC", "Georgia Tech", "Yellow Jackets"));
		acc->addTeam(Team("ACC", "Louisville", "Cardinals"));
		acc->addTeam(Team("ACC", "Miami", "Hurricanes"));
		acc->addTeam(Team("ACC", "NC State", "Wolfpack"));
		acc->addTeam(Team("ACC", "North Carolina", "Tar Heels"));
		acc->addTeam(Team("ACC", "Pittsburgh", "Panthers"));
		acc->addTeam(Team("ACC", "SMU", "Mustangs"));
		acc->addTeam(Team("ACC", "Stanford", "Cardinal"));
		acc->addTeam(Team("ACC", "Syracuse", "Orange"));
		acc->addTeam(Team("ACC", "Virginia", "Cavaliers"));
		acc->addTeam(Team("ACC", "Virginia Tech", "Hokies"));
		acc->addTeam(Team("ACC", "Wake Forest", "Demon Deacons"));
	}
}

// Initialize American teams
void CollegeTeamManager::initAmerican() {
	Conference* american = findConferenceByName("American");
	if (american) {
		american->addTeam(Team("American", "Army", "Black Knights"));
		american->addTeam(Team("American", "Charlotte", "49ers"));
		american->addTeam(Team("American", "East Carolina", "Pirates"));
		american->addTeam(Team("American", "Florida Atlantic", "Owls"));
		american->addTeam(Team("American", "Memphis", "Tigers"));
		american->addTeam(Team("American", "Navy", "Midshipmen"));
		american->addTeam(Team("American", "North Texas", "Mean Green"));
		american->addTeam(Team("American", "Rice", "Owls"));
		american->addTeam(Team("American", "South Florida", "Bulls"));
		american->addTeam(Team("American", "Temple", "Owls"));
		american->addTeam(Team("American", "Tulane", "Green Wave"));
		american->addTeam(Team("American", "Tulsa", "Golden Hurricane"));
		american->addTeam(Team("American", "UAB", "Blazers"));
		american->addTeam(Team("American", "UTSA", "Roadrunners"));
	}
}

// Initialize Big 12 teams
void CollegeTeamManager::initBig12() {
	Conference* big12 = findConferenceByName("Big 12");
	if (big12) {
		big12->addTeam(Team("Big 12", "Arizona State", "Sun Devils"));
		big12->addTeam(Team("Big 12", "Arizona", "Wildcats"));
		big12->addTeam(Team("Big 12", "BYU", "Cougars"));
		big12->addTeam(Team("Big 12", "Baylor", "Bears"));
		big12->addTeam(Team("Big 12", "Cincinnati", "Bearcats"));
		big12->addTeam(Team("Big 12", "Colorado", "Buffaloes"));
		big12->addTeam(Team("Big 12", "Houston", "Cougars"));
		big12->addTeam(Team("Big 12", "Iowa State", "Cyclones"));
		big12->addTeam(Team("Big 12", "Kansas", "Jayhawks"));
		big12->addTeam(Team("Big 12", "Kansas State", "Wildcats"));
		big12->addTeam(Team("Big 12", "Oklahoma State", "Cowboys"));
		big12->addTeam(Team("Big 12", "TCU", "Horned Frogs"));
		big12->addTeam(Team("Big 12", "Texas Tech", "Red Raiders"));
		big12->addTeam(Team("Big 12", "UCF", "Knights"));
		big12->addTeam(Team("Big 12", "Utah", "Utes"));
		big12->addTeam(Team("Big 12", "West Virginia", "Mountaineers"));
	}
}

// Initialize Big Ten teams
void CollegeTeamManager::initBigTen() {
	Conference* bigTen = findConferenceByName("Big Ten");
	if (bigTen) {
		bigTen->addTeam(Team("Big Ten", "Illinois", "Fighting Illini"));
		bigTen->addTeam(Team("Big Ten", "Indiana", "Hoosiers"));
		bigTen->addTeam(Team("Big Ten", "Iowa", "Hawkeyes"));
		bigTen->addTeam(Team("Big Ten", "Maryland", "Terrapins"));
		bigTen->addTeam(Team("Big Ten", "Michigan State", "Spartans"));
		bigTen->addTeam(Team("Big Ten", "Michigan", "Wolverines"));
		bigTen->addTeam(Team("Big Ten", "Minnesota", "Golden Gophers"));
		bigTen->addTeam(Team("Big Ten", "Nebraska", "Cornhuskers"));
		bigTen->addTeam(Team("Big Ten", "Northwestern", "Wildcats"));
		bigTen->addTeam(Team("Big Ten", "Ohio State", "Buckeyes"));
		bigTen->addTeam(Team("Big Ten", "Oregon", "Ducks"));
		bigTen->addTeam(Team("Big Ten", "Penn State", "Nittany Lions"));
		bigTen->addTeam(Team("Big Ten", "Purdue", "Boilermakers"));
		bigTen->addTeam(Team("Big Ten", "Rutgers", "Scarlet Knights"));
		bigTen->addTeam(Team("Big Ten", "UCLA", "Bruins"));
		bigTen->addTeam(Team("Big Ten", "USC", "Trojans"));
		bigTen->addTeam(Team("Big Ten", "Washington", "Huskies"));
		bigTen->addTeam(Team("Big Ten", "Wisconsin", "Badgers"));
	}
}

// Initialize Conference USA teams
void CollegeTeamManager::initCUSA() {
	Conference* cusa = findConferenceByName("Conference USA");
	if (cusa) {
		cusa->addTeam(Team("Conference USA", "Florida International", "Panthers"));
		cusa->addTeam(Team("Conference USA", "Jacksonville State", "Gamecocks"));
		cusa->addTeam(Team("Conference USA", "Kennesaw State", "Owls"));
		cusa->addTeam(Team("Conference USA", "Liberty", "Flames"));
		cusa->addTeam(Team("Conference USA", "Louisiana Tech", "Bulldogs"));
		cusa->addTeam(Team("Conference USA", "Middle Tennessee", "Blue Raiders"));
		cusa->addTeam(Team("Conference USA", "New Mexico State", "Aggies"));
		cusa->addTeam(Team("Conference USA", "Sam Houston", "Bearkats"));
		cusa->addTeam(Team("Conference USA", "UTEP", "Miners"));
		cusa->addTeam(Team("Conference USA", "Western Kentucky", "Hilltoppers"));
	}
}


// Initialize Independents
void CollegeTeamManager::initIndependents() {
	Conference* independents = findConferenceByName("FBS Independents");
	if (independents) {
		independents->addTeam(Team("FBS Independents", "Massachusetts", "Minutemen"));
		independents->addTeam(Team("FBS Independents", "Notre Dame", "Fighting Irish"));
		independents->addTeam(Team("FBS Independents", "UConn", "Huskies"));
	}
}

void CollegeTeamManager::initSEC()
{
	Conference* sec = findConferenceByName("SEC");
	if (sec) {
		sec->addTeam(Team("SEC", "Alabama", "Crimson Tide"));
		sec->addTeam(Team("SEC", "Arkansas", "Razorbacks"));
		sec->addTeam(Team("SEC", "Auburn", "Tigers"));
		sec->addTeam(Team("SEC", "Florida", "Gators"));
		sec->addTeam(Team("SEC", "Georgia", "Bulldogs"));
		sec->addTeam(Team("SEC", "Kentucky", "Wildcats"));
		sec->addTeam(Team("SEC", "LSU", "Tigers"));
		sec->addTeam(Team("SEC", "Mississippi State", "Bulldogs"));
		sec->addTeam(Team("SEC", "Missouri", "Tigers"));
		sec->addTeam(Team("SEC", "Ole Miss", "Rebels"));
		sec->addTeam(Team("SEC", "South Carolina", "Gamecocks"));
		sec->addTeam(Team("SEC", "Tennessee", "Volunteers"));
		sec->addTeam(Team("SEC", "Texas", "Longhorns"));
		sec->addTeam(Team("SEC", "Texas A&M", "Aggies"));
		sec->addTeam(Team("SEC", "Vanderbilt", "Commodores"));
		sec->addTeam(Team("SEC", "Oklahoma", "Sooners"));
	}
}

// Initialize all conferences
void CollegeTeamManager::initializeAllConferences() {
	initACC();
	initAmerican();
	initBig12();
	initBigTen();
	initCUSA();
	initIndependents();
	initSEC();
}


// Display all conferences
void CollegeTeamManager::displayAllConferences() const {
	for (const auto& conference : conferences) {
		conference.displayTeams();
	}
}

// Display a specific conference
void CollegeTeamManager::displaySpecificConference(const std::string& name) const {
	for (const auto& conference : conferences) {
		if (conference.getConferenceName() == name) {
			conference.displayTeams();
			return;
		}
	}
	std::cerr << "Conference not found: " << name << "\n";
}

void CollegeTeamManager::addWinToTeam(const std::string& teamName) {
	for (auto& conference : conferences) {
		for (auto& team : conference.getTeams()) { // Reference to team
			if (team.getTeamName() == teamName) {
				team.addWin();
				return;
			}
		}
	}
	std::cerr << "Team not found: " << teamName << "\n";
}

void CollegeTeamManager::addLossToTeam(const std::string& teamName) {
	for (auto& conference : conferences) {
		for (auto& team : conference.getTeams()) { // Reference to team
			if (team.getTeamName() == teamName) {
				team.addLoss();
				return;
			}
		}
	}
	std::cerr << "Team not found: " << teamName << "\n";
}

Team* CollegeTeamManager::findTeamByName(const std::string& teamName) {
	for (auto& conference : conferences) {
		for (auto& team : conference.getTeams()) {
			if (team.getTeamName() == teamName) {
				return &team;
			}
		}
	}
	return nullptr; // Return nullptr if the team is not found
}
void CollegeTeamManager::displaySpecificTeam(const std::string& teamName) const {
	const Team* team = nullptr;
	for (auto& conference : conferences) {
		for (auto& t : conference.getTeams()) {
			if (t.getTeamName() == teamName) {
				team = &t;
				break;
			}
		}
		if (team) break;
	}

	if (team) {
		team->displayTeamInfo();
	}
	else {
		std::cerr << "Team not found: " << teamName << "\n";
	}
}

// Retrieve a reference to a specific conference by name
Conference* CollegeTeamManager::getConference(const std::string& name) {
	for (auto& conference : conferences) {
		if (conference.getConferenceName() == name) {
			return &conference; // Return the pointer to the found conference
		}
	}
	return nullptr; // Return nullptr if not found
}
void CollegeTeamManager::generateConferenceSchedules() {
	std::map<std::string, int> teamGameCounts;

	for (auto& conference : conferences) {
		if (conference.getConferenceName() == "FBS Independents") continue;

		std::vector<Team*> teams;
		for (auto& team : conference.getTeams()) {
			teams.push_back(&team);
			teamGameCounts[team.getTeamName()] = 0;
		}

		std::cout << "\nScheduling 8 games for the " << conference.getConferenceName() << ":\n";
		std::cout << "-----------------------------------\n";

		int maxAttempts = 1000; // Prevent infinite loops
		int attempts = 0;

		while (attempts < maxAttempts) {
			std::shuffle(teams.begin(), teams.end(), std::mt19937(std::random_device()()));

			bool allGamesScheduled = true;

			// Pair teams and schedule games
			for (size_t i = 0; i < teams.size(); i++) {
				// Find a valid opponent for team[i]
				for (size_t j = i + 1; j < teams.size(); j++) {
					Team* team1 = teams[i];
					Team* team2 = teams[j];

					// Skip if teams are the same or if either team has enough games
					if (team1->getTeamName() == team2->getTeamName() ||
						teamGameCounts[team1->getTeamName()] >= 8 ||
						teamGameCounts[team2->getTeamName()] >= 8) {
						continue;
					}

					// In generateConferenceSchedules(), replace the std::cout with:
					std::cout << team1->getTeamName() << " vs " << team2->getTeamName() << "\n";
					scheduledGames.emplace_back(team1, team2);
					teamGameCounts[team1->getTeamName()]++;
					teamGameCounts[team2->getTeamName()]++;
					break;
				}
			}

			// Check if all teams in the conference have played 8 games
			for (auto& team : teams) {
				if (teamGameCounts[team->getTeamName()] < 8) {
					allGamesScheduled = false;
					break;
				}
			}

			if (allGamesScheduled) break;
			attempts++;
		}

		if (attempts >= maxAttempts) {
			std::cerr << "Warning: Could not schedule all games for " << conference.getConferenceName() << "\n";
		}
	}
}

void CollegeTeamManager::generateIndependentSchedules() {
	std::map<std::string, int> teamGameCounts;

	// Initialize game counts for all teams
	for (auto& conference : conferences) {
		for (auto& team : conference.getTeams()) {
			teamGameCounts[team.getTeamName()] = 0;
		}
	}

	std::vector<Team*> independents;

	// Get FBS Independent teams
	for (auto& team : conferences.at(5).getTeams()) {
		independents.push_back(&team);
	}

	std::cout << "\nScheduling games for FBS Independents:\n\n";
	std::cout << "-----------------------------------------\n";

	for (auto& independent : independents) {
		while (teamGameCounts[independent->getTeamName()] < 8) {
			std::vector<Team*> availableTeams;

			for (auto& conference : conferences) {
				if (conference.getConferenceName() == "FBS Independents") continue;

				for (auto& team : conference.getTeams()) {
					// Only add teams that:
					// 1. Are not the independent team itself
					// 2. Have less than 8 games scheduled
					if (team.getTeamName() != independent->getTeamName() &&
						teamGameCounts[team.getTeamName()] < 8) {
						availableTeams.push_back(&team);
					}
				}
			}

			if (availableTeams.empty()) break;

			std::shuffle(availableTeams.begin(), availableTeams.end(),
				std::mt19937(std::random_device()()));

			Team* opponent = availableTeams.front();

			// In generateIndependentSchedules(), replace similar code:
			std::cout << independent->getTeamName() << " vs " << opponent->getTeamName() << "\n";
			scheduledGames.emplace_back(independent, opponent);
			teamGameCounts[independent->getTeamName()]++;
			teamGameCounts[opponent->getTeamName()]++;
		}
	}
}
void CollegeTeamManager::simulateAllGames() {
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dis(0, 1);

	std::cout << "\nSimulating all games:\n";
	std::cout << "----------------------\n";

	for (const auto& game : scheduledGames) {
		bool team1Wins = dis(gen) == 1;

		if (team1Wins) {
			game.team1->addWin();
			game.team2->addLoss();
			std::cout << game.team1->getTeamName() << " defeats " << game.team2->getTeamName() << "\n";
		}
		else {
			game.team2->addWin();
			game.team1->addLoss();
			std::cout << game.team2->getTeamName() << " defeats " << game.team1->getTeamName() << "\n";
		}
	}
}

void CollegeTeamManager::displayAllTeamRecords() const {
	std::cout << "\nFinal Team Records:\n";
	std::cout << "-------------------\n";

	for (const auto& conference : conferences) {
		std::cout << "\n" << conference.getConferenceName() << ":\n";
		for (const auto& team : conference.getTeams()) {
			std::cout << team.getTeamName() << ": "
				<< team.getWins() << "-" << team.getLosses()
				<< " (" << team.getTeamRecord() << ")\n";
		}
	}
}

// Add to CollegeTeamManager.cpp:
void CollegeTeamManager::displayTop25() const {
	// Create a vector of all teams
	std::vector<std::pair<const Team*, double>> allTeams;

	// Collect all teams and calculate their winning percentage
	for (const auto& conference : conferences) {
		for (const auto& team : conference.getTeams()) {
			double totalGames = team.getWins() + team.getLosses();
			double winPercentage = totalGames > 0 ?
				(static_cast<double>(team.getWins()) / totalGames) : 0.0;
			allTeams.emplace_back(&team, winPercentage);
		}
	}

	// Sort teams by winning percentage
	std::sort(allTeams.begin(), allTeams.end(),
		[](const auto& a, const auto& b) {
			if (a.second != b.second) {
				return a.second > b.second; // Higher percentage first
			}
			return a.first->getWins() > b.first->getWins(); // More wins if tied
		});

	// Display top 25
	std::cout << "\nTop 25 Teams:\n";
	std::cout << "=============\n";

	for (size_t i = 0; i < std::min(size_t(25), allTeams.size()); ++i) {
		const Team* team = allTeams[i].first;
		std::cout << (i + 1) << ". "
			<< std::left << std::setw(25) << team->getTeamName()
			<< std::left << std::setw(20) << team->getTeamLocation()
			<< std::left << std::setw(15) << team->getTeamConference()
			<< team->getTeamRecord() << "\n";
	}
}