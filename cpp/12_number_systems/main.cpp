#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

// split the digits
std::vector<uint> split(uint num) {
	std::vector<uint> result;
	uint digit;

	while(num > 0) {
		digit = num % 10;
		num /= 10;
		result.push_back(digit);
	}

	return result;
}

// convert number of any base to decimal
uint convert_decimal(const uint& base, const std::vector<uint>& digits) {
	uint index = 0;
	uint result = 0;

	for(const uint& n : digits) {
		result += n * std::pow(base, index);
		index++;
	}

	return result;
}

// driver function
uint binary_to_decimal(const uint& base, const uint& number) {
	const std::vector<uint> digits = split(number);
	return convert_decimal(base, digits);
}

struct test_case {
	uint base;
	uintmax_t input, output;
};

const test_case test_cases[] = {
	{ 2, 	1101, 			13 },
	{ 2,	11011, 			27 },
	{ 2,	111101, 		61 },
	{ 2,	101100, 		44 },
	{ 2,	100101, 		37 },
	{ 2,	1101111, 		111 },
};

void test_binary_to_decimal() {
	for(const auto& test : test_cases ) {
		std::cout 	<< "[debug] base: " 	<< test.base
					<< "\t\tInput: " 		<< test.input
					<< "\t\tdecimal: " 		<< test.output << "\n";

		assert(binary_to_decimal(test.base, test.input) == test.output);
	}
	std::cout << "[debug] All Tests Passed :) \n";
}

int main() {
	test_binary_to_decimal();
}