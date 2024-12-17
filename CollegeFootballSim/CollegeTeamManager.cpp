#include "CollegeTeamManager.h"
#include <iostream>

// Constructor
CollegeTeamManager::CollegeTeamManager() {
	// Initialize the conferences
	conferences.emplace_back("ACC");
	conferences.emplace_back("American");
	conferences.emplace_back("Big 12");
	conferences.emplace_back("Big Ten");
	conferences.emplace_back("Conference USA");
	conferences.emplace_back("FBS Independents");
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

// Initialize all conferences
void CollegeTeamManager::initializeAllConferences() {
	initACC();
	initAmerican();
	initBig12();
	initBigTen();
	initCUSA();
	initIndependents();
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
// Generate 8 random games within each conference (except FBS Independents)
void CollegeTeamManager::generateConferenceSchedules() {
	std::map<std::string, int> teamGameCounts;

	for (auto& conference : conferences) {
		if (conference.getConferenceName() == "FBS Independents") continue;

		std::vector<Team*> teams;
		for (auto& team : conference.getTeams()) {
			teams.push_back(&team);
			teamGameCounts[team.getTeamName()] = 0; // Initialize game count
		}

		std::cout << "\nScheduling 8 games for the " << conference.getConferenceName() << ":\n";
		std::cout << "-----------------------------------\n";

		while (true) {
			// Shuffle teams for random pairings
			std::shuffle(teams.begin(), teams.end(), std::mt19937(std::random_device()()));

			bool allGamesScheduled = true;

			// Pair teams and schedule games
			for (size_t i = 0; i + 1 < teams.size(); i += 2) {
				Team* team1 = teams[i];
				Team* team2 = teams[i + 1];

				if (teamGameCounts[team1->getTeamName()] < 8 &&
					teamGameCounts[team2->getTeamName()] < 8) {
					std::cout << team1->getTeamName() << " vs " << team2->getTeamName() << "\n";

					// Increment game counts
					teamGameCounts[team1->getTeamName()]++;
					teamGameCounts[team2->getTeamName()]++;
				}
			}

			// Check if all teams in the conference have played 8 games
			for (auto& team : teams) {
				if (teamGameCounts[team->getTeamName()] < 8) {
					allGamesScheduled = false;
					break;
				}
			}

			if (allGamesScheduled) break; // Exit the loop if all teams are done
		}
	}
}

// Generate schedules for FBS Independents by pairing with under-scheduled teams
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
	for (auto& team : conferences.at(5).getTeams()) { // Assuming FBS Independents are at index 5
		independents.push_back(&team);
	}

	std::cout << "\nScheduling games for FBS Independents:\n\n";
	std::cout << "-----------------------------------------\n";

	for (auto& independent : independents) {
		while (teamGameCounts[independent->getTeamName()] < 8) {
			// Find under-scheduled teams from other conferences
			std::vector<Team*> availableTeams;

			for (auto& conference : conferences) {
				if (conference.getConferenceName() == "FBS Independents") continue;

				for (auto& team : conference.getTeams()) {
					if (teamGameCounts[team.getTeamName()] < 8) {
						availableTeams.push_back(&team);
					}
				}
			}

			if (availableTeams.empty()) break; // No available teams left

			// Randomly pick an opponent
			std::shuffle(availableTeams.begin(), availableTeams.end(),
				std::mt19937(std::random_device()()));

			Team* opponent = availableTeams.front();

			// Schedule the game
			std::cout << independent->getTeamName() << " vs " << opponent->getTeamName() << "\n";

			// Update game counts
			teamGameCounts[independent->getTeamName()]++;
			teamGameCounts[opponent->getTeamName()]++;
		}
	}
}