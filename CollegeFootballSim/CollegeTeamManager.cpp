#include "CollegeTeamManager.h"

CollegeTeamManager::CollegeTeamManager() {
    conferences["ACC"] = Conference("ACC");
    conferences["American"] = Conference("American");
    conferences["Big 12"] = Conference("Big 12");
    conferences["Big Ten"] = Conference("Big Ten");
    conferences["Conference USA"] = Conference("Conference USA");
    conferences["FBS Independents"] = Conference("FBS Independents");
}

void CollegeTeamManager::initACC() {
    Conference& acc = conferences["ACC"];
    acc.addTeam(Team("Boston College", "Eagles"));
    acc.addTeam(Team("California", "Golden Bears"));
    acc.addTeam(Team("Clemson", "Tigers"));
    acc.addTeam(Team("Duke", "Blue Devils"));
    acc.addTeam(Team("Florida State", "Seminoles"));
    acc.addTeam(Team("Georgia Tech", "Yellow Jackets"));
    acc.addTeam(Team("Louisville", "Cardinals"));
    acc.addTeam(Team("Miami", "Hurricanes"));
    acc.addTeam(Team("NC State", "Wolfpack"));
    acc.addTeam(Team("North Carolina", "Tar Heels"));
    acc.addTeam(Team("Pittsburgh", "Panthers"));
    acc.addTeam(Team("SMU", "Mustangs"));
    acc.addTeam(Team("Stanford", "Cardinal"));
    acc.addTeam(Team("Syracuse", "Orange"));
    acc.addTeam(Team("Virginia", "Cavaliers"));
    acc.addTeam(Team("Virginia Tech", "Hokies"));
    acc.addTeam(Team("Wake Forest", "Demon Deacons"));
}

void CollegeTeamManager::initAmerican() {
    Conference& american = conferences["American"];
    american.addTeam(Team("Army", "Black Knights"));
    american.addTeam(Team("Charlotte", "49ers"));
    american.addTeam(Team("East Carolina", "Pirates"));
    american.addTeam(Team("Florida Atlantic", "Owls"));
    american.addTeam(Team("Memphis", "Tigers"));
    american.addTeam(Team("Navy", "Midshipmen"));
    american.addTeam(Team("North Texas", "Mean Green"));
    american.addTeam(Team("Rice", "Owls"));
    american.addTeam(Team("South Florida", "Bulls"));
    american.addTeam(Team("Temple", "Owls"));
    american.addTeam(Team("Tulane", "Green Wave"));
    american.addTeam(Team("Tulsa", "Golden Hurricane"));
    american.addTeam(Team("UAB", "Blazers"));
    american.addTeam(Team("UTSA", "Roadrunners"));
}

void CollegeTeamManager::initBig12() {
    Conference& big12 = conferences["Big 12"];
    big12.addTeam(Team("Arizona State", "Sun Devils"));
    big12.addTeam(Team("Arizona", "Wildcats"));
    big12.addTeam(Team("BYU", "Cougars"));
    big12.addTeam(Team("Baylor", "Bears"));
    big12.addTeam(Team("Cincinnati", "Bearcats"));
    big12.addTeam(Team("Colorado", "Buffaloes"));
    big12.addTeam(Team("Houston", "Cougars"));
    big12.addTeam(Team("Iowa State", "Cyclones"));
    big12.addTeam(Team("Kansas", "Jayhawks"));
    big12.addTeam(Team("Kansas State", "Wildcats"));
    big12.addTeam(Team("Oklahoma State", "Cowboys"));
    big12.addTeam(Team("TCU", "Horned Frogs"));
    big12.addTeam(Team("Texas Tech", "Red Raiders"));
    big12.addTeam(Team("UCF", "Knights"));
    big12.addTeam(Team("Utah", "Utes"));
    big12.addTeam(Team("West Virginia", "Mountaineers"));
}

void CollegeTeamManager::initBigTen() {
    Conference& bigTen = conferences["Big Ten"];
    bigTen.addTeam(Team("Illinois", "Fighting Illini"));
    bigTen.addTeam(Team("Indiana", "Hoosiers"));
    bigTen.addTeam(Team("Iowa", "Hawkeyes"));
    bigTen.addTeam(Team("Maryland", "Terrapins"));
    bigTen.addTeam(Team("Michigan State", "Spartans"));
    bigTen.addTeam(Team("Michigan", "Wolverines"));
    bigTen.addTeam(Team("Minnesota", "Golden Gophers"));
    bigTen.addTeam(Team("Nebraska", "Cornhuskers"));
    bigTen.addTeam(Team("Northwestern", "Wildcats"));
    bigTen.addTeam(Team("Ohio State", "Buckeyes"));
    bigTen.addTeam(Team("Oregon", "Ducks"));
    bigTen.addTeam(Team("Penn State", "Nittany Lions"));
    bigTen.addTeam(Team("Purdue", "Boilermakers"));
    bigTen.addTeam(Team("Rutgers", "Scarlet Knights"));
    bigTen.addTeam(Team("UCLA", "Bruins"));
    bigTen.addTeam(Team("USC", "Trojans"));
    bigTen.addTeam(Team("Washington", "Huskies"));
    bigTen.addTeam(Team("Wisconsin", "Badgers"));
}

void CollegeTeamManager::initCUSA() {
    Conference& cusa = conferences["Conference USA"];
    cusa.addTeam(Team("Florida International", "Panthers"));
    cusa.addTeam(Team("Jacksonville State", "Gamecocks"));
    cusa.addTeam(Team("Kennesaw State", "Owls"));
    cusa.addTeam(Team("Liberty", "Flames"));
    cusa.addTeam(Team("Louisiana Tech", "Bulldogs"));
    cusa.addTeam(Team("Middle Tennessee", "Blue Raiders"));
    cusa.addTeam(Team("New Mexico State", "Aggies"));
    cusa.addTeam(Team("Sam Houston", "Bearkats"));
    cusa.addTeam(Team("UTEP", "Miners"));
    cusa.addTeam(Team("Western Kentucky", "Hilltoppers"));
}

void CollegeTeamManager::initIndependents() {
    Conference& independents = conferences["FBS Independents"];
    independents.addTeam(Team("Massachusetts", "Minutemen"));
    independents.addTeam(Team("Notre Dame", "Fighting Irish"));
    independents.addTeam(Team("UConn", "Huskies"));
}


void CollegeTeamManager::initializeAllConferences() {
    initACC();
    initAmerican();
    initBig12();
    initBigTen();
    initCUSA();
    initIndependents();
}

void CollegeTeamManager::displayAllConferences() const {
    for (const auto& pair : conferences) {
        pair.second.displayConference();
    }
}

Conference& CollegeTeamManager::getConference(const std::string& name) {
    return conferences[name];
}

void CollegeTeamManager::displayACC_Conference() const {
    const auto& conference = conferences.at("ACC");
    conference.displayConference();
}

void CollegeTeamManager::displayAmerican_Conference() const {
    const auto& conference = conferences.at("American");
    conference.displayConference();
}

void CollegeTeamManager::displayBig12_Conference() const {
    const auto& conference = conferences.at("Big 12");
    conference.displayConference();
}

void CollegeTeamManager::displayBigTen_Conference() const {
    const auto& conference = conferences.at("Big Ten");
    conference.displayConference();
}

void CollegeTeamManager::displayCUSA_Conference() const {
    const auto& conference = conferences.at("Conference USA");
    conference.displayConference();
}

void CollegeTeamManager::displayIndependents_Conference() const {
    const auto& conference = conferences.at("FBS Independents");
    conference.displayConference();
}

void CollegeTeamManager::addWinToTeam(const std::string& teamName) {
    for (std::map<std::string, Conference>::iterator it = conferences.begin(); it != conferences.end(); ++it) {
        std::vector<Team>& teams = it->second.getConferenceTeams();
        for (size_t i = 0; i < teams.size(); i++) {
            if (teams[i].getTeamName() == teamName) {
                teams[i].addWin();
                return;
            }
        }
    }
}

void CollegeTeamManager::addLossToTeam(const std::string& teamName) {
    for (std::map<std::string, Conference>::iterator it = conferences.begin(); it != conferences.end(); ++it) {
        std::vector<Team>& teams = it->second.getConferenceTeams();
        for (size_t i = 0; i < teams.size(); i++) {
            if (teams[i].getTeamName() == teamName) {
                teams[i].addLoss();
                return;
            }
        }
    }
}
