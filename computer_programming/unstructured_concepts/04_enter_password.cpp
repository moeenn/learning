# include <iostream>
using namespace std;

string pwd = "my_pass";

int main() {
	do {
		cout << "Enter Password: ";
		string input;
		getline(cin, input);

		if( input == pwd ){
			cout << "Password Accepted!\n" << endl;
			break; // stop the loop if password is correct
		} else {
			cout << "Invalid Password\n" << endl;
		}
	} while (true);

	return 0;
}