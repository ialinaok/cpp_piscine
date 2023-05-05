/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 22:30:03 by ialinaok          #+#    #+#             */
/*   Updated: 2023/05/05 17:07:47 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {

	// std::cout << GREEN "default constructor called" D << std::endl;
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const & src) {

	*this = src;
}

BitcoinExchange::BitcoinExchange(std::string & filename) {

	// std::cout << GREEN "filename constructor called" D << std::endl;

	std::ifstream	csvFile(filename.c_str());
	if (!csvFile.is_open()) {
		throw std::runtime_error("Failed to open database file and create BitcoinExchange object.");
	}

	std::string	line;
	while (std::getline(csvFile, line)) {
		if (line == "date,exchange_rate")
			continue;
		std::string	dateStr = line.substr(0, line.find(','));
		std::string	valueStr = line.substr(line.find(',') + 1);
		double	value = std::strtod(valueStr.c_str(), NULL);
		this->_db[dateStr] = value;
	}

	csvFile.close();
}

BitcoinExchange::~BitcoinExchange() {

	// std::cout << GREEN "💥default destructor called 💥" D << std::endl;
}

BitcoinExchange &	BitcoinExchange::operator=(BitcoinExchange const & rhs) {

	if (this != &rhs) {
		this->_db = rhs._db;
		this->_input = rhs._input;
	}
	return (*this);
}

void	BitcoinExchange::performExchange(std::string & filename) {

	std::ifstream	inputFile(filename.c_str());
	if (!inputFile.is_open()) {
		throw std::runtime_error("Failed to open input file.");
	}

	std::string line;
	std::getline(inputFile, line);
	if (line != "date | value")
		throw std::invalid_argument("Wrong header line in input file.");

	while (std::getline(inputFile, line)) {

//check if input is in correct format
		size_t pos1 = line.find("-");
		size_t pos2 = line.find("-", pos1 + 2);
		size_t pos3 = line.find(" | ", pos2 + 2);

		if(pos1 != 4 || pos2 != 7 || pos3 != 10)
		{
			std::cerr << RED "Error: invalid input format." D << std::endl;
			continue ;
		}
//extract date string and check if it's correct
		std::string	dateStr = line.substr(0, line.find("|"));
		if (!this->checkDate(dateStr))
			continue ;
//extract amount of BTC and check if it's correct
		std::string	btcStr = line.substr(line.find("|") + 1);
		double	btcAmount = strtod(btcStr.c_str(), NULL);
		if (btcAmount < 0) {
			std::cerr << RED "Error: not a positive number." D << std::endl;
			continue;
		}
		else if (btcAmount > 1000) {
			std::cerr << RED "Error: too large number. Can't own so many BTC." D << std::endl;
			continue ;
		}
//find the nearest matching value in map _db
		double	btcValue = -1;

		std::map<std::string, double>::iterator it;
		for (it = this->_db.begin(); it != this->_db.end(); ++it) {
			if (it->first == dateStr) {
				btcValue = it->second;
				break;
			}
			else if (it->first > dateStr) {
				--it;
				btcValue = it->second;
				break;
			}
		}
//print out the final line with exchange
		std::cout << dateStr << "=> " << btcAmount << " = " << btcAmount * btcValue << std::endl;
	}
}

bool	BitcoinExchange::checkDate(std::string & dateStr) {

//checking if date is in the right format
	int				year, month, day;
	char			delimiter1;
	char			delimiter2;

	std::istringstream	dateStream(dateStr);

	dateStream >> year >> delimiter1 >> month >> delimiter2 >> day;

	if (delimiter1 != '-' || delimiter2 != '-') {
		std::cerr << RED "Error: wrong date format. Correct format: YYYY-MM-DD" << std::endl;
		return (false);
	}

//checking if date is at all valid
	if (year < 0) {
		std::cerr << RED "Error: date wrong." D << std::endl;
		return (false);
	}
	if (month < 1 || month > 12) {
		std::cerr << RED "Error: date wrong." D << std::endl;
		return (false);
	}
	if (day < 1 || day > 31) {
		std::cerr << RED "Error: date wrong." D << std::endl;
		return (false);
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11) {
		if (day > 30) {
			std::cerr << RED "Error: date wrong." D << std::endl;
			return (false);
		}
	}
	else if (month == 2) {
		if (day > 29) {
			std::cerr << RED "Error: date wrong." D << std::endl;
			return (false);
		}
		else if (day == 29 && (year % 4 != 0 || (year % 100 == 0 && year % 400 != 0))) {
			std::cerr << RED "Error: date wrong." D << std::endl;
			return (false);
		}
	}

//checking if date is within correct scope for btc

	time_t	now = time(0);
	tm	*nowTm = localtime(&now);

	if (year < 2009 || (year == 2009 && month == 1 && day == 1))
		std::cerr << RED "Error: bitcoin doesn't exist yet." D << std::endl;

	int	nowYear = nowTm->tm_year + 1900;
	int	nowMonth = nowTm->tm_mon + 1;
	int	nowDay = nowTm->tm_mday;

	if (year > nowYear || (year == nowYear && month > nowMonth) || \
		(year == nowYear && month == nowMonth && day > nowDay)) {
		std::cerr << RED "Error: date from the future." D << std::endl;
		return (false);
	}
	return (true);
}
