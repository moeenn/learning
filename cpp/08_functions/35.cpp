#include <iostream>
using namespace std;

double MAX(double x, double y);

int main() {
	double x, y;
	cout << "Enter X: ";
	cin >> x;

	cout << "Enter Y: ";
	cin >> y;

	cout << "Max: " << MAX(x, y) << endl;
}

double MAX(double x, double y) {
	if(x > y) {
		return x;
	}
	return y;
}
