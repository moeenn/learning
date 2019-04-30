# include <iostream>
using namespace std;

int main() {
	// ask user for calories and fats 
	cout << "Please enter the total number of Calories: ";
	float total_calories; 
	cin >> total_calories;

	// input validations
	// total calories must be more than 0
	if (total_calories <= 0 ) {
		cout << "Invalid Input! Calories must be more than Zero." << endl;
		return 1;
	}

	cout << "Please enter the total grams of Fat consumed: ";
	float total_fats;
	cin >> total_fats;

	// input validations
	// total calories must be more than 0
	if ( total_fats < 0 ) {
		cout << "Invalid Input! Grams of Fat cannot be negative." << endl;
		return 1;
	}

	// define calories per gram of fat consumed
	const int CALORIES_PER_GRAM_FAT = 9;

	// calculate total calories from fat
	float total_fat_calories;
	total_fat_calories = total_fats * CALORIES_PER_GRAM_FAT;

	// calculate percentage of calories from fats out of total calories
	float perc_calories_fat;
	perc_calories_fat = ( total_fat_calories / total_calories ) * 100 ;

	// sanity check: Total calories from fat cannot be more than total calories in the food!
	if ( total_fat_calories > total_calories ) {
		cout << "Error: Calories from fats cannot be more than total calories in food!";
		return 1;
	}

	// display results to user
	cout << "Total Percentage of Calories from Fats is " << perc_calories_fat << "%."<< endl;

	return 0;
}