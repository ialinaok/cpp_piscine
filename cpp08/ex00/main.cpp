/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:39:41 by apielasz          #+#    #+#             */
/*   Updated: 2023/03/27 15:55:59 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <deque>
#include <list>

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
	v.push_back(42);
	v.push_back(2);
	v.push_back(9);
	v.push_back(5);

	print_container(v);
	std::cout << RED << *(easyfind(v, 9)) << std::endl;
}