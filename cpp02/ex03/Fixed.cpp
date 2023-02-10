/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 19:07:09 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/10 19:10:12 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_frac_bits = 8;

Fixed::Fixed() : _fixed_point(0) {}

Fixed::Fixed(const int n) : _fixed_point(n << this->_frac_bits) {}

Fixed::Fixed(const float f) : _fixed_point(roundf(f * (1 << this->_frac_bits))) {}

Fixed::~Fixed() {}

Fixed::Fixed(Fixed const& src) {

	*this = src;
}

Fixed&	Fixed::operator=(Fixed const& rhs) {

	if (this != &rhs)
		this->_fixed_point = rhs.getRawBits();

	return (*this);
}

bool	Fixed::operator>(Fixed const& rhs) const {

	return (this->_fixed_point > rhs.getRawBits());
}

bool	Fixed::operator<(Fixed const& rhs) const {

	return (this->_frac_bits < rhs.getRawBits());
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

	ret.setRawBits(this->_fixed_point + rhs.getRawBits());
	return (ret);
}

Fixed	Fixed::operator-(Fixed const& rhs) const {

	Fixed	ret;

	ret.setRawBits(this->_fixed_point - rhs._fixed_point);
	return (ret);
}

Fixed	Fixed::operator*(Fixed const& rhs) const {

	Fixed	ret;

	ret.setRawBits(this->_fixed_point * rhs.getRawBits() >> this->_frac_bits);
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
	ret = (float)this->_fixed_point / (float)(rhs.getRawBits());
	return (ret);
}

Fixed&	Fixed::operator++(void) {

	this->_fixed_point++;
	return (*this);
}

Fixed&	Fixed::operator--(void) {

	this->_fixed_point--;
	return (*this);
}

Fixed	Fixed::operator++(int) {

	Fixed	ret(*this);

	this->_fixed_point++;
	return (ret);
}

Fixed	Fixed::operator--(int) {

	Fixed	ret(*this);

	this->_fixed_point--;
	return (ret);
}

int		Fixed::getRawBits(void) const {

	return (this->_fixed_point);
}

void	Fixed::setRawBits(int const raw) {

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