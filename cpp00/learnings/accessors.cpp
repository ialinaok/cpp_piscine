/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   accessors.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:30:35 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/11 14:43:43 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "accessors.hpp"

Accessors::Accessors (void) {

	std::cout << "Constuctor Accessors called" << std::endl;
	
	this->setFoo(0);
	std::cout << "this->getFoo(): " << this->getFoo() << std::endl;
	
	std::cout << ">>> end of constructor <<<" << std::endl;
	return ;
}

Accessors::~Accessors (void) {

	std::cout << "Destructor Accessors called" << std::endl;

	return ;
}

int	Accessors::getFoo(void) const {

	return this->_foo;
}

int	Accessors::setFoo(int v) {

	if (v >= 0)
		this->_foo = v;
	else
		std::cout << "only non-negative numbers are accepted" << std::endl;

	return (0);
}