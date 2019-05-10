# include <iostream>
using namespace std;

/*
There are three common methods to add increments to numbers
1.  var = var + 1;
2.  var++;
3.  var += 1;

In method 1 & 3 we specify exactly the amount by which we want ot increment the number.
In method 2, the amount will always be incremented by 1. This is called post increment.
See Example 1

The exact same way we can decrement.
See Example 2

Now let's talk about pre increments.
*/


int main()
{
    // Example 1
    short a = 20;

    a = a + 3;
    cout << "Example 1:\t" << a << endl;

    a++;
    cout << "Example 1:\t" << a << endl;

    a += 6;
    cout << "Example 1:\t" << a << endl;


    // Example 2
    short b = 50;

    b = b - 5;
    cout << "Example 2:\t" << b << endl;

    b--;
    cout << "Example 2:\t" << b << endl;

    b -= 4;
    cout << "Example 2:\t" << b << endl;

    // Example 3
    short c = 10;

    c = ++c + c++;
    cout << "Example 3:\t" << c << endl;

    // End the program
    return 0;
}
