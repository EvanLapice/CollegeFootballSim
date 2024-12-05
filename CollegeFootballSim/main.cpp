#include "Conference.h"
#include "Team.h"

int main() {
    // Create conferences
    Conference Big_12("Big 12");
    Conference SEC("SEC");

    // Create and add some teams
    Team team1("Colorado", "Buffalos");
    Team team2("Texas Tech", "Red Raiders");
    Team team3("Alabama", "Crimson Tide");
    Team team4("South Carolina", "Gamecocks");

    // Add some wins/losses
    team1.addWin();
    team2.addLoss();
    team3.addWin();
    team4.addLoss();

    // Add teams to conference
    Big_12.addTeam(team1);
    Big_12.addTeam(team2);
    SEC.addTeam(team3);
    SEC.addTeam(team4);

    // Display all conference information
    Big_12.displayConference();
    SEC.displayConference();

    return 0;
}