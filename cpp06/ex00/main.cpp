/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 12:24:01 by ialinaok          #+#    #+#             */
/*   Updated: 2023/03/10 12:12:21 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char **argv) {

	if (argc != 2) {

		std::cout << CY << "Correct usage of the program: ";
		std::cout << WH << "./convert <arg>" << std::endl;
		std::cout << PU << "accepted <arg>: " << WH << "<'char'>  <int>  <float>  <double>" << std::endl;
		return (1);
	}

	try {

		ScalarConverter::convert(argv[1]);
	}
	catch (ScalarConverter::InvalidValueException& e) {

		std::cout << RED << e.what() << std::endl;
	}
	return (0);
}