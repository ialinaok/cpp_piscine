#include <iostream>
#include <string>
#include <cctype>

bool	check_numeric_input(std::string literal) {

	bool	dot_encountered = false;
	for (std::string::const_iterator it = literal.begin(); it != literal.end(); it++) {

		if (*literal.begin() == '-' || *literal.begin() == '+')
			continue ;
		if (!std::isdigit(*it)) {

			if (*it == '.' && !dot_encountered)
				dot_encountered = true;
			else
				return (false);
		}
	}
	return (true);
}

int main() {

	std::string f = "2345.87654f";

	f.erase(f.end() - 1);

	std::cout << f << std::endl;

	std::cout << check_numeric_input("-0.2345") << std::endl;
	std::cout << check_numeric_input("2345.87654f") << std::endl;
	std::cout << check_numeric_input("23.23.23.") << std::endl;
	std::cout << check_numeric_input("34356a4565765bf") << std::endl;
}