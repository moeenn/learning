#include <iostream>
#include <ctime>
using namespace std;

void getArray(int array[], int &size ) {
	srand(time(0));

	for( int index = 0; index < size; index++ ){
		// random num between 1 and 100
		unsigned int num = rand() % 101;
		array[index] = num;
	}
} 

void printArray(int array[], int &size) {
	for( int index = 0; index < size; index++ ) {
		cout << array[index] << " ";
	}
}

int search_linear(int array[], int &size, int &query ) {
	for( int index = 0; index < size; index++ ) {
		if( query == array[index] ) {
			return index;
		}
	}
	return -1;		// query not found
}

void bubbleSort(int array[], int &size) {
	for( int cycle = 0; cycle < size; cycle++ ) {
		for( int index=0; index < size -1; index++ ) {
			// sort ascending
			if( array[index] > array[index+1] ) {
				// swap places between indices
				int tmp = array[index];
				array[index] = array[index+1];
				array[index+1] = tmp;
			}
		}	
	}
}

int search_binary(int array[], int &size, int &query) {
	// range in terms of array index
	int range_start = 0;
	int range_end = size-1;

	while( range_start <= range_end ) {
		int mid = (range_end + range_start) / 2;

		if( query == array[mid] ) {
			return mid;
		} else if( query > array[mid] ) {
			range_start = mid+1;
		} else if( query < array[mid] ) {
			range_end = mid-1;
		}
	}
	return -1;		// query not found
}


int main() {
	int size = 40;
	int myArray[size] = {};
	getArray(myArray, size);

	cout << "\nOriginal List \t";
	printArray(myArray, size);

	bubbleSort(myArray, size);

	cout << "\nSorted List \t";
	printArray(myArray, size);

	cout << "\nSearch \t\t";
	int query;
	cin >> query;

	int result = search_binary(myArray, size, query);

	if( result == -1 ) {
		cerr << "\nSearch term not found" << endl;
	} else {
		cout << "\nSearch term found at position " << result+1 << endl;
	}
	return 0;
}

