# include <iostream>
using namespace std;

int main()
{
	// setup an empty list for storing values of five variables entered by the user
	int numbers[5] = { };

	// get the numbers from user and add them to our array
	cout << "Please enter five numbers: (Format: 1 2 3 4 5): ";
	cin >> numbers[0] >> numbers[1] >> numbers[2] >> numbers[3] >> numbers[4];

	// for code readability let's define some more variables
	int total;
	float avg;

	// calculate total and average of numbers in our array
	total = numbers[0] + numbers[1] + numbers[2] + numbers[3] + numbers[4];
	avg = (float) total / 5;

	// let the user know the answer
	cout << "The average of your numbers is " << avg << endl; 

	// end program
	return 0;
}