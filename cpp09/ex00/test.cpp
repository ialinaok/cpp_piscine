#include <iostream>
#include <string>
#include <fstream>
#include <stdexcept>
#include <cstdlib>
#include <map>

int	main() {

	std::ifstream	csvFile("short.csv");
	if (!csvFile.is_open()) {
		throw std::runtime_error("Failed to open database file and create BitcoinExchange object.");
	}

	std::string	line;
	std::string	date_str;
	std::string	value_str;
	double		value;
	std::map<std::string, double> _db;

	while (std::getline(csvFile, line)) {
		if (line == "date,exchange_rate")
			continue;
		date_str = line.substr(0, line.find(','));
		value_str = line.substr(line.find(',') + 1);
		value = std::strtod(value_str.c_str(), NULL);
		_db[date_str] = value;
	}

	csvFile.close();

	std::map<std::string, double>::iterator it;
	for (it = _db.begin(); it != _db.end(); ++it)
		std::cout << std::fixed << std::setprecision(5) << "date: " << it->first << ", value: " << it->second << std::endl;
}