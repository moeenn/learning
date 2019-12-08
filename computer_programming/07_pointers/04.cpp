#include <iostream>
using namespace std;

struct Account {
	int accountID;
	unsigned int amount;
};

void getInput(Account* a) {
	cout << "Enter ID: ";
	cin >> a->accountID;

	cout << "Enter Amount: ";
	cin >> a->amount;
}

void showAccount(Account* a) {
	cout 	<< "Accout ID: " << a->accountID << endl
			<< "Amount: " << a->amount << endl;
}

int main() {
	cout << "Enter Number of Records: ";
	int total_accounts;
	cin >> total_accounts;

	Account accounts[total_accounts];

	// take input for all records
	for(int i=0; i < total_accounts; i++) {
		getInput(&accounts[i]);
		showAccount(&accounts[i]);
	}
}