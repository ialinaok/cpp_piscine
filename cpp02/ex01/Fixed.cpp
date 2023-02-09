/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:55:44 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/09 19:47:29 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_frac_bits = 8;

Fixed::Fixed() : _fixed_point(0) {

	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) : _fixed_point(n << this->_frac_bits) {

	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f) : _fixed_point(roundf(f * (1 << this->_frac_bits))) {

	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed() {

	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const& src) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed&	Fixed::operator=(Fixed const& rhs) {

	std::cout << "Copy assignment operator called" << std::endl;

	if (this != &rhs)
		this->_fixed_point = rhs.getRawBits();

	return (*this);
}

int		Fixed::getRawBits(void) const {

	// std::cout << "getRawBits member function called" << std::endl;

	return (this->_fixed_point);
}

void	Fixed::setRawBits(int const raw) {

	// std::cout << "setRawBits member function called" << std::endl;

	this->_fixed_point = raw;
}

float	Fixed::toFloat(void) const {

	float	f = (float)this->_fixed_point / (float)(1 << this->_frac_bits);

	return (f);
}

int		Fixed::toInt(void) const {

	int	i = this->_fixed_point >> this->_frac_bits;
	return (i);
}

std::ostream&	operator<<(std::ostream& o, Fixed const&rhs) {

	o << rhs.toFloat();

	return (o);
}