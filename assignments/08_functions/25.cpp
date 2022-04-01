#include <iostream>
#include <cmath>
using namespace std;

void primes(int n) {
    // try 2
    while (n % 2 == 0) {
        cout << 2 << " ";
        n = n/2;
    }

    for (int i = 3; i <= sqrt(n); i = i + 2) {
        // While i divides n, print i and divide n
        while (n % i == 0) {
            cout << i << " ";
            n = n/i;
        }
    }

    if (n > 2) {
        cout << n << " ";
    }
}

int main() {
    cout << "Enter Number: ";
    int n;
    cin >> n;

    primes(n);
}



















