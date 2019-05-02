# include <iostream>
using namespace std;

int main()
{
	// Const means that this is a read-only variable. The value will not change during execution
	const string password = "my_password";
	string input;


	// we are using do while loop here
	// the body of "do" is executed and then the while condition is checked.
	// If the while condition is true, the body of "do" is executed again.
	// if the while condition is false, the program moves on to instructions after the loop
	do
	{
		cout << "Please enter password: " << flush;
		// We need to capture complete input from the user. getline() will capture everything entered by the user (including spaces) and assign it to variable "input"
		getline(cin, input);

		if(input == password)
			cout << "Access Granted!" << endl;
		else
			cout << "Access Denied" << endl;
	} while ( input != password );


	return 0;
}