// CollegeFootballSim.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "team.cpp"


int main()
{
	Team team1("Orlando", "Magic");

	std::cout << "Team Record: " << team1.getTeamRecord() << std::endl;
	team1.addWin();
	team1.addWin();
	std::cout << "Team Record: " << team1.getTeamRecord() << std::endl;

	team1.addWin();
	team1.addWin();
	std::cout << "Team Record: " << team1.getTeamRecord() << std::endl;

	team1.addLoss();
	team1.addLoss();
	team1.addLoss();

	team1.setTeamRank(1);

	team1.displayTeamInfo();



}


