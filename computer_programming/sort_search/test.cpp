#include <iostream>
using namespace std;

// function prototypes
void getArray(int arr[], int size);
void printArray( int arr[], int size );
void sortArray(int arr[], int size);
int searchArray_linear(int arr[], int size, int query );
int searchArray_binary(int arr[], int size, int query );

int main() {}
	const int SIZE = 5;
	int myArray[SIZE];

	getArray(myArray, SIZE);
	sortArray(myArray, SIZE);
	printArray(myArray, SIZE);

	while(true) {
		cout << endl << "Enter number to search: ";
		int search;
		cin >> search;
		int result = searchArray_binary(myArray, SIZE, search );		

		if(result == -1 ) {
			cout << "The Number was not found." << endl;
		} else {
			cout << "The number was found at index " << result << endl;
			break;
		}
	}
	return 0;	
}

// user functions
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

// linear search
int searchArray_linear(int arr[], int size, int query ) {
	bool flag = false;
	for( int i=0; i < size; i++ ) {
		if( arr[i] == query ) {
			return i;	
		}
	}
	return -1;
}

// binary search 
int searchArray_binary(int arr[], int size, int query ) {
	// Caution: this function requires a sorted (ascending) array
	int startIndex = 0;
	int endIndex = size-1;

	while( startIndex <= endIndex ) {
		int midIndex = (startIndex + endIndex) / 2;
		if( arr[midIndex] == query) {
			return midIndex;
		} else if ( arr[midIndex] < query ) {
			startIndex = midIndex + 1;
		} else if ( arr[midIndex] > query) {
			endIndex = midIndex - 1;
		}
	}
	return -1;
} 