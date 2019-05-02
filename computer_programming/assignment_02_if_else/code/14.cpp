# include <iostream>
# include <iomanip>

using namespace std;

int main() {
	// the selling price is a constant
	const int SELLING_PRICE = 99;

	// ask the user for number of items to be purchased
	int no_of_items;
	cout << "Please enter the number of items you wish to purchase: ";
	cin >> no_of_items;

	// input validation
	// no of items cannot be negative
	if (no_of_items < 0 ) {
		cout << "Please enter valid amount!" << endl;
		return 1;
	}

	/*
		Discount Table
			Quantity		Discount Rate
			less than 10		0%
			10-19				20%
			20-49				30%
			50-99				40%
			100 or more			50%
	*/

	float discount;

	// check which discount rate is applicable
	if ( no_of_items  < 10 ) {
		discount = 0.0;
	} else if ( no_of_items >= 10 && no_of_items <= 19 ) {
		discount = 0.2;
	} else if ( no_of_items >= 20 && no_of_items <= 49 ) {
		discount = 0.3;
	} else if ( no_of_items >= 50 && no_of_items <= 99 ) {
		discount = 0.4;
	} else if ( no_of_items >= 100 ) {
		discount = 0.5;
	}

	// calculate Gross and Net sales figures
	float salesGross, salesDiscount, salesNet;

	salesGross = no_of_items * SELLING_PRICE;
	salesDiscount = salesGross * discount;
	salesNet = salesGross - salesDiscount;

	// display result to user
	cout << "No of Items Purchased:\t" << no_of_items << endl << endl;
	cout << "Gross Sales:\t" << salesGross << endl;
	cout << "Discount (" << discount*100 << "%):\t" << "(" << salesDiscount << ")" << endl << endl;
	cout << "Net Sales:\t" << salesNet << endl;


	return 0;
}