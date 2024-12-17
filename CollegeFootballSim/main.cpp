#include "CollegeTeamManager.h"
#include "Game.h"
#include <iostream>

int main() {
    CollegeTeamManager manager;
    manager.initializeAllConferences();

    // Generate schedules
    manager.generateConferenceSchedules();
    manager.generateIndependentSchedules();

    return 0;
}
