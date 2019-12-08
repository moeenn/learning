#include <iostream>
using namespace std;

void swap(int* num1, int* num2) {
	int tmp = *num1;
	*num1 = *num2;
	*num2 = tmp; 
}

int main() {
	int count = 5;
	int numbers[count] = {23, 45, 97, 17, 26};

	// sort: ascending
	for(int permutation = 0; permutation < count; permutation++) {
		for(int i = 0; i < count - 1; i++) {
			int* first = &numbers[i];
			int* second = &numbers[i+1]; 

			if(*first > *second) {
				swap(*first, *second);
			} 
		}
	}
	
	// print array
	cout << "Sorted Array (Ascending): [ ";
	for(int i = 0; i < count; i++) {
		cout << numbers[i] << " ";
	}
	cout << "]\n";	

	return 0;
}
