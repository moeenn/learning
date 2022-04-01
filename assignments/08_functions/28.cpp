#include <iostream>
using namespace std;

void Large(int* a, int* b) {
	if(*a > *b) {
		*a *= *a;
	} else {
		*b *= *b;
	}
}

int Sum(int num) {
	int sum = 0;

	while(num > 0) {
		sum += num % 10;
		num /= 10;
	}

	return sum;
}

int input() {
	cout << "Enter Number: ";
	int num;
	cin >> num;
	return num;
}

int main() {
	int a = input();
	int b = input();

	Large(&a, &b);

	cout 	<< "A: " << a << endl
			<< "B: " << b << endl;

	cout 	<< "Sum A: " << Sum(a) << endl
			<< "Sum B: " << Sum(b) << endl;
}



















