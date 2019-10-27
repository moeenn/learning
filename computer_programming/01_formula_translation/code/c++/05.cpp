# include <iostream>
using namespace std;

int main()
{
	// Start by defining the variable for which the table will be printed
	int number;

	// Take the number from user and assign it to our variable
	cout << "Please enter the number for which you require a table: ";
	cin >> number;

	// lets define the multiplier and set the initial value
	int multiplier = 1;

	// Lets start printing the table
	cout << number << " x " << multiplier << "\t = " << number*multiplier++ << endl;
	cout << number << " x " << multiplier << "\t = " << number*multiplier++ << endl;
	cout << number << " x " << multiplier << "\t = " << number*multiplier++ << endl;
	cout << number << " x " << multiplier << "\t = " << number*multiplier++ << endl;
	cout << number << " x " << multiplier << "\t = " << number*multiplier++ << endl;
	cout << number << " x " << multiplier << "\t = " << number*multiplier++ << endl;
	cout << number << " x " << multiplier << "\t = " << number*multiplier++ << endl;
	cout << number << " x " << multiplier << "\t = " << number*multiplier++ << endl;
	cout << number << " x " << multiplier << "\t = " << number*multiplier++ << endl;
	cout << number << " x " << multiplier << "\t = " << number*multiplier++ << endl;

	// Again, I don't like the above solution. The code would have been much more 
	// succint if a loop was used. 

	// End the program
	return 0;
}