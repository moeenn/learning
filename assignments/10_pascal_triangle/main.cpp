#include <iostream>

long long int factorial(unsigned int n) {
	if(n == 0) {
		return 1;
	}
	return n * factorial(n - 1);
}

// NCr = N! / [ r! . (N-r)! ]
long long int combination(unsigned int N, unsigned int r) {
	return factorial(N) / (factorial(r) * factorial(N-r));
}

void pascal_triangle(unsigned int rows) {
	for(unsigned int row = 0; row < rows; row++) {
		for(unsigned int col = 0; col < row+1; col++) {
			std::cout << combination(row, col) << '\t';
		}
		std::cout << std::endl;
	}
}

int main(int argc, char* argv[]) {
	std::cout << "[rows]: ";
	unsigned int rows;
	std::cin >> rows;

	pascal_triangle(rows);
}