# include <iostream>
using namespace std;

int main()
{
	// Read the basic salary from the user
	int basic;
	cout << "Please enter your basic salary: ";
	cin >> basic;

	// Define percentage of house rent allowance and dearness allowance
	float house_rent_perc = 0.2;
	float dearness_perc = 0.4;

	// calculate the amount of house rent allowance and dearness allowance
	float house_rent, dearness;
	house_rent = basic * house_rent_perc;
	dearness = basic * dearness_perc;

	// calculate the total salary
	float total_salary;
	total_salary = basic + house_rent + dearness;

	// display the total salary to the user
	cout << "Your total salary is " << total_salary << endl;
	cout << endl << "Note: This calculation includes " << house_rent_perc*100 << "% House Rent Allowance and " << dearness_perc*100 << "% Dearness Allowance." << endl;

	// end program
	return 0;
}