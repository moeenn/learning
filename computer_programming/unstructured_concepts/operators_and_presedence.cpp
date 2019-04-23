# include <iostream>
using namespace std;

/*
The purpose of this program is to understand the behavior of operators and their presidence.
Most common operators include
1. +    Addition
2. -    Subtraction
3. *    Multiplication
4. /    Division
5. %    Modulus (calculates the remainder after division of two numbers)

Presidence relates the order in which the operations are done. We don't exactly follow the DMAS rule here.
C++ divides the operators in three groups with descending priority:
Group 1:  ( )
Group 2:  * / %
Group 3:  + -

In an example where operators from only one group exist in the equation, we move from left to right in such situations.
See Example 1 : System performed addition, then Subtraction i.e. moved left to right

In a scenario where we have operators from more than one group, we go from group 1 to 2 to 3, moving left to right on the equation
See Example 2 : Division was performed first and then addition

We can specify the exact order of operations by using brackets
See example 3 : Both the brackets were resolved first. Then 40 was divided by 5 and finally 8 was divided by 2 i.e we moved from left to right.

*/

int main()
{
    // example 1
    cout << "Example 1: \t";
    cout << 20 + 30 - 10 << endl;

    // example 1.1 : See what modulus does
    cout << "Example 1.1: \t";
    cout << 10 % 3 << endl;

    // example 2
    cout << "Example 2: \t";
    cout << 30 + 10 / 5 << endl;

    // example 3
    cout << "Example 3: \t";
    cout << (30 + 10) / 5 / (10 - 8) << endl;

    // End the program
    return 0;
}
