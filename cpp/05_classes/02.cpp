/*
	Add two matrices
*/

#include <iostream>

int main() {
	const int rows = 2;
	const int cols = 4;

	int matrix_a[rows][cols] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8}
	};

	int matrix_b[rows][cols] = {
		{11,12,13,14},
		{15,16,17,18}
	};

	int matrix_c[rows][cols];

	// add matrices and save in matrix_c
	for(int row = 0; row < rows; row++) {
		for(int col = 0; col < cols; col++) {
			matrix_c[row][col] = matrix_a[row][col] + matrix_b[row][col];

			// display the results
			std::cout << matrix_c[row][col] << "\t";
		}
		std::cout << std::endl;
	}
}