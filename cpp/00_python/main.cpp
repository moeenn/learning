#include <iostream>
#include <string>
#include <typeinfo>
#include "python.hpp"

using namespace python;

int main() {
	const std::string example = input<std::string>("Enter a message: ");
	print("[example]\t", example, "\n");

	const char* prim_str = "someone";
	print("[const char*]\t", typeid(prim_str).name(), '\n');

	const std::string str = "something";
	print("[std::string]\t", typeid(str).name(), '\n');
}