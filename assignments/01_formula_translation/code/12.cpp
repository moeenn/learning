# include <iostream>
using namespace std;

int main()
{
	// define variables for storing inputs from the user
	float num1, num2;

	// Read the input from user and assign it to our variables
	cout << "Please enter two numbers ( Format: 1 2 ): ";
	cin >> num1 >> num2;

	// let the user know results of his calculations
	cout << "Addition of your numbers results in " << num1 + num2 << endl;
	cout << "Difference between your numbers is " << num1 - num2 << endl;
	cout << "The quotient of your numbers is " << (int) num1 / (int) num2 << endl;
	cout << "The remainder of division of your numbers is " << (int) num1 % (int) num2 << endl;

	// end program 
	return 0;
}