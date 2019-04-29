# include <iostream>
# include <stdlib.h>

using namespace std;

int main() {
	// define some constants
	const int SEC_IN_DAY = 86400;
	const int SEC_IN_HOUR = 3600;
	const int SEC_IN_MINUTE = 60;

	// ask user for number of seconds 
	cout << "Please enter Total Number of Seconds: ";
	long int sec_total;
	cin >> sec_total;

	// input validations 
	// seconds can't be negative
	if ( sec_total < 0 ) {
		cout << "Seconds can't be negative" << endl;
		return 1;
	}

	// lets start with days and move downwards
	int days, hours, minutes, seconds;

	// boolean values to simplify condition statements
	bool hasDays = false;
	bool hasHours = false;
	bool hasMinutes = false;

	// we want a single variable to manage things
	int balance = sec_total;

	// see what we are working with
	if ( balance >= SEC_IN_MINUTE ) {
		hasMinutes = true;
	} else if ( balance >= SEC_IN_HOUR ) {
		hasHours = true;
		hasMinutes = true;
	} else if ( balance >= SEC_IN_DAY) {
		hasDays = true;
		hasHours = true;
		hasMinutes = true;
	}


	if (hasDays) {
		days = balance / SEC_IN_DAY;
		balance = balance - ( days * SEC_IN_DAY );

		hours = balance / SEC_IN_HOUR;
		balance = balance - ( hours * SEC_IN_HOUR);

		minutes = balance / SEC_IN_MINUTE;
		balance = balance - ( minutes * SEC_IN_MINUTE);
		seconds = balance;
	}

	if (hasHours) {
		hours = balance / SEC_IN_HOUR;
		balance = balance - ( hours * SEC_IN_HOUR);

		minutes = balance / SEC_IN_MINUTE;
		balance = balance - ( minutes * SEC_IN_MINUTE);
		seconds = balance;
	}

	if (hasMinutes) {
		minutes = balance / SEC_IN_MINUTE;
		balance = balance - ( minutes * SEC_IN_MINUTE);
		seconds = balance;
	}


	if ( hasDays ) {
		cout << days << " Day(s) " << hours << " Hour(s) " << minutes << " Minute(s) " << seconds << " Second(s)" << endl;	
	}

	if ( hasHours ) {
		cout << hours << " Hour(s) " << minutes << " Minute(s) " << seconds << " Second(s)" << endl;	
	}

	if ( hasMinutes ) {
		cout << minutes << " Minute(s) " << seconds << " Second(s)" << endl;
	}


	return 0;
}