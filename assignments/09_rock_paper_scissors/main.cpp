#include <iostream>

class Tool {
protected:
	int m_strength;
	char m_type;

	void setStrenght(int new_strength) {
		 this->m_strength = new_strength;
	}

public:
	int getStrength() {
		return this->m_strength;
	}

	char getType() {
		return this->m_type;
	}
};

class Rock : public Tool {
public:
	Rock(int strength) {
		this->m_strength = strength;
		this->m_type = 'r';
	}

	bool fight(Tool t) {
		switch (t.getType()) {
			case 'r':
			{
				throw "Rock cannot fight against Rock";
				break;
			}

			case 'p':
			{
				float rock_temp_strength = (float)this->m_strength / 2.0;
				std::cout 	<< "Rock vs. Paper:: Rock: " << rock_temp_strength
							<< " Paper: " << t.getStrength() << std::endl;
				return (rock_temp_strength > t.getStrength()) ? true : false;
			}

			case 's':
			{
				float scis_temp_strength = (float)t.getStrength() / 2.0;
				std::cout 	<< "Rock vs. Scissors:: Rock: " << this->m_strength
							<< " Scissors: " << scis_temp_strength << std::endl;
				return (this->m_strength > scis_temp_strength) ? true : false;
			}

			default:
			{
				throw "Invalid Object: Cannot fight against Rock";
			}
		}
	}
};

class Paper : public Tool {
public:
	Paper(int strength) {
		this->m_strength = strength;
		this->m_type = 'p';
	}

	bool fight(Tool t) {
		switch (t.getType()) {
			case 'r':
			{
				float rock_temp_strength = (float)t.getStrength() / 2.0;
				std::cout 	<< "Paper vs. Rock:: Paper: " << this->m_strength
							<< " Rock: " << rock_temp_strength << std::endl;
				return (this->m_strength > rock_temp_strength) ? true : false;
			}

			case 'p':
			{
				throw "Paper cannot fight against Paper";
				break;
			}

			case 's':
			{
				float paper_temp_strength = (float)this->m_strength / 2.0;
				std::cout 	<< "Paper vs. Scissors:: Paper: " << paper_temp_strength
							<< " Scissors: " << t.getStrength() << std::endl;
				return (paper_temp_strength > t.getStrength()) ? true : false;
			}

			default:
			{
				throw "Invalid Object: Cannot fight against Paper";
			}
		}
	}
};

class Scissors : public Tool {
public:
	Scissors(int strength) {
		this->m_strength = strength;
		this->m_type = 's';
	}

	bool fight(Tool t) {
		switch (t.getType()) {
			case 'r':
			{
				float scis_temp_strength = (float)this->m_strength / 2.0;
				std::cout 	<< "Scissors vs. Rock:: Scissors: " << scis_temp_strength
							<< " Rock: " << t.getStrength() << std::endl;
				return (scis_temp_strength > t.getStrength()) ? true : false;
			}

			case 'p':
			{
				float paper_temp_strength = (float)t.getStrength() / 2.0;
				std::cout 	<< "Scissors vs. Paper:: Scissors: " << this->m_strength
							<< " Paper: " << paper_temp_strength << std::endl;
				return (this->m_strength > paper_temp_strength) ? true : false;
			}

			case 's':
			{
				throw "Scissors cannot fight against Scissors";
				break;
			}

			default:
			{
				throw "Invalid Object: Cannot fight against Scissors";
			}
		}
	}
};

int main() {
	Scissors s1(5);
	Paper p1(7);
	Rock r1(15);

	try {
		std::cout << s1.fight(p1) << p1.fight(s1) << std::endl;
		std::cout << p1.fight(r1) << r1.fight(p1) << std::endl;
		std::cout << r1.fight(s1) << s1.fight(r1) << std::endl;
	} catch (const char * err) {
		std::cerr << "Error: " << err << std::endl;
	}

	return 0;
}