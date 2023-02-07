/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   canonical.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 20:17:22 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/07 20:24:03 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "canonical.hpp"

Canonical::Canonical() {

	std::cout << "Default constructor called" << std::endl;
}

Canonical::Canonical(int const n) : _foo(n) {

	std::cout << "Parametric constructor called" << std::endl;
}

Canonical::Canonical(Canonical const& src) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}
		
Canonical::~Canonical() {

	std::cout << "Destructor called" << std::endl;
}

Canonical&	Canonical::operator=(Canonical const& rhs) {

	std::cout << "Assignment operator called" << std::endl;

	if (this != &rhs)
		this->_foo = rhs.getFoo();

	return (*this);
}

int	Canonical::getFoo(void) const {

	return (this->_foo);
}

std::ostream&	operator<<(std::ostream& o, Canonical const& i) {

	o << "The value of _foo is: " << i.getFoo();

	return (o);
}