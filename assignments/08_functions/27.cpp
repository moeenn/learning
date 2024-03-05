#include <iostream>
using namespace std;

#define ROWS 5
#define COLS 9
#define MID COLS / 2
#define UNITY 1

void pascal_matrix(int matrix[][COLS]) {
	// set the first row
	matrix[0][MID] = UNITY;

	for(int row = 1; row < ROWS; row++) {
		for(int col = 0; col < COLS; col++) {
			if(col == 0) {							// first column calculation
				matrix[row][col] = matrix[row-1][col+1];
			} else if(col == COLS-1) {				// last column calculation
				matrix[row][col] = matrix[row-1][col-1];
			} else {
				matrix[row][col] = matrix[row-1][col-1] + matrix[row-1][col+1];
			}
		}
	}
}

void display(int matrix[][COLS]) {
	for(int row = 0; row < ROWS; row++) {
		for(int col = 0; col < COLS; col++) {
			int element = matrix[row][col];
			if(element == 0) {
				cout << "  ";
			} else {
				cout << element << " ";
			}
		}
		cout << "\n";
	}
}


int main() {
	// initialize zero matrix
	int matrix[ROWS][COLS] = {0};
	pascal_matrix(matrix);
	display(matrix);
}



















