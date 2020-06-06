#ifndef PYTHON_HPP_
#define PYTHON_HPP_

// define functins and templates here

namespace python {

	// TODO: use std::getline in case of std::string and const char*
	// use std::cin in case of primitive variables
	template<typename T>
	T input(const char* msg) {
		std::cout << msg;
		T result;
		std::cin >> result;

		// error checking
		if(std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore();
			throw std::runtime_error("Invalid Input: Input data does not match the provided type");
		}

		return result;
	}

	template<typename... Args>
	void print(Args... args) {
	    (std::cout << ... << args);
	}
};


#endif