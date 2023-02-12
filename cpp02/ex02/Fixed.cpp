/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 19:59:20 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/12 16:00:15 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_frac_bits = 8;

Fixed::Fixed() : _fixed_point(0) {

	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) : _fixed_point(n << this->_frac_bits) {

	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f) : _fixed_point(roundf(f * (1 << this->_frac_bits))) {

	// std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed() {

	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const& src) {

	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed&	Fixed::operator=(Fixed const& rhs) {

	// std::cout << "Copy assignment operator called" << std::endl;

	if (this != &rhs)
		this->_fixed_point = rhs.getRawBits();

	return (*this);
}

bool	Fixed::operator>(Fixed const& rhs) const {

	return (this->_fixed_point > rhs.getRawBits());
}

bool	Fixed::operator<(Fixed const& rhs) const {

	return (this->_fixed_point < rhs.getRawBits());
}

bool	Fixed::operator>=(Fixed const& rhs) const {

	return (this->_fixed_point >= rhs.getRawBits());
}

bool	Fixed::operator<=(Fixed const& rhs) const {

	return (this->_fixed_point <= rhs.getRawBits());
}

bool	Fixed::operator==(Fixed const& rhs) const {

	return (this->_fixed_point == rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const& rhs) const {

	return (this->_fixed_point != rhs.getRawBits());
}

Fixed	Fixed::operator+(Fixed const& rhs) const {

	Fixed	ret;

	ret.setRawBits(this->getRawBits() + rhs.getRawBits());
	// ret.setRawBits(this->_fixed_point + rhs._fixed_point);
	return (ret);
}

Fixed	Fixed::operator-(Fixed const& rhs) const {

	Fixed	ret;

	// ret.setRawBits(this->getRawBits() - rhs.getRawBits());
	ret.setRawBits(this->_fixed_point - rhs._fixed_point);
	return (ret);
}

Fixed	Fixed::operator*(Fixed const& rhs) const {

	Fixed	ret;

	ret.setRawBits(this->getRawBits() * rhs.getRawBits() >> this->_frac_bits);
	return (ret);
}

Fixed	Fixed::operator/(Fixed const& rhs) const {

	Fixed	ret;

	try {
		if (rhs.getRawBits() == 0)
			throw "Stop. Dividing by zero: ";
	}
	catch (const char *stop) {
		std::cout << std::endl << RED << "Error: " << WH << stop << WH;
		return (ret);
	}
	ret = (float)this->getRawBits() / (float)(rhs.getRawBits());
	return (ret);
}

//pre-increment
Fixed&	Fixed::operator++(void) {

	this->_fixed_point++;
	return (*this);
}

//pre-decrement
Fixed&	Fixed::operator--(void) {

	this->_fixed_point--;
	return (*this);
}

//post-increment
Fixed	Fixed::operator++(int) {

	Fixed	ret(*this);

	this->_fixed_point++;
	return (ret);
}

//post-decrement
Fixed	Fixed::operator--(int) {

	Fixed	ret(*this);

	this->_fixed_point--;
	return (ret);
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

float	Fixed::getEpsilon(void) const {

	float	epsilon = (float)1 / (float)(1 << this->_frac_bits);

	return (epsilon);
}

Fixed&		Fixed::min(Fixed& fp1, Fixed& fp2) {

	return (fp1 > fp2 ? fp2 : fp1);
}

const Fixed&	Fixed::min(const Fixed& fp1, const Fixed& fp2) {

	return (fp1 > fp2 ? fp2 : fp1);
}

Fixed&		Fixed::max(Fixed& fp1, Fixed& fp2) {

	return (fp1 < fp2 ? fp2 : fp1);
}

const Fixed&	Fixed::max(const Fixed& fp1, const Fixed& fp2) {

	return (fp1 < fp2 ? fp2 : fp1);
}

std::ostream&	operator<<(std::ostream& o, Fixed const&rhs) {

	o << rhs.toFloat();

	return (o);
}