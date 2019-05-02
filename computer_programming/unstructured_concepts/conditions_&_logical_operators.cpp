# include <iostream>
using namespace std;

int main()
{
	/*
		Booleans
		0		False
		1		True
	*/
	bool condition1;
	bool condition2;
	bool condition3;

	int value1 = 20;
	int value2 = 40;

	/*
		Conditions
		== 		Test if two values are equal
		!=		Not equal to
		>		Greater than
		<		Less than
		>=		Equal to or greater than
		<=		Equal to or less than
	*/

	condition1 = value1 < value2;
	condition2 = value2 == 50;
	condition3 = condition1 || condition2;

	/*
		Logical Operators
		&&		AND
		||		OR
	*/

	cout << condition1 << endl;
	cout << condition2 << endl;
	cout << condition3 << endl;	


	if( condition1 ) {
		cout << value1 << " is indeed less than " << value2 << endl;
	}

	if( condition1 && condition2 ) {
		cout << "Both condition are indeed True" << endl;
	} else {
		cout << "One of the two conditions is not True" << endl;
	}

	if( condition1 || condition2 )
		cout << "One of the two conditions is True" << endl;
	else
		cout << "None of the two Conditions is True" << endl;

	return 0;
}