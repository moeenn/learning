# include <iostream>
using namespace std;

int main() {
	// ask the user for dimensions of the rectangles
	cout << "Please enter Length and Width of Rectangle 1 \n(Format: Length Width): ";
	float rectangle1[2] = {};
	cin >> rectangle1[0] >> rectangle1[1];

	// check if valid input 
	if ( rectangle1[0] < 0 || rectangle1[1] < 0 ) {
		cout << "The dimensions of rectangle cannot be negative." << endl;
		return 1;
	}

	cout << "Please enter Length and Width of Rectangle 2 \n(Format: Length Width): ";
	float rectangle2[2] = {};
	cin >> rectangle2[0] >> rectangle2[1];

	// check if valid input 
	if ( rectangle2[0] < 0 || rectangle2[1] < 0 ) {
		cout << "The dimensions of rectangle cannot be negative." << endl;
		return 1;
	}

	// calculate areas of rectangles
	float area1;
	area1 = rectangle1[0] * rectangle1[1];

	float area2;
	area2 = rectangle2[0] * rectangle2[1];

	// compare the area of rectangles
	if ( area1 > area2 ) {
		cout << "Rectangle 1 is larger than rectangle 2." << endl;
	} else if ( area2 > area1 ) {
		cout << "Rectangle 2 is larger than rectangle 1." << endl;
	} else {
		cout << "The area of two rectangles is same." << endl;
	}

	return 0;
}