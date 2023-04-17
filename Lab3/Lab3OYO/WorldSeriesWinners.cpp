#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{	
	ifstream teams;	
	teams.open("Teams.txt");
	string curr_line = "";

	// Print the names of the teams to the console
	while(getline(teams, curr_line))
		cout << curr_line << endl;

	ifstream world_sr;
	world_sr.open("WorldSeriesWinners.txt");

	// Create an array to hold all the strings
	vector<string> team_names;
	
	string team_name;
	while(getline(world_sr, team_name))
		team_names.push_back(team_name);

	int win_counter = 0;
	string user_team;

	cout << "Enter the name of the team you would like to look up: ";
	getline(cin, user_team);

	for (int i = 0; i < team_names.size(); i++)
	{
		cout << team_names[i] << endl;
		cout << team_names[i].length() << endl;
		if (user_team == team_names[i])
			win_counter++;
	}

	cout << "The team: " << user_team << " won " << win_counter << " world series." << endl;

	teams.close();
	world_sr.close();

	return 0;
}
