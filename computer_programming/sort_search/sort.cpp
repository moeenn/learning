#include <iostream>
using namespace std;

void getArray(int arr[], int size);
void printArray( int arr[], int size );
void sortArray(int arr[], int size);

int main() {
	const int SIZE = 5;
	int myArray[SIZE];
	getArray(myArray, SIZE);
	sortArray(myArray, SIZE);
	printArray(myArray, SIZE);
	return 0;
}

void getArray(int arr[], int size) {
	cout << "Enter " << size << " numbers: " << endl;
	for( int i=0; i<size; i++ ) {
		cin >> arr[i];
	}
}

void printArray( int arr[], int size ) { 
	for( int i=0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

// bubble sort (ascending)
void sortArray(int arr[], int size) {
	for( int a = 1; a < size; a++ ) {
		for( int i=0; i < size-1; i++ ) {
			// flip the operator to sort descending
			if( arr[i] > arr[i+1] ) {
				// swap places
				int c;
				c = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = c;
			}
		}
	}
}