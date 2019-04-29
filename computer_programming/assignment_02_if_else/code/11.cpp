# include <iostream>
using namespace std;

int main() {
	// define strength of gravity
	const float gravity = 9.8;

	// ask user for object mass
	cout << "Please enter the object's mass in kilograms: ";
	float mass;
	cin >> mass;

	// calculate weight
	float weight;
	weight = mass * gravity;

	// input validations 
	// mass cannot be nagative
	if ( mass < 0 ) {
		cout << "The mass of object cannot be nagative!" << endl;
		return 1;
	}

	// display results to user
	cout << "The weight of the object is " << weight << " Newtons."<< endl;

	if ( weight > 1000 ) {
		cout << "The object is too heavy!" << endl;
	} else if ( weight < 10 ) {
		cout << "The object is too light." << endl;
	}

	return 0;
}