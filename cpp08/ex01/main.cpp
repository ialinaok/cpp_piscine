/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 18:53:36 by apielasz          #+#    #+#             */
/*   Updated: 2023/04/01 17:53:05 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

int	main() {

	std::cout << YELL "*************************" WH << std::endl;

	Span	span(7);

	std::cout << YELL "*** adding 7 elements ***" << std::endl;
	span.addNumber(8);
	span.addNumber(20);
	span.addNumber(2367);
	span.addNumber(2369);
	span.addNumber(42);
	span.addNumber(2);
	span.addNumber(5);

	span.print_vector(PRINT_ALL);

	std::cout << std::endl << YELL "*** trying to add 8th element ***" << std::endl;;
	try {
		span.addNumber(1);
	}
	catch (Span::NoFreeSpaceNoMore & ns) {
		std::cout << RED << ns.what() << D << std::endl << std::endl;
	}
	std::cout << YELL "*** call to longestSpan() ***" << std::endl;
	std::cout << CY "longest span is: " WH << span.longestSpan() << std::endl << std::endl;

	std::cout << YELL "*** call to shortestSpan() ***" << std::endl;
	std::cout << CY "shortest span is: " WH << span.shortestSpan() << std::endl << std::endl;

	std::cout << YELL "*** testing addMany ***" << std::endl;

	Span	span1(10000);
	std::cout << std::endl << YELL "*" << BLA " adding 10 random numbers " YELL << "*" << std::endl;
	span1.addMany(10);
	span1.print_vector(PRINT_ALL);
	
	std::cout << std::endl << YELL "*" << BLA " adding 9990 random numbers, printing 20 " YELL << "*" << std::endl;
	span1.addMany(9990);
	span1.print_vector(20);

	std::cout << std::endl << YELL "*** trying to add 10 more elements ***" << std::endl;;
	try {
		span.addMany(10);
	}
	catch (Span::NoFreeSpaceNoMore & ns) {
		std::cout << RED << ns.what() << D << std::endl << std::endl;
	}
	
//*** TEST FROM SUBJECT PDF, expected output: "2\n14" ***//
	// Span sp = Span(5);

	// sp.addNumber(6);
	// sp.addNumber(3);
	// sp.addNumber(17);
	// sp.addNumber(9);
	// sp.addNumber(11);
	// std::cout << sp.shortestSpan() << std::endl; std::cout << sp.longestSpan() << std::endl;

	return 0;
}