#include <iostream>
#include <cassert>
#include <vector>

// enable debug mode
#define DEBUG 1

#if DEBUG == 1
#define LOG(msg) std::cout << "[DEBUG]\t\t" << msg << std::endl
#else
#define LOG(msg)
#endif

bool is_prime(const unsigned int& number) {
	if (number == 1) return false;

	for(int i = 2; i <= number / 2; i++)
		if(number % i == 0) return false;

	return true;
}

#if DEBUG == 1
void test_is_prime() {
	assert(is_prime(1) == false);
	assert(is_prime(2) == true);
	assert(is_prime(4) == false);
	assert(is_prime(10) == false);
	assert(is_prime(13) == true);
	assert(is_prime(51) == false);
	assert(is_prime(101) == true);
	LOG("is_prime() :: All Tests Passed!");
}
#endif

// break composite number into prime factors
std::vector<unsigned int> prime_factors(int number) {
	std::vector<unsigned int> retval;

	for(int i = 2; i < number; i++) {
		while(true) {
			if(number % i == 0) {
				retval.push_back(i);
				number /= i;
			} else {
				break;
			}
		}
	}

	return retval;
}

#if DEBUG == 1
void test_prime_factors() {
	struct test_case {
		unsigned int input;
		std::vector<unsigned int> output;
	};

	const unsigned int total_test_cases = 4;

	test_case test_cases[total_test_cases] = {
		36, 	{2, 2, 3, 3},
		315, 	{3, 3, 5, 7},
		300, 	{2, 2, 3, 5, 5},
		1513,	{17, 89}
	};

	// we test for two things
	// 1. all the factors are prime numbers
	// 2. the product of all factors is the original number
	// TODO: the tests should ideally be atomic in nature
	for(auto& test : test_cases) {
		unsigned int product = 1;

		for(int i = 0; i < test.output.size(); i++) {
			assert(is_prime(test.output.at(i)));
			product *= test.output.at(i);
		}

		assert(product == test.input);
	}

	LOG("prime_factors() :: All Tests Passed!");
}
#endif

// return a fixed number of prime numbers
std::vector<unsigned int> prime_numbers(const unsigned int& limit) {
	std::vector<unsigned int> retval;
	unsigned int factor = 2;
	unsigned int count = 0;

	while(count < limit) {
		if(is_prime(factor)) {
			retval.push_back(factor);
			count++;
		}
		factor++;
	}

	return retval;
}

#if  DEBUG == 1
void test_prime_numbers() {
	const unsigned int test_cases = 10;

	// first 10 prime numbers
	unsigned int verified_prime_numbers[test_cases]
		= {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};

	// generated prime numbers
	std::vector<unsigned int> generated_prime_numbers = prime_numbers(test_cases);

	for(int i = 0; i < test_cases; i++)
		assert(generated_prime_numbers[i] == verified_prime_numbers[i]);

	LOG("prime_numbers() :: All Tests Passed!");
}
#endif

int main() {
	#if DEBUG == 1
		test_is_prime();
		test_prime_numbers();
		test_prime_factors();
	#endif

	// auto factors = prime_factors(36);
	// for(auto& factor : factors) std::cout << factor << "\t";
}