#include <iostream>
#include <cstring>
using namespace std;

/*
	Since we don't know the number of digits the user will enter, string is 
	a better option than a number array. We don't need to specify its size 
	in advance. 

	Furthermore, the size/length of a string can be found easily
	using 'length' or 'size' string methods. We don't need to use any loops.
*/

int main() {
	cout << "Please enter a number: ";
	string numbers;
	cin >> numbers;

	cout << "Number of Digits: " << numbers.length() << endl;	
	return 0;
}