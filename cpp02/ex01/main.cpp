/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 19:37:31 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/09 19:56:16 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void) {

///*** COLORED OUTPUT ***//
		std::cout << std::endl << WH << "---> Fixed	a;" << PU << std::endl;
	Fixed	a;
		std::cout << std::endl << WH << "---> Fixed	b(10);" << BL << std::endl;
	Fixed	b(10);
		std::cout << std::endl << WH << "---> Fixed	c(42.42f);" << YELL << std::endl;
	Fixed	c(42.42f);
		std::cout << std::endl << WH << "---> Fixed	d(b);" << GREEN << std::endl;
	Fixed	d(b);

		std::cout << std::endl << WH << "---> a = Fixed(1234.4321f);" << RED << std::endl;
	a = Fixed(1234.4321f);
		std::cout << WH << std::endl;

	std::cout << "a is: " << a << std::endl;
	std::cout << "b is: " << b << std::endl;
	std::cout << "c is: " << c << std::endl;
	std::cout << "d is: " << d << std::endl;

	std::cout << "a is: " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is: " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is: " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is: " << d.toInt() << " as integer" << std::endl;

//*** SUBJECT OUTPUT***//
	// Fixed	a;
	// Fixed	b(10);
	// Fixed	c(42.42f);
	// Fixed	d(b);

	// a = Fixed(1234.4321f);

	// std::cout << "a is: " << a << std::endl;
	// std::cout << "b is: " << b << std::endl;
	// std::cout << "c is: " << c << std::endl;
	// std::cout << "d is: " << d << std::endl;

	// std::cout << "a is: " << a.toInt() << " as integer" << std::endl;
	// std::cout << "b is: " << b.toInt() << " as integer" << std::endl;
	// std::cout << "c is: " << c.toInt() << " as integer" << std::endl;
	// std::cout << "d is: " << d.toInt() << " as integer" << std::endl;
	return (0);
}