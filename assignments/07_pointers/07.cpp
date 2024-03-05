#include <iostream>
using namespace std;

bool is_prime(int* num) {
	for(int i = 2; i <= *num/2; i++) {
		if(*num % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	cout << "Enter Number: ";
	int num;
	cin >> num;

	if(is_prime(&num)) {
		cout << "The Number is Prime \n";
	} else {
		cout << "The Number is Not Prime \n";
	}
}