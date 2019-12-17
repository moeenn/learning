# include <iostream>
using namespace std;

int main()
{
	// a standard quadratic equation looks like this:
	// ax2 + bx + c = 0
	// Let's define or variables accordingly
	float a, b, c;

	// a = coefficient of x^2
	// b = coefficient of x
	// c = y-intercept

	// Let's now ask the user to enter each of these values
	cout << "Please enter the coefficient of x^2 : ";
	cin >> a;

	cout << "Please enter the coefficient of x : ";
	cin >> b;

	cout << "Please enter the y-intercept : ";
	cin >> c;

	// calculate the value of the discriminant
	float discriminant;
	discriminant = b*b - 4*a*c;

	// display the results to the user
	cout << "The discriminant of this quadratic equation is " << discriminant << endl;

	// end program
	return 0;

	// Note: I would have liked the user to enter the entire quadratic equation
	// but I don't know how to extract specific values from a string ( i.e. a,b,c )
}