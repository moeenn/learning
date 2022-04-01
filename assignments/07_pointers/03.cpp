#include <iostream>
using namespace std;

void swap(int* num1, int* num2) {
	int tmp = *num1;
	*num1 = *num2;
	*num2 = tmp; 
}

int main() {
	int a,b,c,d,e;
	int count = 5;
	int* numbers[count] = { &a, &b, &c, &d, &e };

	// take input from user
	for(int i = 0; i < count; i++) {
		cout << "Enter Number: ";
		cin >> *numbers[i];
	}

	// sort: descending
	for(int permutation = 0; permutation < count; permutation++) {
		for(int i = 0; i < count - 1; i++) {
			if(*numbers[i] < *numbers[i+1]) {
				swap(*numbers[i], *numbers[i+1]);
			} 
		}
	}
	
	// print array
	cout << "You Entered: [ ";
	for(int i = 0; i < count; i++) {
		cout << *numbers[i] << " ";
	}
	cout << "]\n";	

	cout << "Largest Value: " << *numbers[0] << endl;

	return 0;
}
