# include <iostream>
# include <cmath>

using namespace std;

int main() {
	// heading
	cout << "Number\tSquare\tCube" << endl;

	int num = 0;

	while ( num <= 10 ) {
		cout << num << "\t" << pow(num, 2) << "\t" << pow(num, 3) << endl;
		num++;
	}

	return 0;
}