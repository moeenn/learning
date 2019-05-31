# include <iostream>
# include <iomanip>

using namespace std;

int main() {
	// ask the user to enter three test scores
	cout << "Please enter three numbers: ";
	float scores[3] = {};
	cin >> scores[0] >> scores[1] >> scores[2];

	// check if only positive numbers are entered
	if ( scores[0] < 0 || scores[1] < 0 || scores[2] < 0 ) {
		cout << "Please run the program again and enter valid positive scores." << endl;
		return 0;
	}

	// find the average 
	float avg;
	avg = ( scores[0] + scores[1] + scores[2] ) / 3;

	// check if perfect score 100
	cout << fixed << showpoint << setprecision(2);
	cout << "Your average scores are " << avg << endl;

	if ( avg > 100.0 ) {
		cout << "Congratulations! That's a perfect score!" << endl;
	}

	return 0;
}