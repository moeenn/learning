# include <iostream>
using namespace std;

int main()
{
	float diameter = 39.0;
	float height = 39.0;
	float pi = 3.142;

	float radius;
	radius = diameter / 2;

	// calculate the volume of the cylinder
	// volume = pi * r^2 * h
	float volume;
	volume = pi * radius * radius * height;

	// display the results to the user
	cout << "The volume of the sphere is " << volume << endl;

	// end program
	return 0;
}