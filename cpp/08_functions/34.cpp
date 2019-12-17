#include <iostream>
using namespace std;

void display(int matrix[][5], int size);
void times2(int matrix[][5], int size);

int main() {
	int matrix[5][5] = {
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15},
		{16,17,18,19,20},
		{21,22,23,24,25}
	};

	display(matrix, 5);
	times2(matrix, 5);
	display(matrix, 5);
}

void display(int matrix[][5], int size) {
	for(int row = 0; row < size; row++) {
		for(int col = 0; col < size; col++) {
			cout << matrix[row][col] << "\t";
		}
		cout << "\n";
	}
}

void times2(int matrix[][5], int size) {
	for(int row = 0; row < size; row++) {
		for(int col = 0; col < size; col++) {
			matrix[row][col] *= 2;
		}
	}
}
