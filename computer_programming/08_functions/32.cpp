#include <iostream>
using namespace std;

void display(int matrix[], int size);
void Change(int matrix[], int size);

int main() {
	const int size = 5;
	int matrix[size] = {20, 12, 24, 35, 40};

	display(matrix, size);
	Change(matrix, size);
	display(matrix, size);
}

void display(int matrix[], int size) {
	for(int i = 0; i < size; i++) {
		cout << matrix[i] << "\t";
	}
	cout << "\n";
}

void Change(int matrix[], int size) {
	for(int i = 0; i < size; i++) {
		if(matrix[i] % 5 == 0) {
			matrix[i] /= 5;
		} else {
			matrix[i] *= 2;
		}
	}
}
