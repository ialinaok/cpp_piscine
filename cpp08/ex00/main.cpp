/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:39:41 by apielasz          #+#    #+#             */
/*   Updated: 2023/03/28 19:43:23 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <iterator>

template <typename T>
void	print_container(T & container) {

	int	i = 0;

	for (typename T::const_iterator it = container.begin(); it != container.end(); it++, i++)
		std::cout << BLA "container[" WH << i << BLA "] = " WH << *it << D << std::endl;
}

int	main() {

	std::vector<int> v;

	std::cout << YELL "--------------------------" WH << std::endl;
	std::cout << YELL "------TESTING VECTOR------" WH << std::endl;
	std::cout << YELL "--------------------------" WH << std::endl;

	v.push_back(23);
	v.push_back(9);
	v.push_back(2);
	v.push_back(9);
	v.push_back(5);

	print_container(v);
	std::cout << YELL "--------------------------" WH << std::endl;
	std::cout << YELL "Value " WH << *(easyfind(v, 9).first) << YELL " found at index " WH << easyfind(v, 9).second << std::endl;
	std::cout << YELL "Value " WH << *(easyfind(v, 5).first) << YELL " found at index " WH << easyfind(v, 5).second << std::endl;
	std::cout << YELL "Value " WH << *(easyfind(v, 2).first) << YELL " found at index " WH << easyfind(v, 2).second << std::endl;
	std::cout << YELL "--------------------------" WH << std::endl;

	std::cout << PU "--------------------------" WH << std::endl;
	std::cout << PU "------TESTING LIST------" WH << std::endl;
	std::cout << PU "--------------------------" WH << std::endl;

	std::list<int> l;
	l.push_back(42);
	l.push_back(7);
	l.push_back(111);
	l.push_back(0);
	l.push_back(0);

	print_container(l);
	std::cout << PU "--------------------------" WH << std::endl;
	std::cout << PU "Value " WH << *(easyfind(l, 0).first) << PU " found at index " WH << easyfind(l, 0).second << std::endl;
	std::cout << PU "Value " WH << *(easyfind(l, 111).first) << PU " found at index " WH << easyfind(l, 111).second << std::endl;
	std::cout << GREEN "*** Attempting to find a value that is not present in the list ***" D << std::endl;
	try {

		std::cout << *(easyfind(l, 2).first) << PU " found at index " WH << easyfind(l, 2).second << std::endl;
	}
	catch (::OccurenceNotFound& not_found) {

		std::cout << RED << not_found.what() << D << std::endl;
	}
	std::cout << PU "--------------------------" WH << std::endl;

	std::cout << CY "-------------------------" WH << std::endl;
	std::cout << CY "------TESTING DEQUE------" WH << std::endl;
	std::cout << CY "-------------------------" WH << std::endl;

	std::deque<int> d;

	d.push_back(6436);
	d.push_back(1);
	d.push_back(666);

	print_container(d);
	std::cout << CY "--------------------------" WH << std::endl;
	std::cout << CY "Value " WH << *(easyfind(d, 1).first) << CY " found at index " WH << easyfind(d, 1).second << std::endl;
	std::cout << GREEN "*** Attempting to find a value that is not present in the list ***" D << std::endl;
	try {

		std::cout << *(easyfind(d, 88).first) << PU " found at index " WH << easyfind(d, 2).second << std::endl;
	}
	catch (::OccurenceNotFound& not_found) {

		std::cout << RED << not_found.what() << D << std::endl;
	}
	std::cout << CY "Value " WH << *(easyfind(d, 666).first) << CY " found at index " WH << easyfind(d, 666).second << std::endl;

	//*******************************************************
	//*** for testing with easyfind that returns iterator ***//

	// std::vector<int> v;

	// std::cout << YELL "--------------------------" WH << std::endl;
	// std::cout << YELL "------TESTING VECTOR------" WH << std::endl;
	// std::cout << YELL "--------------------------" WH << std::endl;

	// v.push_back(23);
	// v.push_back(9);
	// v.push_back(2);
	// v.push_back(9);
	// v.push_back(5);

	// std::cout << YELL "--------------------------" WH << std::endl;
	// std::cout << YELL "Value " WH << *(easyfind(v, 9)) << YELL " found at index " WH << easyfind(v, 9) - v.begin() << std::endl;
	// std::cout << YELL "Value " WH << *(easyfind(v, 5)) << YELL " found at index " WH << easyfind(v, 5) - v.begin() << std::endl;
	// std::cout << YELL "Value " WH << *(easyfind(v, 2)) << YELL " found at index " WH << easyfind(v, 2) - v.begin() << std::endl;

	// std::cout << PU "--------------------------" WH << std::endl;
	// std::cout << PU "------TESTING LIST------" WH << std::endl;
	// std::cout << PU "--------------------------" WH << std::endl;

	// std::list<int> l;
	// l.push_back(42);
	// l.push_back(7);
	// l.push_back(111);
	// l.push_back(0);
	// l.push_back(0);

	// std::cout << PU "Value " WH << *(easyfind(l, 0)) << PU " found" WH << std::endl;
	// std::cout << PU "Value " WH << *(easyfind(l, 111)) << PU " found" WH << std::endl;
	// std::cout << GREEN "*** Attempting to find a value that is not present in the list ***" D << std::endl;
	// try {

	// 	std::cout << *(easyfind(l, 2).first) << PU " found at index " WH << easyfind(l, 2).second << std::endl;
	// }
	// catch (::OccurenceNotFound& not_found) {

	// 	std::cout << RED << not_found.what() << D << std::endl;
	// }
}