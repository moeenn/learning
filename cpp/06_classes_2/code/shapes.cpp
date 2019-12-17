#include <iostream>
#include <iomanip>
using namespace std;

class Shape {
protected:
	double area, perimeter;
};

class Circle : public Shape {
private:
	double pi = 3.14159;
	double radius;

public:
	Circle(int radius) {
		cout << "Int constructor executed \n";
		this->radius = radius;
	}

	Circle(double radius) {
		cout << "Double constructor executed \n";
		this->radius = radius;
	}

	void getInfo() {
		this->area = pi * this->radius * this->radius;
		this->perimeter = 2 * pi * this->radius;

		cout 	<< fixed << setprecision(3);
		cout 	<< "Area: " << this->area << endl
				<< "perimeter: " << this->perimeter << endl << endl;
	}
};

class Rectangle : public Shape {
private:
	double length, width;

public:
	Rectangle(int length, int width) {
		cout << "Int constructor executed \n";
		this->length = length;
		this->width = width;
	}

	Rectangle(double length, double width) {
		cout << "Double constructor executed \n";
		this->length = length;
		this->width = width;
	}

	void getInfo() {
		this->area = this->length * this->width;
		this->perimeter = 2 * (this->length + this->width);

		cout 	<< fixed << setprecision(3);
		cout 	<< "Area: " << this->area << endl
				<< "perimeter: " << this->perimeter << endl << endl;
	}
};

// assume right-angled triangle
class Triangle : public Shape {
private:
	double base, height, slant;

public:
	Triangle(int base, int height) {
		cout << "Int constructor executed \n";
		this->base = base;
		this->height = height;
	}

	Triangle(double base, double height) {
		cout << "Double constructor executed \n";
		this->base = base;
		this->height = height;
	}

	void getInfo() {
		this->area = 0.5 * this->base * this->height;
		this->slant = 0.5 * (this->base - this->height);
		this->perimeter = this->base + this->height + this->slant;

		cout 	<< fixed << setprecision(3);
		cout 	<< "Area: " << this->area << endl
				<< "perimeter: " << this->perimeter << endl << endl;
	}
};



int
main() {
	Circle c1(10);
	c1.getInfo();

	Circle c2(10.5);
	c2.getInfo();

	Rectangle r1(10, 20);
	r1.getInfo();

	Rectangle r2(10.5, 20.5);
	r2.getInfo();

	Triangle t1(10, 20);
	t1.getInfo();

	Triangle t2(10.5,20.40);
	t2.getInfo();

	return 0;
}