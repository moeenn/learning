# include <iostream>
# include <iomanip>

using namespace std;

int main() {
	// define basic fixed bank charges
	const int FIXED_BANK_CHARGES = 10;

	// ask the user for number of cheques written in past month
	cout << "Please enter the number of Cheques written: ";
	int no_of_cheques;
	cin >> no_of_cheques;

	// input validation
	// no of cheques can't be negative
	if ( no_of_cheques < 0 ) {
		cout << "Invalid input! No of Cheques can't be negative." << endl;
		return 1;
	}

	/*
		Slabs for bank charges
		No. of cheques 			Variable Bank Charges
		Less than 20			$ 0.10 per cheque
		20-39					$ 0.08 per cheque
		40-59					$ 0.06 per cheque
		60 or more				$ 0.04 per cheque 
	*/

	// variable for storing variable bank charges per cheque
	float cost_per_cheque;

	// determine the rate of bank charges per cheque
	if ( no_of_cheques < 20 ) {
		cost_per_cheque = 0.10;
	} else if ( no_of_cheques >= 20 && no_of_cheques <= 39 ) {
		cost_per_cheque = 0.08;
	} else if ( no_of_cheques >= 40 && no_of_cheques <= 59 ) {
		cost_per_cheque = 0.06;
	} else if ( no_of_cheques >= 60 ) {
		cost_per_cheque = 0.04;
	}
	
	// calculate the totals
	float total_variable, total_charges;

	total_variable = no_of_cheques * cost_per_cheque;
	total_charges = FIXED_BANK_CHARGES + total_variable;

	// display result to the user
	cout << fixed << showpoint << setprecision(2);
	cout << "\nBank Charges (Fixed):\t\t$ " << FIXED_BANK_CHARGES << endl;
	cout << "Bank Charges (Variable):\t$ " << total_variable << "\t ($ " << cost_per_cheque << " / cheque)" << endl << endl;
	cout << "Total Charges:\t\t\t$ " << total_charges << endl;

	return 0;
}