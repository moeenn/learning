# include <iostream>
using namespace std;

int main()
{
	// Set the initial value of our number
	short number = 0;

	// Print out the headings
	cout << "Number\t Square\t Cube" << endl;

	// Start the table
	// Output: Number <Tab> Number Squared <Tab> Number Cubed
	cout << number << "\t " << number*number << "\t " << number*number*number++ <<endl;
	cout << number << "\t " << number*number << "\t " << number*number*number++ <<endl;
	cout << number << "\t " << number*number << "\t " << number*number*number++ <<endl;
	cout << number << "\t " << number*number << "\t " << number*number*number++ <<endl;
	cout << number << "\t " << number*number << "\t " << number*number*number++ <<endl;
	cout << number << "\t " << number*number << "\t " << number*number*number++ <<endl;
	cout << number << "\t " << number*number << "\t " << number*number*number++ <<endl;
	cout << number << "\t " << number*number << "\t " << number*number*number++ <<endl;
	cout << number << "\t " << number*number << "\t " << number*number*number++ <<endl;
	cout << number << "\t " << number*number << "\t " << number*number*number++ <<endl;
	cout << number << "\t " << number*number << "\t " << number*number*number++ <<endl;

	// Note: The above solution is not cool at all. I would have really loved to use a loop
	// but the conditions of this assignment disallow it. Quote:
	// "Don’t use any loop or conditional statement if else in this assignment"

	// End the program
	return 0;
}