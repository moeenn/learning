# include <iostream>
# include <iomanip>

using namespace std;

int main() {
	// ask the user for call initiation time
	cout << "Please enter the time at which call was made " << endl;
	cout << "Input Format: HH.MM (e.g. 20.15): ";
	float start_time;
	cin >> start_time;

	// input validation on time entered
	// input time cannot be negative
	if ( start_time < 0 ) {
		cout << "Invalid Input! Time cannot be negative." << endl;
		return 1;
	}

	// extract hours and minutes from the input time
	int hours, minutes;

	hours = static_cast<int>(start_time);
	minutes = ( start_time - static_cast<int>(start_time)) * 100;

	// hours cannot be more than 23 or less than 0
	if (hours >= 24 ) {
		cout << "Invalid Input! Hours should be less than 24." << endl;
		return 1;
	}

	// minutes cannot be 60 or more
	if ( minutes >= 60 ) {
		cout << "Invalid Input! Minutes should be less than 60." << endl;
		return 1;
	}

	// ask user for call duration
	cout << endl << "Please enter the duration of call in minutes: ";
	int call_duration;
	cin >> call_duration;

	// input validation
	// minutes cannot be negative
	if (call_duration < 0) {
		cout << "Invalid Input! Call duration cannot be negative." << endl;
		return 1;
	}

/*
	Call rates slabs
	Starting time of Call 		Rates per Minute
	00:00 - 06:59				$0.12
	07:00 - 19:00				$0.55
	19:01 - 23.59				$0.35
*/

	// check which call rate is applicable
	float call_rate;

	if ( start_time >= 0.0 && start_time <= 06.59 ) {
		call_rate = 0.12;
	} else if ( start_time >= 07.00 && start_time <= 19.00 ) {
		call_rate = 0.55;
	} else if ( start_time >= 19.01 && start_time <= 23.59 ) {
		call_rate = 0.35;
	} 

	// calculate the call charges
	float bill;
	bill = call_duration * call_rate;

	// display the bill to the user
	cout << fixed << showpoint << setprecision(2);
	cout << "Call Rate: " << call_rate << endl;
	cout << "Call Duration: " << call_duration << endl;
	cout << "Total Bill: " << bill << endl;

	return 0;
}