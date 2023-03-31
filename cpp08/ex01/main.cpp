/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 18:53:36 by apielasz          #+#    #+#             */
/*   Updated: 2023/03/31 19:39:46 by apielasz         ###   ########.fr       */
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

	span.print_vector();

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

	std::cout << YELL "*** creating an array to add to span ***" << std::endl;

//add test for addMany
}