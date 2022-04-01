#include <iostream>
#include <cmath>
using namespace std;

int input(string message) {
	cout << message;
	int n;
	cin >> n;
	return n;
}

float tax(int salary) {
	int untaxed_salary = salary;
	float tax;

	// first 1000 - no tax
	if(untaxed_salary > 1000) {
		untaxed_salary -= 1000;
	} else if(untaxed_salary < 1000) {
		return 0;
	}

	// second 1000 - 5%
	if(untaxed_salary > 1000) {
		tax = 0.05 * 1000;
		untaxed_salary -= 1000;
	} else if(untaxed_salary < 1000) {
		tax = 0.05 * untaxed_salary;
		return tax;
	}

	// third 1000 - 4%
	if(untaxed_salary > 1000) {
		tax += 0.04 * 1000;
		untaxed_salary -= 1000;
	} else if(untaxed_salary < 1000) {
		tax += 0.04 * untaxed_salary;
		return tax;
	}

	// above 3000 - 3%
	tax += 0.03 * untaxed_salary;
	return tax;

}

int main() {
	int salary = input("Enter Salary: ");
	cout << "Tax: " << tax(salary) << endl;
}







