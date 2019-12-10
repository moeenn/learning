#include <iostream>
using namespace std;

void display(int matrix[], int size);
void add_matrices(int matrix_a[], int matrix_b[], int matrix_c[], int size);

int main() {
	const int size = 5;
	int matrix_a[size] = {1,2,3,4,5};
	int matrix_b[size] = {100,101,102,103,104};

	display(matrix_a, 5);
	display(matrix_b, 5);

	int matrix_c[size];
	add_matrices(matrix_a, matrix_b, matrix_c, size);
	display(matrix_c, size);
}

void display(int matrix[], int size) {
	for(int i = 0; i < size; i++) {
		cout << matrix[i] << "\t";
	}
	cout << "\n";
}

void add_matrices(int matrix_a[], int matrix_b[], int matrix_c[], int size) {
	for(int i = 0; i < size; i++) {
		matrix_c[i] = matrix_a[i] + matrix_b[i];
	}
}

