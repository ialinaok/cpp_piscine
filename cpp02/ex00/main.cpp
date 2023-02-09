/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:58:37 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/09 19:55:55 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void) {

///*** COLORED OUTPUT ***//
		std::cout << std::endl << WH << "---> Fixed	a;" << PU << std::endl;
	Fixed	a;
		std::cout << std::endl << WH << "---> Fixed	b(a);" << BL << std::endl;
	Fixed	b(a);
		std::cout << std::endl << WH << "---> Fixed	c;" << CY << std::endl;
	Fixed	c;

		std::cout << std::endl << WH << "---> c = b;" << YELL << std::endl;
	c = b;

		std::cout << std::endl << WH << "---> std::cout << a.getRawBits() << std::endl;" << GREEN << std::endl;
	std::cout << a.getRawBits() << std::endl;
		std::cout << std::endl << WH << "---> std::cout << b.getRawBits() << std::endl;" << RED << std::endl;
	std::cout << b.getRawBits() << std::endl;
		std::cout << std::endl << WH << "---> std::cout << c.getRawBits() << std::endl;" << PU << std::endl;
	std::cout << c.getRawBits() << std::endl;

	std::cout << BL << "*** Testing setRawBits ***" << std::endl;
	a.setRawBits(23);
	std::cout << a.getRawBits() << D << std::endl;

//*** SUBJECT OUTPUT***//
	// Fixed	a;
	// Fixed	b(a);
	// Fixed	c;

	// c = b;

	// std::cout << a.getRawBits() << std::endl;
	// std::cout << b.getRawBits() << std::endl;
	// std::cout << c.getRawBits() << std::endl;

	// std::cout << BL << "*** Testing setRawBits ***" << std::endl;
	// a.setRawBits(23);
	// std::cout << a.getRawBits() << D << std::endl;

	return (0);
}