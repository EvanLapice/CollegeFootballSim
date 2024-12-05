#include "CollegeTeamManager.h"

int main() {

    CollegeTeamManager manager;
    manager.initializeAllConferences();
    //manager.displayAllConferences();


    manager.addWinToTeam("Colorado");
    manager.addLossToTeam("BYU");

    manager.displayBig12_Conference();

    return 0;
}