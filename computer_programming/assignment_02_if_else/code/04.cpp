# include <iostream>
using namespace std;

int main() {
	// conversion factors
	const float YEN_PER_DOLLAR = 0.952;
	const float EUROS_PER_DOLLAR = 0.7175;

	// ask the user to enter amount in dollars
	cout << "Please enter the amount in US Dollars (USD): ";
	float dollar;
	cin >> dollar;

	// check if positive value is entered
	if ( dollar <= 0) {
		cout << "Please run the program again and enter valid positive value." << endl;
		return 0;
	}

	// make the currency conversions
	float yen, euro;

	yen = dollar * YEN_PER_DOLLAR;
	euro = dollar * EUROS_PER_DOLLAR;

	// display the results to the user
	cout << "$" << dollar << " is equal to " << yen << " YEN." << endl;
	cout << "$" << dollar << " is equal to " << euro << " Euros" << endl;

	return 0;
}