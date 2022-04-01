# include <iostream>
# include <math.h>

using namespace std;

int main()
{
	// read the length and width of the triangle from the user
	float length, width;
	cout << "Please the dimentions of the triangle" << endl;
	cout << "( Format: Length Width ): ";
	cin >> length >> width;

	// read the radius of circle from the user
	float radius;
	cout << endl << "Please enter the radius of the circle: ";
	cin >> radius;

	// calculate area of the triangle
	float triangle_area;
	triangle_area = 0.5 * length * width;

	// calculate the third side of the triangle using Pythagoras theorem
	// c² = a² + b²
	// a = length
	// b = width
	// c = c_side
	float c_side;
	c_side = sqrt( length*length + width*width );


	// calculate perimeter of triangle
	float triangle_perimeter;
	triangle_perimeter = length + width + c_side;

	// calculate area of the circle
	float circle_area;
	float pi = 3.142;
	circle_area = pi * radius * radius;

	// calculate perimeter of circle
	float circle_perimeter;
	circle_perimeter = 2 * pi * radius;

	// display the results to the user
	cout << endl;
	cout << "Area of Triangle:\t" << triangle_area << endl;
	cout << "Perimeter of Triangle:\t" << triangle_perimeter << endl;
	cout << "Area of Circle:\t\t" << circle_area << endl;
	cout << "Perimeter of Circle:\t" << circle_perimeter << endl;

	// end program
	return 0;

	// Note: This program has no input controls. The user can enter negative values and alphabets.
	// I don't know how to setup input controls yet
}