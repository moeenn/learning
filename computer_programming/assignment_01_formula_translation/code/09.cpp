# include <iostream>

// For calculating the square root of number we need to use the function sqrt() which has been defined in math.h header file.
# include <math.h>

using namespace std;

int main()
{
	// Define the variables for storing the coordinates of two points
	int x1, y1, x2, y2;

	// Take the coordinates of first point from the user and assign them to our variables
	cout << "Please enter the coordinates of Point-1 \n( input format: x y ): ";
	cin >> x1 >> y1;

	// Now take the coordinates of the second point and assign them to our variables
	cout << "\nPlease enter the coordinates of Point-2 \n( input format: x y ): ";
	cin >> x2 >> y2;

	// Note: The formula for calculating distance between 2 point coordinates is :
	// [ (x2 - x1)^2 + (y2 - y1)^2 ]^1/2

	// we will need some more variables during runtime to simplify things
	// h_dist = horizontal distance = change in x between points
	// v_dist = vertical distance = change in y between points
	float h_dist, v_dist;

	h_dist = x2 - x1;
	v_dist = y2 - y1;

	// Let's calculate the answer and neatly display it to user
	cout << "\nThe distance between points is: " << sqrt( (h_dist*h_dist) + (v_dist*v_dist) ) << endl;

	// end program
	return 0;
}