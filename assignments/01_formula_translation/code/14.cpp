# include <iostream>
# include <math.h>

using namespace std;

int main()
{
	// let the user enter the three sides of the triangle and assign them to our variables
	float a, b, c;
	cout << "Please enter the size of the three sides of the triangle" << endl;
	cout << "(Input format: 1 2 3 ): ";
	cin >> a >> b >> c;

	// let's calculate the area of this triangle
	// we are going to use Heron's formula for this purpose
	// area = 0.25 * √( (a + b + c) * (-a + b + c) * (a - b + c) * (a + b - c) )
	float area;
	area = 0.25 * sqrt( ( a + b + c ) * ( -a + b + c ) * ( a - b + c ) * ( a + b - c ) );

	// let's calculate the perimeter of the triangle
	float perimeter;
	perimeter = a + b + c;

	// display the results to the user
	cout << "Area of the Triangle: \t\t" << area << endl;
	cout << "Perimeter of the Triangle: \t" << perimeter << endl;

	// end program
	return 0;

	// Note: This program requires that we let the user enter all three sides of the triange.
	// This means that a user could enter three sides that cannot form a triangle. The Heron's formula
	// will fail in those situations. I would have liked to employ checks and balances to first ensure that 
	// the values entered by the user do indeed form a triange. This can be done by using Pythagoras Theorem
	// and bunch of if statements. The rules of this assignment prevent me from using if statements therefore
	// I cannot implement those checks here.
}