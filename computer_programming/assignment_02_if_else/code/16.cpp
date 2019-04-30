# include <iostream>
using namespace std;

int main() {
	// display the menu to the user
	cout << "Geometry Calculator!" << endl << endl;
	cout << "1. Calculate the Area of a Circle" << endl;
	cout << "2. Calculate the Area of a Rectangle" << endl;
	cout << "3. Calculate the Area of a Triangle" << endl;
	cout << "4. Quit" << endl << endl;
	cout << "Enter your choice (1-4): ";

	// take the input from the user
	int choice;
	cin >> choice;

	// See note below
	const double pi = 3.14159;

	// determine what action need to be performed for the input
	switch ( choice ) {		
		case 1: 
			// user wants the area of circle
			cout << "Please enter the radius of the circle: ";
			float radius;
			cin >> radius;

			// input validation
			// radius cannot be negative
			if ( radius < 0 ) {
				cout << "Invalid input! Value of Radius cannot be negative." << endl;
				return 1;
			}


			// define value of pi
			// const double pi = 3.14159;
			// Note: This is the logical place to define the value of Pi
			// But I get 'crosses initialization' errors when I define it in this scope!
			// I have solved this problem by defining the value of pi outside the switch statement.

			// calculate area of circle
			// Area = Pi * r^2
			double area_circle;
			area_circle = pi * radius * radius;
			cout << "Area of Circle:\t" << area_circle << endl;
			break;

		case 2:
			// user wants the area of a rectangle
			cout << "Please enter the Length and Width of the Rectangle" << endl;
			cout << "Format: Length Width : ";

			float length, width;
			cin >> length >> width;

			// Input validation
			// entered lenghts cannot be negative
			if ( length < 0 || width < 0 ) {
				cout << "Invalid input! Values of Length or Width cannot be negative." << endl;
				return 1;
			}

			// calculate area of rectangle
			// area = length * width
			float area_rectangle;
			area_rectangle = length * width;

			// display results to user
			cout << "Area of Rectangle:\t" << area_rectangle << endl;
			break;

		case 3:
			// user wants the area of triangle
			cout << "Please enter the Base and Height of Triangle" << endl;
			cout << "Format: Base Height : ";

			float base, height;
			cin >> base >> height;

			// input validation
			// entered lengths cannot be negative
			if ( base < 0 || height < 0 ) {
				cout << "Invalid input! Values of Base or Height cannot be negative." << endl;
				return 1;
			}	

			// calculate area of triangle
			// area = 0.5 * base * height
			float area_triangle;
			area_triangle = 0.5 * base * height;

			// display results to user
			cout << "Area of Triangle:\t" << area_triangle << endl;
			break;

		case 4:
			cout << "Quiting program ..." << endl;
			return 0;

		default:
			cout << "Invalid Selection! Please enter number between 1 & 4 inclusive.";
			return 1;	
	}

	return 0;
}