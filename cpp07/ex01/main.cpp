/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:27:57 by apielasz          #+#    #+#             */
/*   Updated: 2023/03/21 15:52:53 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

class	Iter {

	public:
		Iter() : _value(42.42f) { return; }
		float	getValue(void) const {return (this->_value);}

	private:
		float	_value;
};

std::ostream &	operator<<(std::ostream & o, Iter const & rhs) {

	o << rhs.getValue();
	return (o);
}

int	main() {

	int			int_arr[] = {0, 1, 4, 2};
	std::string	str_arr[] = {"hi", "how", "are", "you"};
	Iter		iter_arr[5];

	std::cout << YELL "***********************" D << std::endl;
	std::cout << YELL "*** TESTING INT ARR ***" D << std::endl;
	std::cout << YELL "***********************" D << std::endl;

	std::cout << CY;
	iter(int_arr, 4, print_element);

	std::cout << YELL "***********************" D << std::endl;
	std::cout << YELL "*** TESTING STR ARR ***" D << std::endl;
	std::cout << YELL "***********************" D << std::endl;

	std::cout << PU;
	iter(str_arr, 4, print_element);

	std::cout << YELL "************************" D << std::endl;
	std::cout << YELL "*** TESTING ITER ARR ***" D << std::endl;
	std::cout << YELL "************************" D << std::endl;

	std::cout << BLU;
	iter(iter_arr, 4, print_element);

	return (0);
}