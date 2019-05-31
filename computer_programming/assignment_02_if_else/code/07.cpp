# include <iostream>
using namespace std;

int main() {
	// ask user for two numbers
	cout << "Please enter two numbers: ";
	float num1, num2;
	cin >> num1 >> num2;

	// check which number is larger
	( num1 > num2 ) ? cout << num1 << " is larger than " << num2 : cout << "Number 2 (" << num2 << ") is larger than Number 1 (" << num1 << ")";

	return 0;
}