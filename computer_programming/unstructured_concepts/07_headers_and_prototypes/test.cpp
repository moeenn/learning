# include <iostream>
# include "functions.h"

using namespace std;
/*
	Function prototypes:
	The compiler reads the source code line by line. If a function is defined after the main() function
	the compiler would have not idea what it is and will return an error saying that the function is 
	undefined. In order to get around this problem we use prototypes.

	A prototype of a function tells the compiler that the function is defined somewhere else in the source-code.
	In the protype we simply tell the following:
	1. return type of the function
	2. name of the function
	3. function arguments
	
*/

int areaRectangle(int length, int width);
float areaTriangle(int length, int height);

int main() {
	cout << "Please enter Length and Width of Rectangle: ";
	int lenght, width;
	cin >> lenght >> width;
	cout << "Area of Rectangle: " << areaRectangle(lenght, width) << endl;

	cout << "Enter Lenght and Height of Triangle: ";
	cin >> lenght >> width;
	cout << "Area of Triangle: " << areaTriangle(lenght, width) << endl;

	return 0;
}