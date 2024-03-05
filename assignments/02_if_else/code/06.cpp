# include <iostream>
using namespace std;

int main() {
	// ask the user for total numbers
	cout << "Please enter your total marks obtained: ";
	float marks;
	cin >> marks;

	// total marks should be between 0 and 100 inclusive
	if ( marks > 100 ) {
		cout << "Total marks cannot be more than 100.";
		return 1;
	} else if ( marks < 0 ) {
		cout << "Total marks cannot be less than 0.";
		return 1;
	}

/*
	Grading Scheme
	A >= 90
	B >= 80
	C >= 70
	D >= 40
	F < 40
*/

	// Display the grade to user
	if ( marks < 40 ) {
		cout << "Grade: F" << endl;	
	} else if ( marks < 70 ) {
		cout << "Grade: D" << endl;
	} else if ( marks < 80 ) {
		cout << "Grade: C" << endl;
	} else if ( marks < 90 ) {
		cout << "Grade: B" << endl;
	} else if ( marks <= 100 ) {
		cout << "Grade: A" << endl;
	}

	return 0;
}