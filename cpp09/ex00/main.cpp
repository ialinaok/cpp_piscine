/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 22:09:32 by ialinaok          #+#    #+#             */
/*   Updated: 2023/05/05 17:23:38 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "BitcoinExchange.hpp"

int	main(int argc, char **argv) {

	if (argc != 2) {

		std::cout << RED "Error: incorrect number of arguments to the program." D << std::endl;
		std::cout << YELL "Correct usage: ./btc inputfile.txt" D << std::endl;
		return (1);
	}

	BitcoinExchange	btcEx;
	std::string	db("data.csv");
	//1) we are creating btc exchange object
	//it takes database as argument and loads up the values into map<string, double> container
	try {
		btcEx = BitcoinExchange(db);
	}
	catch (std::exception & err) {
		std::cout << RED << err.what() << D << std::endl;
		return (1);
	}
	//2) pass the input file and interpret it
	std::string	input(argv[1]);
	try {
		btcEx.performExchange(input);
	}
	catch (std::exception & err) {
		std::cout << RED << err.what() << D << std::endl;
		return (1);
	}

	return (0);
}