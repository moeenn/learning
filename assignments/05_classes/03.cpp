/*
	create phone helpline menu
*/

#include <iostream>

enum { URDU = 1, ENGLISH };

class Menu {
private:
	unsigned int m_current_level = 0;
	unsigned int m_language;
	unsigned int m_selection;

private:
	void level_0() {
		std::cout 	<< "\nWelcome to our Helpline. Please select an Option: \n"
					<< "1. Instructions in Urdu \n"
					<< "2. Instructions in English \n"
					<< "\n0. Exit \n";

		std::cin >> m_selection;

		switch(m_selection) {
			case URDU:
				m_language = URDU;
				break;

			case ENGLISH:
				m_language = ENGLISH;
				break;

			case 0:
				std::cout << "Thank you for your time. Exiting ... \n";
				std::exit(0);

			default:
				throw "Invalid Option Selected \n";
		}
		// advance to next screen
		m_current_level++;
	}

	void level_1() {
		switch(m_language) {
			case ENGLISH:
				std::cout 	<< "\n1. Balance Inquiry \n"
							<< "2. Recharge Balance \n"
							<< "3. Talk to a customer representative \n"
							<< "4. Go back to previous menu \n"
							<< "\n0. Exit \n";
							break;

			case URDU:
				std::cout 	<< "\n1. Balance Pata Karain \n"
							<< "2. Naya Balance Dalwain \n"
							<< "3. Banday say baat karian \n"
							<< "4. Pichli screen pay wapas jaen \n"
							<< "\n0. Band Karain\n";
							break;

			default:
				throw "Invalid Language Selected \n";
		}

		std::cin >> m_selection;

		if (m_selection == 0) { std::exit(0); }
		m_current_level = (m_selection == 4) ? m_current_level - 1 : m_current_level + 1;
	}

	void level_2() {
		switch(m_language) {
			case ENGLISH:
				switch(m_selection) {
					case 1:
						std::cout 	<< "\nYour Current Balance is: Rs. 1010 /-\n";
						break;

					case 2:
						std::cout 	<< "\nPlease enter the amount to recharge: ";
						unsigned int recharge;
						std::cin 	>> recharge;
						std::cout 	<< "The amount has been added to your account \n";
						break;

					case 3:
						std::cout 	<< "We are connecting you to our customer representative \n"
									<< "Please wait ... \n"
									<< "Unfortunately all our lines are currently busy, please "
									<< "try again later \n";
						break;

					default:
						throw "Invalid option selected \n";
				}
				break;

			case URDU:
				switch(m_selection) {
					case 1:
						std::cout << "\nApp ka Balance hai: Rs. 1010 /-\n";
						break;

					case 2:
						std::cout << "\nRecharge kay paisay batain: ";
						unsigned int recharge;
						std::cin >> recharge;
						std::cout << "Paisay app k account main daal diyay gae hain \n";
						break;

					case 3:
						std::cout 	<< "App ko bnday say connect kia ja raha hai \n"
									<< "Intazar karain ... \n"
									<< "Hamaray saray bnday masroof hain "
									<< "Thehar k dobara try karain \n";
						break;

					default:
						throw "Invalid option selected \n";
				}
				break;

			default:
				throw "Invalid Language Selected \n";
		}
		m_current_level--;
	}

public:
	void level() {
		switch(m_current_level) {
			case 0:
				level_0();
				break;

			case 1:
				level_1();
				break;

			case 2:
				level_2();
				break;

			default:
				throw "Invalid Level Selected \n";
		}
	}
};

int main() {
	Menu m;

	while(true) {
		try {
			m.level();
		} catch(const char* err) {
			std::cerr << err << std::endl;
		}
	}
}