# include <iostream>
using namespace std;

int main()
{
	// define a variable for storing user value
	int num;

	// read value from user and assign it to our variable
	cout << "Please enter a negative number: ";
	cin >> num;

	// Note: There should be a check on the value entered by the user. 
	// Program should return an error if a positive value is entered by the user
	// We could have used an if statement to achieve that end.

	// Convert the number by multiplying it by -1
	num = num * (-1);

	// Display final results to the user
	cout << "Positive value of your number is " << num  << endl;

	// end program
	return 0;
}