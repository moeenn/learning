# include <iostream>
using namespace std;

int main() {
	// ask the user to enter a number
	cout << "Please enter a numbers: " << flush;
	double num1;
	cin >> num1;

	// check if number is positive
	if ( num1 >= 0 ) {
		cout << "The number is positive" << endl;
	} else {
		cout << "The number is negative" << endl;
	}

	return 0;
}