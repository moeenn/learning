# include <iostream>
# include <fstream>

using namespace std;

const int MAX_MONTHLY_HOURS = 744;

int main() {
/*
	take following input from user
	1. Name
	2. Package Name
	3. Hours used
*/
	cout << "Welcome to the Internet Bill Calculator!" << endl << endl;
	
	// get name
	cout << "Please enter your name: ";
	string name;
	getline(cin, name);

	// get package name
	cout << endl << "We currently have three available Internet Packages" << endl;
	cout << "Package A: $ 9.95  per month, 10 Hours Internet, $ 2.00 for additional hours." << endl; 
	cout << "Package B: $ 14.95 per month, 20 Hours Internet, $ 1.00 for additional hours." << endl;
	cout << "Package C: $ 19.95 per month, unlimited Internet Hours." << endl << endl;
	cout << "Please enter your Package Name: ";
	char pkg_name;
	cin >> pkg_name;

	// define empty variables that will be populated according to the selected package
	// pkg = Package
	// add = Additional
	int pkg_hours;
	float pkg_rate, add_rate; 

	// give the above variables their appropriate values
	switch (pkg_name) {
		case 'a':
		case 'A':
			pkg_name = 'A';
			pkg_hours = 10;
			pkg_rate = 9.95;
			add_rate = 2.00;
			break;

		case 'b':
		case 'B':
			pkg_name = 'B';
			pkg_hours = 20;
			pkg_rate = 14.95;
			add_rate = 1.00;
			break;

		case 'c':
		case 'C':
			pkg_name = 'C';
			pkg_hours = MAX_MONTHLY_HOURS;	// unlimited hours still just means maximum number of hours in month
			pkg_rate = 19.95;
			add_rate = 0.00;
			break;

		default:
			cout << "Invalid Package Name! Please select Package A, B or C." << endl;
			return 1;			
	}

	// get internet usage hours from user
	cout << endl << "Please enter the Total number of hours the Internet was Used: ";
	int total_hours;
	cin >> total_hours;

	// input validation
	// total monthly hours cannot exceed 744 i.e. 31 * 24
	// hours cannot be negative
	if ( total_hours > MAX_MONTHLY_HOURS ) {
		cout << "Invalid Input! Internet usage hours cannot be more than \nthe total number of hours in a month i.e. " << MAX_MONTHLY_HOURS << " Hours." << endl;
		return 1;
	} else if ( total_hours < 0 ) {
		cout << "Invalid Input! Hours cannot be negative." << endl;
		return 1;
	}


	// now we have everything we need
	// lets calculate the bill

	// the additional rate will apply to additional hours
	int add_hours;

	// check to see if there are additional hours used
	if ( total_hours > pkg_hours) {
		add_hours = total_hours - pkg_hours;	
	} else {
		add_hours = 0;
	}
	
	// calculate total bill figure
	float total_bill;
	total_bill = pkg_rate + ( add_rate * add_hours );

	// let user know about the output
	cout << "The output has been written to File 'bill.txt'" << endl;

	// print out the bill to a file 
	ofstream user_bill;
	user_bill.open ("bill.txt");

	user_bill << "Internet Bill for the Month of XXXXX" << endl << endl;
	user_bill << "Customer Name: " << name << endl;
	user_bill << "Selected Package: " << pkg_name << endl;

	if ( pkg_name == 'A' || pkg_name == 'B' ) {
		user_bill << "Package Details: $" << pkg_rate << " per month " << pkg_hours << " Hours of Internet Access. Additionl Hours are $" << add_rate << " per hour." << endl;	
	} else {
		user_bill << "Package Details: $" << pkg_rate << " per month Unlimited Access" << endl;
	}

	user_bill << "Hours Used: " << total_hours << endl;
	user_bill << "Total Amount Payable: $" << total_bill << endl;

	return 0;
}