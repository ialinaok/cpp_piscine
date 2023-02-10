/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 14:10:58 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/10 18:39:50 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void) {

	std::cout << WH << std::endl;

	Fixed	a(23.23f);
	Fixed	b(42.42f);
	Fixed	c;
	Fixed	d(2);
	Fixed	e;

	std::cout << CY << "Value of a: " << a << std::endl;
	std::cout << "Value of b: " << b << std::endl;
	std::cout << "Value of c: " << c << std::endl;
	std::cout << "Value of d: " << d << std::endl;
	std::cout << "Value of e: " << e << WH << std::endl;

	std::cout << YELL << "-------------------------------------------------------" << WH << std::endl;
	std::cout << GREEN << "Assignment operator, c = a" << WH << std::endl;
	c = a;
	std::cout << CY << "Value of c: " << c << WH << std::endl;
	std::cout << YELL << "-------------------------------------------------------" << WH << std::endl;

	std::cout << GREEN << "Relational operator, a < b" << BLACK;
	std::cout << "          [" << a << " < " << b << "]" << WH << std::endl;
	if (a < b)
		std::cout << "a is smaller than b" << std::endl;
	else
		std::cout << "a is not smaller than b" << std::endl;
	std::cout << YELL << "-------------------------------------------------------" << WH << std::endl;

	std::cout << GREEN << "Relational operator, a > b" << BLACK;
	std::cout << "          [" << a << " > " << b << "]" << WH << std::endl;
	if (a > b)
		std::cout << "a is greater than b" << std::endl;
	else
		std::cout << "a is not greater than b" << std::endl;
	std::cout << YELL << "-------------------------------------------------------" << WH << std::endl;

	std::cout << GREEN << "Relational operator, a <= c" << BLACK;
	std::cout << "        [" << a << " <= " << c << "]" << WH << std::endl;
	if (a <= c)
		std::cout << "a is smaller than or equal to c" << std::endl;
	else
		std::cout << "a is not smaller or equal to c" << std::endl;
	std::cout << YELL << "-------------------------------------------------------" << WH << std::endl;

	std::cout << GREEN << "Relational operator, b >= c" << BLACK;
	std::cout << "        [" << b << " >= " << a << "]" << WH << std::endl;
	if (b >= a)
		std::cout << "b is greater than or equal to a" << std::endl;
	else
		std::cout << "b is greater than or equal to a" << std::endl;
	std::cout << YELL << "-------------------------------------------------------" << WH << std::endl;

	std::cout << GREEN << "Relational operator, a == c" << BLACK;
	std::cout << "        [" << a << " == " << c << "]" << WH << std::endl;
	if (a == c)
		std::cout << "a is equal to c" << std::endl;
	else
		std::cout << "a is not equal to c" << std::endl;
	std::cout << YELL << "-------------------------------------------------------" << WH << std::endl;

	std::cout << GREEN << "Relational operator, a == b" << BLACK;
	std::cout << "        [" << a << " == " << b << "]" << WH << std::endl;
	if (a == b)
		std::cout << "a is equal to b" << std::endl;
	else
		std::cout << "a is not equal to b" << std::endl;
	std::cout << YELL << "-------------------------------------------------------" << WH << std::endl;

	std::cout << GREEN << "Relational operator, a != b" << BLACK;
	std::cout << "        [" << a << " != " << b << "]" << WH << std::endl;
	if (a != b)
		std::cout << "a is not equal to b" << std::endl;
	else
		std::cout << "a is equal to b" << std::endl;
	std::cout << YELL << "-------------------------------------------------------" << WH << std::endl;

	std::cout << GREEN << "Arithmetic operator, a + b:" << BLACK << std::endl;
	std::cout << a << " + " << b << " = " WH;
	std::cout << a + b << std::endl;
	std::cout << YELL << "-------------------------------------------------------" << WH << std::endl;

	std::cout << GREEN << "Arithmetic operator, b - a" << BLACK << std::endl;
	std::cout << b << " - " << a << " = " WH;
	std::cout << b - a << std::endl;
	std::cout << YELL << "-------------------------------------------------------" << WH << std::endl;

	std::cout << GREEN << "Arithmetic operator, a * d" << BLACK << std::endl;
	std::cout << a << " * " << d << " = " WH;
	std::cout << a * d << std::endl;
	std::cout << YELL << "-------------------------------------------------------" << WH << std::endl;

	std::cout << GREEN << "Arithmetic operator, b / d" << BLACK << std::endl;
	std::cout << b << " / " << d << " = " WH;
	std::cout << b / d << std::endl;
	std::cout << YELL << "-------------------------------------------------------" << WH << std::endl;

	std::cout << GREEN << "Arithmetic operator, b / e" << BLACK << std::endl;
	std::cout << b << " / " << e << " = " WH;
	std::cout << b / e << std::endl;
	std::cout << YELL << "-------------------------------------------------------" << WH << std::endl;

	std::cout << BLACK << "This is epsilon: " << WH << a.getEpsilon() << std::endl;
	std::cout << YELL << "-------------------------------------------------------" << WH << std::endl;
	std::cout << GREEN << "Pre-increment operator, ++a" << BLACK;
	std::cout << "      [" << a << " + " << a.getEpsilon() << "]" << WH << std::endl;
	std::cout << ++a << std::endl;
	std::cout << YELL << "-------------------------------------------------------" << WH << std::endl;

	std::cout << GREEN << "Post-increment operator, a++" << BLACK;
	std::cout << "     [" << a << " + " << a.getEpsilon() << "]" << WH << std::endl;
	std::cout << a++ << " -> " << a <<std::endl;
	std::cout << YELL << "-------------------------------------------------------" << WH << std::endl;

	std::cout << GREEN << "Pre-decrement operator, --a" << BLACK;
	std::cout << "      [" << a << " + " << a.getEpsilon() << "]" << WH << std::endl;
	std::cout << --a << std::endl;
	std::cout << YELL << "-------------------------------------------------------" << WH << std::endl;

	std::cout << GREEN << "Post-decrement operator, a--" << BLACK;
	std::cout << "     [" << a << " + " << a.getEpsilon() << "]" << WH << std::endl;
	std::cout << a-- << " -> " << a <<std::endl;
	std::cout << YELL << "-------------------------------------------------------" << WH << std::endl;

	std::cout << GREEN << "min() function #1, a.min(a, b)" << BLACK;
	std::cout << "  [min(" << a << ", " << b << ")]" << WH << std::endl;
	std::cout << a.min(a, b) <<std::endl;
	std::cout << YELL << "-------------------------------------------------------" << WH << std::endl;

	std::cout << GREEN << "min() function #2, a.min(a, b)" << BLACK;
	std::cout << "  [min(" << a << ", " << b << ")]" << WH << std::endl;
	std::cout << a.min((const Fixed&)a, (const Fixed&)b) <<std::endl;
	std::cout << YELL << "-------------------------------------------------------" << WH << std::endl;

	std::cout << GREEN << "max() function #1, a.max(a, b)" << BLACK;
	std::cout << "  [max(" << a << ", " << b << ")]" << WH << std::endl;
	std::cout << a.max(a, b) <<std::endl;
	std::cout << YELL << "-------------------------------------------------------" << WH << std::endl;

	std::cout << GREEN << "max() function #2, a.max(a, c)" << BLACK;
	std::cout << "  [max(" << a << ", " << c << ")]" << WH << std::endl;
	std::cout << a.max((const Fixed&)a, (const Fixed&)c) <<std::endl;
	std::cout << YELL << "-------------------------------------------------------" << WH << std::endl;

	// std::cout << RED << "***TEST FROM SUBJECT PDF***" << WH << std::endl;
	// Fixed	aa;
	// Fixed	bb(Fixed(5.05f) * Fixed(2));

	// std::cout << aa << std::endl;
	// std::cout << ++aa << std::endl;
	// std::cout << aa << std::endl;
	// std::cout << aa++ << std::endl;
	// std::cout << aa << std::endl;

	// std::cout << bb << std::endl;

	// std::cout << Fixed::max(aa, bb) << std::endl;

	return (0);
}