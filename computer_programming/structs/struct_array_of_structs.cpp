#include <iostream>
using namespace std;

struct Student {
	string name;
	int id;
	char grade;
};

void input(Student &s) {
	cout << "Enter the details of Student: " << endl;
	cout << "[ID Name Grade]: ";
	cin >> s.id;
	cin >> s.name;
	cin >> s.grade;
}

void display(Student &s) {
	cout << "ID\t\t" << s.id << endl;
	cout << "Name\t\t" << s.name << endl;
	cout << "Grade\t\t" << s.grade << endl;
}

int main() {
	const int class_size = 3;
	Student classroom[class_size];

	for( int i= 0; i < class_size; i++ ) {
		input(classroom[i]);
	}

	for( int i= 0; i < class_size; i++ ) {
		display(classroom[i]);
		cout << endl;
	}
			
	return 0;
}