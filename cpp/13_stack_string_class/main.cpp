#include <iostream>
#include <cstring>
#include <map>
#include <cassert>

namespace custom {
	// stack allocated String class
	class String {
	private:
		const char* m_string;

	public:
		// dont want garbage values in uninitialized String objects
		String() : m_string("") {}
		String(const char* string) : m_string(string) {}

		uint length() const {
			return std::strlen(m_string);
		}

		const char* to_cstr() const {
			return m_string;
		}

		// overload operators
		friend std::ostream& operator<<(std::ostream& stream,
			const String& string) {
				stream << string.m_string;
				return stream;
		}

		// TODO: implement String concatenation through operator overloading
		// String operator+(const String& another) {
		// 	// const char* result_str = ;
		// 	return String(result_str);
		// }
	};
}


void test_string_length() {
	const std::map<const char*, unsigned int> test_cases = {
		{ "", 				0 	},
		{ "something", 		9 	},
		{ "3123*()_+)9#$",	13 	},
	};

	for(const std::pair<const char*, unsigned> test : test_cases) {
		custom::String s(test.first);
		assert(s.length() == test.second);
	}
	std::cout << "[debug]\t string length :: all tests passed! \n";
}

void test_string_stream_insertion() {
	const char* test_cases[] = {
		"this is a string",
		"2312489353289",
		"$*@)($*!$^*&@#_+",
	};

	for(const char* test : test_cases) {
		custom::String s(test);
		// TODO: direct output to a mock object instead of std::cout
		std::cout << s;
	}
	std::cout << "\n[debug]\t string stream insertion :: all tests passed! \n";
}

int main() {
	test_string_length();
	test_string_stream_insertion();
}