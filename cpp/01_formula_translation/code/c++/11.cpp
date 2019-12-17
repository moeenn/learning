# include <iostream>
# include <math.h>

using namespace std;

int main()
{
	// Note: This problem is extension of Quesiton # 10. I am using the soem of the same code from that solution

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

	// calculate the roots of the quadratic equation
	float root1, root2;
	root1 = (-b + sqrt(discriminant)) / (2*a);
	root2 = (-b - sqrt(discriminant)) / (2*a);

	// display the results to the user
	cout << "The roots of the quadratic equation are " << root1 << " and " << root2 << "." << endl;

	// end program
	return 0;

	// Note: This program will only calculate real root of a quadratic equation.
	// Real roots for a quadratic equation exist only when the graph of the quadratic equation has an x-intersect
	// If the graph of the quadratic equation does not intersect the x-axis, the discriminant become an imaginary number ( i.e. underroot of a negative number )
	// I don't know how to calculate imaginary numbers in C++ yet. If I did I would add this capability to this program.
	// Do note that if the program says that the roots are -nan, it means they are imaginary!
	// example of imaginary roots: 5x2 + 2x + 1 = 0
}