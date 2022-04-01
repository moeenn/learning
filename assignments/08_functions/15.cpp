#include <iostream>
#include <cmath>
using namespace std;

float input(string message) {
	cout << message;
	float n;
	cin >> n;
	return n;
}

float Distance(int x1, int y1, int x2, int y2) {
	// horizontal and vertical distance
	int h_dist, v_dist;

	// set horizontal distance
	if(x1 > x2) {
		h_dist = x1 - x2;
	} else {
		h_dist = x2 - x1;
	}

	// set vertical distance
	if(y1 > y2) {
		v_dist = y1 - y2;
	} else {
		v_dist = y2 - y1;
	}


	// hypotenuse of triangle i.e. distance
	float result = sqrt(pow(h_dist, 2) + pow(v_dist, 2));
	return result;
}

int main() {
	int x1 = input("X1: ");
	int y1 = input("Y1: ");
	int x2 = input("X2: ");
	int y2 = input("Y2: ");

	cout << "Distance: " << Distance(x1,y1,x2,y2) << endl;
}







