/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 09:48:15 by apielasz          #+#    #+#             */
/*   Updated: 2023/03/21 10:50:26 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"
#include "Fixed.hpp"

int	main(void) {

	int			a = 23;
	int			b = 42;
	char		c = 'o';
	char		d = 'p';
	Fixed		e(23.23f);
	Fixed		f(42.42f);
	std::string	g = "whatever";
	std::string	h = "man";

	std::cout << YELL "********************" D << std::endl;
	std::cout << YELL "*** TESTING SWAP ***" D << std::endl;
	std::cout << YELL "********************" D << std::endl;
	std::cout << CY "a: " WH << a << CY ", b: " WH << b << std::endl;
	std::cout << CY "c: " WH << c << CY ", d: " WH << d << std::endl;
	std::cout << CY "e: " WH << e << CY ", f: " WH << f << std::endl;
	std::cout << CY "g: " WH << g << CY ", h: " WH << h << std::endl;
	::swap(a, b);
	::swap(c, d);
	::swap(e, f);
	::swap(g, h);
	std::cout << BLA "<< after swapping >>" WH << std::endl;
	std::cout << CY "a: " WH << a << CY ", b: " WH << b << std::endl;
	std::cout << CY "c: " WH << c << CY ", d: " WH << d << std::endl;
	std::cout << CY "e: " WH << e << CY ", f: " WH << f << std::endl;
	std::cout << CY "g: " WH << g << CY ", h: " WH << h << std::endl;

	std::cout << YELL "*******************" D << std::endl;
	std::cout << YELL "*** TESTING MAX ***" D << std::endl;
	std::cout << YELL "*******************" D << std::endl;
	std::cout << PU "max(" WH << a << PU ", " WH << b << PU ") = " WH << ::max(a, b)<< std::endl; //:: empty scope resolution operator used in order to specify that we call a swap function that is not a member function of a class or namespace
	std::cout << PU "max(" WH << c << PU ", " WH << d << PU ") = " WH << ::max(c, d)<< std::endl;
	std::cout << PU "max(" WH << e << PU ", " WH << f << PU ") = " WH << ::max(e, f)<< std::endl;
	std::cout << PU "max(" WH << g << PU ", " WH << h << PU ") = " WH << ::max(g, h)<< std::endl;

	std::cout << YELL "*******************" D << std::endl;
	std::cout << YELL "*** TESTING MIN ***" D << std::endl;
	std::cout << YELL "*******************" D << std::endl;
	std::cout << BLU "min(" WH << a << BLU ", " WH << b << BLU ") = " WH << ::min(a, b)<< std::endl;
	std::cout << BLU "min(" WH << c << BLU ", " WH << d << BLU ") = " WH << ::min(c, d)<< std::endl;
	std::cout << BLU "min(" WH << e << BLU ", " WH << f << BLU ") = " WH << ::min(e, f)<< std::endl;
	std::cout << BLU "min(" WH << g << BLU ", " WH << h << BLU ") = " WH << ::min(g, h)<< std::endl;

	return (0);

	//*** TEST FROM SUBJECT PDF ***//
	// int a = 2;
	// int b = 3;
	// ::swap( a, b );
	// std::cout << "a = " << a << ", b = " << b << std::endl;
	// std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	// std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	// std::string c = "chaine1";
	// std::string d = "chaine2";
	// ::swap(c, d);
	// std::cout << "c = " << c << ", d = " << d << std::endl;
	// std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	// std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	// return 0;
}