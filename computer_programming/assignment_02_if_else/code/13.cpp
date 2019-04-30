# include <iostream>
using namespace std;

int main() {
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

	// lets start with minutes and move upwards
	int days = 0;
	int hours = 0;
	int minutes = 0;
	int seconds = 0;

	// just calculate minutes and seconds
	const int SEC_IN_MINUTE = 60;

	if ( sec_total >= SEC_IN_MINUTE ) {
		minutes = sec_total / SEC_IN_MINUTE;
		seconds = sec_total % SEC_IN_MINUTE;
	} else {
		seconds = sec_total;
	}

	// just calculate hour and minutes
	const int MINUTE_IN_HOUR = 60;

	if ( minutes >= MINUTE_IN_HOUR ) {
		hours = minutes / MINUTE_IN_HOUR;
		minutes = minutes % MINUTE_IN_HOUR;
	} 

	// just calculate days and hours
	const int HOUR_IN_DAY = 24;

	if ( hours >= HOUR_IN_DAY ) {
		days = hours / HOUR_IN_DAY;
		hours = hours % HOUR_IN_DAY;
	}

	// Display Results to user
	cout << days << " Days " << hours << " Hours " << minutes << " Minutes " << seconds << " Seconds " << endl;
	
	return 0;
}