#include <iostream>
using namespace std;

double Area(double radius);

int main() {
	cout << "Enter the Radius Of Circle: ";
	double radius;
	cin >> radius;

	cout << "The Area of Circle is " << Area(radius) << endl;
}

double Area(double radius) {
	double pi = 3.142;
	return pi * radius * radius;
}
