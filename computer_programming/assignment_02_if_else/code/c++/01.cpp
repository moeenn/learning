# include <iostream>
using namespace std;

int main() {
	cout << "Please enter a number: ";
	long int num;
	cin >> num;

	if( num % 2 == 1 ) {
		cout << "Odd Number" << endl;
	} else {
		cout << "Even Number" << endl;
	}

	return 0;
}