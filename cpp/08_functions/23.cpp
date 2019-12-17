#include <iostream>
using namespace std;

void input(int array[], int size) {
	cout << "Enter Numbers: ";
	for(int i = 0; i < size; i++) {
		cin >> array[i];
	}
}

int max(int array[], int size) {
	int max_val = array[0];

	for(int i = 1; i < size; i++) {
		if(array[i] > max_val) {
			max_val = array[i];
		}
	}
	return max_val;
}

int main() {
	const int size = 5;
	int nums[size];

	input(nums, size);
	cout << "Minumum Value: " << max(nums, size) << endl;
}
