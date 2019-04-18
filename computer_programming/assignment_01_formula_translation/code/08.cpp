# include <iostream>
using namespace std;

int main()
{
	// create 3 variables for storing values from the user
	float a,b,c;

	// display a message for the user
	cout << "Please enter three numbers: ";

	// assign the three values entered by the user to our variables
	// Note: The program is smart enough to ignore extra values entered by the user.
	cin >> a >> b >> c;

	// Divide the first number by second and the answer by the third number
	cout << "The answer is " << (a / b) / c << endl;

	// end program
	return 0;
}