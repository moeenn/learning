#include <iostream>
#include <cmath>
using namespace std;

int input(string message) {
	cout << message;
	int n;
	cin >> n;
	return n;
}

int fib(int n) {
	if((n == 1) || (n == 0)) {
		return(n);
	} else {
		return (fib(n - 1) + fib(n - 2));
	}
}

int main() {
	int n = input("Enter Number: ");
	int i = 0;

	cout << "\nFibonnaci Series : ";
	while(i < n) {
		cout << " " << fib(i);
		i++;
	}
}







