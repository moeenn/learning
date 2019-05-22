# include <iostream>
using namespace std;

int main()
{
	// read the temperature (in fahrenheit) from the user
	float temp_fahrenheit;
	cout << "Please enter the Temperature in Fahrenheit (°F): ";
	cin >> temp_fahrenheit;

	// convert the temperature to Celcius
	float temp_centigrade;
	temp_centigrade = ( temp_fahrenheit - 32 ) / 1.8;

	// display the temperature to the user
	cout << "The Temperature is " << temp_centigrade << "°C." << endl;

	// end program
	return 0;
}