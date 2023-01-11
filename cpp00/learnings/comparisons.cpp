/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comparisons.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:52:33 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/11 16:21:16 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "comparisons.hpp"

Comparisons::Comparisons(int n) {

	std::cout << "Constructor Comparisons called" << std::endl;
	this->_foo = n;
	std::cout << ">>> end of constructor <<<" << std::endl;

	return ;
}

Comparisons::~Comparisons(void) {

	std::cout << "Destructor called" << std::endl;

	return ;
}

int	Comparisons::getFoo(void) const {

	return this->_foo;
}

// we get an address of a random instance
int	Comparisons::compare(Comparisons * other) const {

	if (this->_foo < other->getFoo())
		return (-1);
	else if (this->_foo > other->getFoo())
		return (1);
	// std::cout << "this->_foo: " << this->_foo << " other_getFoo(): " << other->getFoo() << std::endl;
	return (0);
}