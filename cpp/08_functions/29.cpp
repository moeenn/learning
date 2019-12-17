#include <iostream>
using namespace std;

void input(int array[], int size) {
	cout << "Enter Numbers: ";
	for(int i = 0; i < size; i++) {
		cin >> array[i];
	}
}

int min(int array[], int size) {
	int min_val = array[0];

	for(int i = 1; i < size; i++) {
		if(array[i] < min_val) {
			min_val = array[i];
		}
	}
	return min_val;
}

int main() {
	const int size = 5;
	int nums[size];

	input(nums, size);
	cout << "Minumum Value: " << min(nums, size) << endl;
}
