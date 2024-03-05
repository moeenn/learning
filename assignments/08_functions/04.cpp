#include <iostream>
using namespace std;

void triangle(int size) {
	for(int row = 0; row < size; row++) {
		for(int col = 0; col < size; col++) {
			if(row == col || col < row) {
				cout << '*';
			} else {
				cout << ' ';
			}
		}
		cout << '\n';
	}
}

int main() {
	triangle(5);
}







