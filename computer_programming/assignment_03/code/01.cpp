#include <iostream>
#include <vector>
using namespace std;

/*
	Note: Due to size limitations of long int data type, this program can only
	handle numbers upto (10^19)-1
*/


// function prototypes
void getNum();
void convToVector(long int num);

// Global variables
long int num;
vector<int> number;

int main()
{
	getNum();

    if( num <= 0 ) {
    	cerr << "Please enter Valid Number" << endl;
    	return 0;
    } else {
   	    convToVector(num);
	    // display the size of vector
	    cout << "Number of Digits: " << number.size() << endl;    	
    }

    return 0;
}

void getNum() {
	// because why not!
    cout << "Please enter a number: ";
    cin >> num;	
}

void convToVector(long int num) {
    while(num > 0) {
    	// get the last digit of number and insert it at start of vector. This preserves order of digits.
        number.insert( number.begin(), num % 10 );
        // truncate the last digit of number (i.e. the digit that has already been inserted into vector)
        num /= 10;
    }
}