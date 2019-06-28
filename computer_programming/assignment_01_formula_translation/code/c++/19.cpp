# include <iostream>
using namespace std;

int main()
{
	// read the marks obtained by the student in five subjects
	int marks[5] = {};
	cout << "Please enter the marks obtained in each of five subjects" << endl << "(Format: 1 2 3 4 5 ): ";
	cin >> marks[0] >> marks[1] >> marks[2] >> marks[3] >> marks[4];

	// define some additional variables for code readability
	int total_marks;
	int max_marks;
	float avg_marks;

	// calculate the total marks and avg marks
	total_marks = marks[0] + marks[1] + marks[2] + marks[3] + marks[4];
	max_marks = 5*100;
	avg_marks = (float) total_marks / max_marks * 100;

	// display results to the user
	cout << endl << "The student obtained " << total_marks << " out of a total of " << max_marks << " marks." << endl;
	cout << "The Total percentage marks obtained is " << avg_marks << "%." << endl;

	// end program
	return 0;
}