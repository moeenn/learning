# include <iostream>
using namespace std;

int main()
{
	// define the variables required
	int total_sales;
	int total_cost;
	int gross_profit;

	// define the values of known variables
	int no_of_items = 15;

	// read the total sales from user
	cout << "Please enter the total selling price of 15 items: ";
	cin >> total_sales;

	// Read the total profit from the user
	cout << "Please enter the total profit earned on sales: ";
	cin >> gross_profit;

	// calculate total cost
	total_cost = total_sales - gross_profit;

	// calculate cost per unit
	float cost_per_unit;
	cost_per_unit = (float) total_cost / no_of_items;

	// display the results the user
	cout << "The cost price per unit is " << cost_per_unit << endl;

	// end program
	return 0;
}