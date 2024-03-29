/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator_overload.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:07:51 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/07 19:53:30 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operator_overload.hpp"

Integer::Integer(int const n) : _n(n) {}

Integer::~Integer() {}

int	Integer::getValue(void) const {

	return (this->_n);
}

Integer&	Integer::operator=(Integer const& rhs) {

	std::cout << "Assignation operator called from " << this->_n;
	std::cout << " to " << rhs.getValue() << std::endl;

	this->_n = rhs.getValue();

	return *this;
}

Integer	Integer::operator+(Integer const& rhs) const {

	std::cout << "Addition operator called with " << this->_n;
	std::cout << " and " << rhs.getValue() << std::endl;

	return (Integer(this->_n + rhs.getValue()));
}

std::ostream&	operator<<(std::ostream& o, Integer const& rhs) {

	o << rhs.getValue(); //recovering integer that we insert in the stream

	return (o);
}