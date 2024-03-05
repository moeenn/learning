#include <iostream>
using namespace std;

int main()
{
	// // Draw the figure
	// cout << "      *       " << endl;
	// cout << "     ***      " << endl;
	// cout << "    *****     " << endl;
	// cout << "   *******    " << endl;
	// cout << "  *********   " << endl;
	// cout << "   *******    " << endl;
	// cout << "    *****     " << endl;
	// cout << "     ***      " << endl;
	// cout << "      *       " << endl;

	int height = 9; // Adjust this value if you want a different height

    for (int i = 0; i < height; ++i) {
        // Print leading spaces
        for (int j = 0; j < height - i - 1; ++j) {
            std::cout << " ";
        }

        // Print asterisks
        for (int k = 0; k < 2 * i + 1; ++k) {
            std::cout << "*";
        }

        std::cout << std::endl;
    }
	return 0;
}



