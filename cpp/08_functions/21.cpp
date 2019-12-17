#include <iostream>
using namespace std;

int input(string message) {
	cout << message;
	int n;
	cin >> n;
	return n;
}

float AVG(int runs, int balls) {
	float avg = (float) (runs * 60) / balls;
	return avg;
}

int main() {
	int balls = input("Enter Total Balls: ");
	int runs = input("Enter Total Runs: ");

	cout << "Average: " << AVG(runs, balls) << endl;
}
