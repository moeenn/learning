# include <iostream>
# include <cmath>

using namespace std;

int main() {
	cout << "Please enter five numbers: ";
	int size = 5;
	float numbers[size] = {};

	for( int i = 0; i < size; i++ ) {
		cin >> numbers[i];
	}

	double total = 0;
	
	for( int i=0; i < size; i++ ) {
		total += numbers[i];
	}

	double avg;
	avg = total / size;

	cout << "The average value is " << avg << endl;
	return 0;
}