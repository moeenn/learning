#include <iostream>
using namespace std;

void input(float array[], int size);
void copy(float array_a[], float array_b[], int size);
void reverse(float array_a[], int size);
void display(float array[], int size);

int main() {
	const int size = 10;
	float nums[size];
	input(nums, size);

	display(nums, size);
	reverse(nums, size);
	display(nums, size);

}

void input(float array[], int size) {
	cout << "Enter Numbers: ";
	for(int i = 0; i < size; i++) {
		cin >> array[i];
	}
}

// copy first array into second
void copy(float array_a[], float array_b[], int size) {
	for(int i = 0; i < size; i++) {
		array_b[i] = array_a[i];
	}
}

// reverse array
void reverse(float array_a[], int size) {
	float array_tmp[size];
	copy(array_a, array_tmp, size);

	// reverse the original array
	for(int i = 0; i < size; i++) {
		array_a[i] = array_tmp[size - (i+1)];
	}
}

void display(float array[], int size) {
	for(int i = 0; i < size; i++) {
		cout << array[i] << "\t";
	}
	cout << "\n";
}

