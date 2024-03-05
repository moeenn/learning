# include <iostream>

using namespace std;

int main() {
	// ask user for input
	cout << "Please enter a number between 1 and 10 inclusive: ";
	short num;
	cin >> num;

	// check if input is correct
	if (num > 10 || num < 0) {
		cout << "Invalid Input" << endl;
		return 1;
	}


	// convert input to roman numerals
	switch(num) {
		case 1:
			cout << "I" << endl;
			break;
		case 2:
			cout << "II" << endl;
			break;
		case 3:
			cout << "III" << endl;
			break;
		case 4:
			cout << "IV" << endl;
			break;
		case 5:
			cout << "V" << endl;
			break;			
		case 6:
			cout << "VI" << endl;
			break;
		case 7:
			cout << "VII" << endl;
			break;
		case 8:
			cout << "VIII" << endl;
			break;
		case 9:
			cout << "IX" << endl;
			break;
		case 10:
			cout << "X" << endl;
			break;												
		default:
			cout << "Invalid Input" << endl;		
	}

	return 0;
}
