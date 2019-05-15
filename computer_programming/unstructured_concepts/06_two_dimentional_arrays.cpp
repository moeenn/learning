# include <iostream>
using namespace std;

int main() {

/*
	You can consider a multi-dimentional array to a table.
	But, It may be more appropriate to think of it as an array of arrays
*/

	int rows = 3;
	int cols = 2;

	// define array
	string cars[rows][cols] = {
		{"suzuki", "mehran"},
		{"corolla", "honda"},
		{"mecedez", "audi"}
	};	// notice these line endings


	// print out the elements of the array in order
	for (int a=0; a < rows; a++ ) {
		for( int b=0; b < cols; b++ ) {
			cout << cars[a][b] << " ";
		}

		cout << endl; 	// end the line after each row has been printed
	}

	return 0;
}