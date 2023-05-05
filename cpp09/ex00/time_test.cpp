// *** COLORS ***//
# define BLANK "\e[0m"
# define BLA "\033[0;30m"
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELL "\033[0;33m"
# define BLU "\033[0;34m"
# define PU "\033[0;35m"
# define CY "\033[0;36m"
# define WH "\033[0;37m"
# define D "\033[0m"

#include <iostream>
#include <sstream>

//1 - check if date is in the right format
//2 - check if date is at all valid
//3 - check if date is within given scope
//4 - find the nearest correlating date in db

int main() {

	std::string		line("2010-02-02 | 6");
	std::string		date = line.substr(0, line.find(" | "));
	std::string		howManyBTC_str = line.substr(line.find(" | ") + 3);
	std::cout << "date: " << date << std::endl;
	std::cout << "BTC str: " << howManyBTC_str << std::endl;

std::cout << YELL "****** checking if date is in the right format *******" D << std::endl;
	int				year, month, day;
	char			delimiter1;
	char			delimiter2;
	std::string		pipe;
	int				howManyBTC;

	std::istringstream	dateStream(line);

	dateStream >> year >> delimiter1 >> month >> delimiter2 >> day;

	std::cout << "Y: " << year << " M: " << month << " D: " << day << std::endl;
	std::cout << delimiter1 << delimiter2 << std::endl;
	if (delimiter1 != '-' || delimiter2 != '-')
		std::cout << "Error - wrong date format. Needs to be separated by '-'" << std::endl;

	std::cout << YELL "****** checking if date is at all valid using*******" D << std::endl;

	if (year < 2009 || year > 2023)
		std::cout << RED "Error - date wrong." D << std::endl;
	if (month < 1 || month > 12)
		std::cout << RED "Error - date wrong." D << std::endl;
	if (day < 1 || day > 31)
		std::cout << RED "Error - date wrong." D << std::endl;
	else if (month == 4 || month == 6 || month == 9 || month == 11) {
		if (day > 30)
			std::cout << RED "Error - date wrong." D << std::endl;
	}
	else if (month == 2) {
		if (day > 29)
			std::cout << RED "Error - date wrong." D << std::endl;
		else if (day == 29 && (year % 4 != 0 || (year % 100 == 0 && year % 400 != 0)))
			std::cout << RED "Error - date wrong." D << std::endl;
	}
	
	
	// std::tm	date_tm;

	// date_tm.tm_year = year - 1900;
	// date_tm.tm_mon = month - 1;
	// date_tm.tm_mday = day;

	// std::time_t	time = std::mktime(&date_tm);

	// if (time == -1)
	// 	std::cout << RED "Error - date wrong." D << std::endl;

	// std::cout << "BTC: " << howManyBTC << std::endl;
}