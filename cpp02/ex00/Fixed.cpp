/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 21:36:26 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/07 21:41:08 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fix_point(0) {

	std::cout << "Default Constructor called" << std::endl;
}

Fixed::Fixed(Fixed const& src) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed() {

	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(Fixed const& rhs) {

	std::cout << "Assignment operator called" << std::endl;

	if (this != &rhs)
		this->_fix_point = rhs.getRawBits();

	return (*this);
}