#include <iostream>
#include <vector>
#include <limits>
#include <cmath>
using namespace std;

/*
	Note: Due to size limitations of long int data type, this program can only
	handle numbers upto (10^19)-1
*/

// function prototypes
void getNum();
void convToVector(long int num);
void convToMirrorVector(long int num);
int mirrorNumber();

// Global variables
long int num;
vector<int> number;
vector<int> mirror;

int main()
{
	getNum();
    convToVector(num);
    convToMirrorVector(num);

    if(num == mirrorNumber()) {
    	cout << "The entered number is a Palindrome" << endl;
    } else {
    	cout << "The entered number is NOT a Palindrome" << endl;
    }

    return 0;
}

void getNum() {
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
}

void convToVector(long int num) {
    while(num > 0) {
    	// get the last digit of number and insert it at start of vector. This preserves order of digits.
        number.insert( number.begin(), num % 10 );
        // truncate the last digit of number (i.e. the digit that has already been inserted into vector)
        num /= 10;
    }
}

void convToMirrorVector(long int num) {
	while( num > 0 ) {
		mirror.insert( mirror.end(), num % 10 );
		num /= 10;		
	}
}

int mirrorNumber() {
	int number = 0;
	int power = 0;
	int lastDigitIndex = mirror.size() - 1;
	
	// go through mirror vector in reverse order
	for(int i=lastDigitIndex; i >= 0; i-- ) {
		number += mirror[i] * pow(10, power);
		power++;
	}

	return number;
}