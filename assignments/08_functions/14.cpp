#include <iostream>
using namespace std;

int input(string message) {
	cout << message;
	int n;
	cin >> n;
	return n;
}

bool is_even(int n) {
	return (n % 2 == 0) ? true: false;
}

int main() {
	const int size = 5;
	int numbers[size];

	for(int i = 0; i < size; i++) {
		numbers[i] = input("Enter Number: ");
	}

	for(int i = 0; i < size; i++) {
		if(is_even(numbers[i])) {
			cout << numbers[i] << " is even \n";
		} else {
			cout << numbers[i] << " is odd \n";
		}
	}
}







