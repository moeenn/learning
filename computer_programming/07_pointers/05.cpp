#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cout << "Enter Number of Students: ";
	int total_students;
	cin >> total_students;

	int marks[total_students];

	// get input 
	for(int i = 0; i < total_students; i++) {
		cout << "Enter Marks: ";
		cin >> marks[i];
	}

	// calculate average
	int sum = 0;
	for(int i = 0; i < total_students; i++) {
		sum += marks[i];
	}

	double average = (double) sum / total_students;

	// set precision and show output
	cout << fixed << showpoint << setprecision(2);
	cout << "Average Marks: " << average << endl;
}