#include <iostream>
#include <cmath>
using namespace std;

long int input(string message) {
	cout << message;
	long int n;
	cin >> n;
	return n;
}

long int factorial(int n) {
	long int result = 1;

	for(int i = n; i > 0; i--) {
		result *= i;
	}
	return result;
}

long int solve(int x) {
	long int result = x;

	for(int i = 2; i <= 16; i++) {
		if(i % 2 == 0) {
			result += pow(x,i) / factorial(i);
		} else {
			result -= pow(x,i) / factorial(i);
		}
	}

	return result;
}

int main() {
	long int x = input("Enter Number: ");
	cout << "Result: " << solve(x) << endl;
}







