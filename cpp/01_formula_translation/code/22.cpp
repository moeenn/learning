# include <iostream>
using namespace std;

int main()
{
	// we require two variable to store the values of numbers C and D
	int c, d;

	// we will also need a temporary variable to help exchange values of C and D
	int temp;

	// obtain the values of C and D from the user
	cout << "Please enter Number C: ";
	cin >> c;

	cout << "Please enter Number D: ";
	cin  >> d;

	// exchange the values
	temp = c;
	c = d;
	d = temp;

	// Display the interchanged values to the user
	cout << "C = " << c << endl;
	cout << "D = " << d << endl;

	// end program
	return 0; 
}