/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 22:30:03 by ialinaok          #+#    #+#             */
/*   Updated: 2023/05/05 01:24:45 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(BitcoinExchange const & src) {

	*this = src;
}

BitcoinExchange::BitcoinExchange(std::string & filename) {

	std::ifstream	csvFile(filename.c_str());
	if (!csvFile.is_open()) {
		throw std::runtime_error("Failed to open database file and create BitcoinExchange object.");
	}

	std::string	line;
	while (std::getline(csvFile, line)) {
		if (line == "date,exchange_rate")
			continue;
		std::string	date_str = line.substr(0, line.find(','));
		std::string	value_str = line.substr(line.find(',') + 1);
		double	value = std::strtod(value_str.c_str(), NULL);
		this->_db[date_str] = value;
	}

	csvFile.close();

	// std::map<std::string, double>::iterator it;
	// for (it = this->_db.begin(); it != this->_db.end(); ++it)
	// 	std::cout << std::fixed << std::setprecision(2) << "date: " << it->first << ", value: " << it->second << std::endl;
	// 	std::cout << std::fixed << std::setprecision(2) << it->first << " " << it->second << std::endl;

}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange &	BitcoinExchange::operator=(BitcoinExchange const & rhs) {

	if (this != &rhs) {
		this->_db = rhs._db;
		this->_input = rhs._input;
	}
	return (*this);
}

void	BitcoinExchange::performExchange(std::string & filename) {

	
}

void	BitcoinExchange::parseInputFile(std::string & filename) {

	std::ifstream	inputFile(filename.c_str());
	if (!inputFile.is_open()) {
		throw std::runtime_error("Failed to open input file.");
	}

	std::string line;
	while (std::getline(inputFile, line)) {
		if (line == "date | value")
			continue;
		else
			throw std::invalid_argument("Wrong header line in input file.");

		//extract date string and check if it's correct
		std::string	date_str = line.substr(0, line.find(" | "));
		
	}
}
