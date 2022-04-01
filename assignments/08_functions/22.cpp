#include <iostream>
using namespace std;

long int input(string message) {
	cout << message;
	long int n;
	cin >> n;
	return n;
}

int digits(long int n) {
	int digits = 0;

	while(n > 0) {
		n /= 10;
		digits++;
	}
	return digits;
}

int main() {
	long int n = input("Enter Number: ");
	cout << "Total Digits: " << digits(n) << endl;
}
