# include <iostream>
# include <cmath>

using namespace std;

int main() {
	// ask the user for a number
	cout << "Please enter a number: ";
	float number;
	cin >> number;

	// check the type of number: Positive or Negative
	if ( number >= 0 ) {
		cout << "The number is a Positive ";
	} else {
		cout << "The number is a Negative ";
	}

	// check if number is decimal or integer
	// remainder function is available inside cmath library
	if ( remainder(number, 1) == 0 ) {
		cout << "Integer." << endl;
	} else {
		cout << "floating point (i.e. decimal) number." << endl;
	}

	return 0;
}