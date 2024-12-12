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

// Add a win to a team by name
void CollegeTeamManager::addWinToTeam(const std::string& teamName) {
	for (auto& conference : conferences) {
		for (auto& team : conference.getTeams()) {
			if (team.getTeamName() == teamName) {
				//team.addWin();
				team.updateRecord(win);
				return;
			}
		}
	}
}

// Add a loss to a team by name
void CollegeTeamManager::addLossToTeam(const std::string& teamName) {
	for (auto& conference : conferences) {
		for (auto& team : conference.getTeams()) {
			if (team.getTeamName() == teamName) {
				//team.addLoss();
				team.updateRecord(loss);
				return;
			}
		}
	}
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
	Team* team = nullptr;
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
