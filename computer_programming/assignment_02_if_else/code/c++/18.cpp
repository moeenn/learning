# include <iostream>
# include <cmath>

using namespace std;

/*
 	Wavelength can be denoted in form: 1e-11
	In example 1 is considered Factor and -11 is considered Power.
*/

// convert to wavelength using factor and power
long double convToWavelength(int factor, int power) {
	return factor * pow(10, power);
}

int main() {
	int factor, power;

	// ask user for input
	cout << "Wavelength can be donoted as e.g. 1e-11 which simple means 1x10^-11" << endl;
	cout << "In this example Factor is 1 and Power is -11." << endl << endl;
	cout << "Enter Factor: ";
	cin >> factor;

	cout << "Enter power: ";
	cin >> power;

	// input validation
	// factor cannot be negative
	if (factor < 0 ) {
		cout << "Invalid Input! Factor cannot be negative." << endl;
		return 1;
	}

	// power for wavelength cannot be positive
	if (power > 0 ) {
		cout << "Invalid Input! Power for wavelength cannot be positive." << endl;
		return 1;
	}

	// convert input to wavelength format: e.g. 1e-11 
	long double input = convToWavelength(factor, power);

/*
	wavelength								Type
	More than 1e-02							Radio wave
	Less than 1e-02 but more than 1e-03		Micro wave
	Less than 1e-03 but more than 7e-07		Infrared
	Less than 7e-07 but more than 4e-07		Visible Light
	Less than 4e-07 but more than 1e-08		Ultra-voilet
	Less than 1e-08 but more than 1e-11		X Rays
	Less than 1e-11							Gamma Rays 
*/	

	// define limits 
	long double radio_limit = convToWavelength(1, -2);		// 1e-02 radio wave
	long double microwave_limit = convToWavelength(1, -3);	// 1e-03 microwave 
	long double infrared_limit = convToWavelength(1, -7);	// 7e-07 infrared
	long double visible_limit = convToWavelength(4, -7);	// 4e-07 visible light
	long double ultrvoilet_limit = convToWavelength(1, -8);	// 1e-08 ultra-voilet
	long double xray_limit = convToWavelength(1, -11);		// 1e-11 x-ray 


	// find out the type of wavelength
	string type;

	if ( input >= radio_limit ) {
		type = "Radio Wave";
	} else if ( input < radio_limit && input >= microwave_limit ) {
		type = "Micro-Wave";
	} else if ( input < microwave_limit && input >= infrared_limit ) {
		type = "Infra-Red";
	} else if ( input < infrared_limit && input >= visible_limit ) {
		type = "Visible Light";
	} else if ( input < visible_limit && input >= ultrvoilet_limit ) {
		type = "Ultra-Voilet";
	} else if ( input < ultrvoilet_limit && input >= xray_limit ) {
		type = "X-Ray";
	} else if ( input < xray_limit ) {
		type = "Gamma Rays";
	} else {
		type = "{General error} fix logic";
	}

	// Disply results to user
	cout << "The type of wavelength is " << type << endl;

	return 0;
}