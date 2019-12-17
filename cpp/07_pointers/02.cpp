#include <iostream>
using namespace std;

// prototypes
int input();
void swap(int*, int*);

int main() {
	int num1 = input();
	int num2 = input();

	cout 	<< "Num 1: " << num1 << endl
			<< "Num 2: " << num2 << endl;

	swap(&num1, &num2);

	cout 	<< "Num 1: " << num1 << endl
			<< "Num 2: " << num2 << endl;

	return 0;
}

int input() {
	int num;

	cout << "Enter Number: ";
	cin >> num;

	return num;
}

void swap(int* num1, int* num2) {
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}