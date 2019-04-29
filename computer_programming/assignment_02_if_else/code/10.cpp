# include <iostream>
using namespace std;

int main() {
	// ask user for date
	cout << "Please enter the date \n(Format: dd MM YY): ";
	int day, month, year;
	cin >> day >> month >> year;

	// input validations
	if ( day > 31 || day < 1 ) {
		cout << "Invalid date";
		return 1;
	}

	if ( month > 12 || month < 1 ) {
		cout << "Invlid date";
		return 1;
	}

	if ( year >= 100 || year < 0 ) {
		cout << "Invalid date";
		return 1;
	}


	// Magic date is when day * month = year
	// check if magic date
	if ( day * month == year ) {
		cout << "This is a magic date!" << endl;
	} else {
		cout << "This is not a magic date." << endl;
	}

	return 0;
}