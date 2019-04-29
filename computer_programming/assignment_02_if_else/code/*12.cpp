# include <iostream>
# include <stdlib.h>

using namespace std;

int main() {
	int num1, num2;
	num1 = rand() % 50 + 10;
	num2 = rand() % 50 + 10;

	// display question to the user
	cout << "   " << num1 << endl;
	cout << " + " << num2 << endl;
	cout << "________" << endl;
	cout << "   ";
	int input;
	cin >> input;

	// calculate correct answer
	int answer;
	answer = num1 + num2;

	// check if entered answer is correct
	if ( input == answer ) {
		cout << "\n\nCongratulations, " << answer << " is the correct answer!" << endl;
	} else {
		cout << "\n\nUnfortunately, that is incorrect. The correct answer is " << answer << "." << endl;
	}

	return 0;
}