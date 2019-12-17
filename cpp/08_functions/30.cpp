#include <iostream>
using namespace std;

struct City {
	string name;
	unsigned int population;

	void info(string name, int population) {
		this->name = name;
		this->population = population;
	}

	void display() {
		cout 	<< "Name: " << this->name << endl
				<< "Population: " << this->population << endl;
	}
};


void compare(City a, City b) {
	if(a.population > b.population) {
		a.display();
	} else {
		b.display();
	}
}

int main() {
	City a, b;
	a.info("Lahore", 10000);
	b.info("Karachi", 3000);
	compare(a,b);
}
