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
long int getNum();									// get the input from user
vector<int> convToMirrorVector(long int num);		// convert the input to mirror vector
int mirrorNumber(vector<int> mirror);				// convert the mirror vector back into a single number

int main()
{
	long int num = getNum();
	vector<int> mirrorVector = convToMirrorVector(num);
	int mirror = mirrorNumber(mirrorVector);

    if(num == mirror) {
    	cout << "The entered number is a Palindrome" << endl;
    } else {
    	cout << "The entered number is NOT a Palindrome" << endl;
    }

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

vector<int> convToMirrorVector(long int num) {
	vector<int> result;

	while( num > 0 ) {
		result.insert( result.end(), num % 10 );
		num /= 10;		
	}

	return result;
}

int mirrorNumber(vector<int> mirror) {
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