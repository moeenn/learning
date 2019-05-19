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
int getCentral(long int num);

// Global variables
long int num;
vector<int> number;

int main()
{
	getNum();
    int centralNum = getCentral(num);
    cout << "Central Digit is: " << centralNum << endl;

    if( centralNum % 2 == 0 ) {
        cout << "Central digit is even" << endl;
    } else {
        cout << "Central digit is odd" << endl;
    }

    return 0;
}

void getNum() {
	// because why not!
    do {
        cout << "Please enter a number: ";
        cin >> num; 
        
        if( num < 0 ) {
            cerr << "Please enter Positive number" << endl;
        } else {
            break;
        }    
    } while(true);    
}

void convToVector(long int num) {
    while(num > 0) {
    	// get the last digit of number and insert it at start of vector. This preserves order of digits.
        number.insert( number.begin(), num % 10 );
        // truncate the last digit of number (i.e. the digit that has already been inserted into vector)
        num /= 10;
    }
}

int getCentral(long int num) {
    convToVector(num);
    int digits = number.size();     // total number of digits in number
    int centralNum, centralIndex, returnVal;


    if( digits % 2 == 1 ) {                 // odd number of digits
        centralNum = ( digits + 1 ) / 2;
        centralIndex = centralNum - 1;
        returnVal = number[centralIndex];
    } else {                                // even number of digits
        centralNum = digits / 2;
        centralIndex = centralNum - 1;
        returnVal = number[centralIndex] + number[centralIndex+1];
    }

    return returnVal;
}