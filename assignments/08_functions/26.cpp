#include <iostream>
using namespace std;

int time_delta(int h1, int m1, int h2, int m2) {
	int time_1 = (h1 * 60) + m1;
	int time_2 = (h2 * 60) + m2;

	if(time_1 > time_2) {
		return time_1 - time_2;
	}
	return time_2 - time_1;
}

int main() {
	int h1, m1, h2, m2;
	h1 = 10;
	m1 = 30; 	// 10:30
	h2 = 11;
	m2 = 45; 	// 11:45

	cout 	<< "Time 1: " << h1 << ":" << m1 << endl
			<< "Time 2: " << h2 << ":" << m2 << endl;

	cout 	<< "Time Delta: " << time_delta(h1, m1, h2, m2) << " minutes" << endl;
}



















