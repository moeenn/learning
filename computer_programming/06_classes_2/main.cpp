#include <iostream>
using namespace std;

class Employee {
private:
	unsigned int m_ID;
	string m_name;
	string m_department;
	string m_postion;

public:
	// default constructor
	Employee() {
		this->m_ID = 0;
		this->m_name = "";
		this->m_department = "";
		this->m_postion = "";
	}

	// destructor
	~Employee() {
		cout << "Destructor Executed ...\n";
	}

	// getters
	unsigned int getID() {
		return this->m_ID;
	}

	string getName() {
		return this->m_name;
	}

	string getDepartment() {
		return this->m_department;
	}

	string getPosition() {
		return this->m_postion;
	}

	// setters
	void setID(int id) {
		this->m_ID = id;
	}

	void setName(string name) {
		this->m_name = name;
	}

	void setDepartment(string dep) {
		this->m_department = dep;
	}

	void setPosition(string pos) {
		this->m_postion = pos;
	}

	// fill all fields
	void setInfo(int id, string name, string dep, string pos) {
		this->m_ID = id;
		this->m_name = name;
		this->m_department = dep;
		this->m_postion = pos;
	}

	// get values from user
	void getInfo() {
		cout << "Enter ID: ";
		cin >> this->m_ID;

		cout << "Enter Name: ";
		cin >> this->m_name;

		cout << "Enter Department: ";
		cin >> this->m_department;

		cout << "Enter Position: ";
		cin >> this->m_postion;
	}

	// display object details
	void putInfo() {
		cout 	<< "ID: " << this->m_ID << endl
				<< "Name: " << this->m_name << endl
				<< "Department: " << this->m_department << endl
				<< "Position: " << this->m_postion << endl;
	}
}

int main() {
	unsigned int total_employees = 3;
	Employee employees[total_employees] = [
		Employee(1230, "Zaffar Mueen", "PU", "Vice Chancellor"),
		Employee(1230, "Mansoor Sarwar", "PUCIT", "Principal"),
		Employee(1241, "Mehwish Khurshid", "PUCIT - Old Campus", "Student Affairs Coordinator")
	];

	return 0;
}