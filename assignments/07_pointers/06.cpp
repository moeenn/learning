#include <iostream>
using namespace std;

void swap(int* num1, int* num2) {
	int tmp = *num1;
	*num1 = *num2;
	*num2 = tmp; 
}

int main() {
	int a = 30;
	int b = 60;

	swap(&a, &b);
	cout << "A: " << a << "\nB: " << b << endl;
}