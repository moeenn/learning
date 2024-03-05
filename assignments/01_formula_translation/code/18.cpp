# include <iostream>
using namespace std;

int main()
{
	// read the distance (in kilometers) from the user 
	float dist_kilometers;
	cout << "Please enter the distance in kilometers (km): ";
	cin >> dist_kilometers;

	// display the conversions to the user
	cout << endl << "Distance in Meters (m): " << dist_kilometers*1000 << endl;
	cout << "Distance in Centimeters (cm): " << dist_kilometers*1000*100 << endl;
	cout << "Distance in Feet (ft): " << dist_kilometers*3280.84 << endl;
	cout << "Distance in Inches (in): " << dist_kilometers*3280.84*12 << endl;

	// end program
	return 0;
}