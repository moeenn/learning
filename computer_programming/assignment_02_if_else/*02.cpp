# include <iostream>
using namespace std;

int main() {
	// ask the user for a number
	cout << "Please enter a number: " << flush;
	float number;
	cin >> number;

	// check the type of number: Positive or Negative
	if ( number >= 0 ) {
		cout << "The number is Positive" << endl;
	} else {
		cout << "The number is Negative" << endl;
	}

	// check if number is desimal or integer
	if ( number % 1 != 0 ) {
		cout << "Number is a floating point (i.e. decimal) number." << endl;
	} else {
		cout << "Number is an Integer" << endl;
	}

	return 0;
}