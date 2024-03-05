#include <iostream>
#include <cmath>
using namespace std;

float input(string message) {
	cout << message;
	float n;
	cin >> n;
	return n;
}

double power(float num, int pow) {
	double result = num;
	for(int i = 1; i < pow; i++) {
		result *= num;
	}
	return result;
}

int main() {
	float num = input("Enter Float: ");
	float pow = (int) input("Enter Int: ");
	cout << "Result: " << power(num, pow) << endl;
}







