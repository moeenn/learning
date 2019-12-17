/*
	Make a calculator using Classes
*/

#include <iostream>

class Calculator {
private:
	int num1, num2;

public:
	Calculator(int num1, int num2) {
		this->num1 = num1;
		this->num2 = num2;
	}

	int add() {
		return num1 + num2;
	}

	int subtract() {
		return num1 - num2;
	}

	int multiply() {
		return num1 * num2;
	}

	int divide() {
		return num1 / num2;
	}
};

int main() {
	Calculator calc = Calculator(300,10);
	std::cout << "Add:" << calc.add() << std::endl;
	std::cout << "Subtract:" << calc.subtract() << std::endl;
	std::cout << "Multiply:" << calc.multiply() << std::endl;
	std::cout << "Divide:" << calc.divide() << std::endl;
}