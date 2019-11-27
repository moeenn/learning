#include <iostream>
using namespace std;

class Employee {
private:
	unsigned int id;
	string name;
	string department;
	string position;

public:
	// default constructor
	Employee() {
		this->id = 0;
		this->name = "";
		this->department = "";
		this->position = "";
	}

	// destructor
	~Employee() {
		cout << "Destructor Executed ...\n";
	}

	// getters
	unsigned int getID() {
		return this->id;
	}

	string getName() {
		return this->name;
	}

	string getDepartment() {
		return this->department;
	}

	string getPosition() {
		return this->position;
	}

	// setters
	void setID(int id) {
		this->id = id;
	}

	void setName(string name) {
		this->name = name;
	}

	void setDepartment(string dep) {
		this->department = dep;
	}

	void setPosition(string pos) {
		this->position = pos;
	}

	// fill all fields
	void setInfo(int id, string name, string dep, string pos) {
		this->id = id;
		this->name = name;
		this->department = dep;
		this->position = pos;
	}

	// get values from user
	void getInfo() {
		cout << "Enter ID: ";
		cin >> this->id;

		cout << "Enter Name: ";
		cin >> this->name;

		cout << "Enter Department: ";
		cin >> this->department;

		cout << "Enter Position: ";
		cin >> this->position;
	}

	// display object details
	void putInfo() {
		cout 	<< "ID: " << this->id << endl
				<< "Name: " << this->name << endl
				<< "Department: " << this->department << endl
				<< "Position: " << this->position << endl << endl;
	}
};

int main() {
	Employee e1, e2, e3;

	e1.setInfo(1230, "Zaffar Mueen", "PU", "Vice Chancellor");
	e2.setInfo(1230, "Mansoor Sarwar", "PUCIT", "Principal");
	e3.setInfo(1241, "Mehwish Khurshid", "PUCIT - Old Campus", "Student Affairs Coordinator");

	e1.putInfo();
	e2.putInfo();
	e3.putInfo();

	return 0;
}