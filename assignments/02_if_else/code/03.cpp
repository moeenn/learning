# include <iostream>
# include <iomanip>
using namespace std;

int main() {
	// ask use for input of temperature in Celcius
	cout << "Please enter the temperature in Celcius: ";
	float temp_celcius;
	cin >> temp_celcius;

	// convert temperature to fahrenheit
	// formula for conversion is : F=9/5C+32
	float temp_fahr;
	temp_fahr = (9 * temp_celcius) / 5 + 32;

	// display results to user, nearest to two decimal points
	cout << fixed << showpoint << setprecision(2);
	cout << "The temperature in Fahrenheit is " << temp_fahr << endl;  

	return 0;
}