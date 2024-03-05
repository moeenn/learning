#include <iostream>
#include <vector>
#include <limits>
using namespace std;

/*
	Note: Due to size limitations of long int data type, this program can only
	handle numbers upto (10^19)-1
*/

// function prototypes
long int getNum();									// get the input from user
vector<int> convToVector(long int num);				// convert in input to vector

int main()
{
	long int num = getNum();
	vector<int> number = convToVector(num);

	int indexCentralDigit = number.size() / 2; 
	long int sum = 0;

	for(int i = 0 ; i < indexCentralDigit; i++) {
		cout << number[i] << " + ";
		sum += number[i];
	}

	cout << "= " << sum << endl;
    return 0;
}

long int getNum() {
	long int num;

	do {
	    cout << "Please enter a number: ";
	    cin >> num;
	    /* 
			Don't accept character input from user
			if user enters a character cin.good() will return bool value false
	    */
	    if (! cin.good() ) {
	    	cerr << "Please enter a valid number" << endl;
	    	cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
	    } else if( num < 0 ) {
	        cerr << "Please enter Positive number" << endl;
	    } else if( num < 10 ) {
	    	cerr << "Please enter a number with atlease two digits" << endl;
	    } else {
	    	break;
	    }			
	} while (true);

	return num;
}

vector<int> convToVector(long int num) {
	vector<int> number;

    while(num > 0) {
    	// get the last digit of number and insert it at start of vector. This preserves order of digits.
        number.insert( number.begin(), num % 10 );
        // truncate the last digit of number (i.e. the digit that has already been inserted into vector)
        num /= 10;
    }

    return number;
}