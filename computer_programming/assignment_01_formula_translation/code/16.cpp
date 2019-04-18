# include <iostream>
using namespace std;

int main()
{
	// Define no of people surveyed
	int survey_pool = 12467;

	// Define variables for people who purchase energy drinks every week	
	int common_user;
	float common_user_perc = 0.14;

	// Define variables for people who prefer flavored energy drinks
	int energy_drink_user;
	float energy_drink_user_perc = 0.64; 

	// Do the calculations
	common_user = survey_pool * common_user_perc;
	energy_drink_user = common_user * energy_drink_user_perc;

	// Give the results to the user
	cout << "Out of the total of " << survey_pool << " people, " << common_user << " people purchase one or more energy drinks per week." << endl;
	cout << "Out of these " << common_user << " people, " << energy_drink_user << " people prefer flavored energy drinks.";

	// end program
	return 0;  
}