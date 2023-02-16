/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:39:57 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/16 18:03:03 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {

	std::cout << "WrongCat default constructor called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const& src) : WrongAnimal::WrongAnimal(src) {

	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = src;
}

WrongCat::~WrongCat() {

	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat&	WrongCat::operator=(WrongCat const& rhs) {

	std::cout << "WrongCat copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

void	WrongCat::makeSound(void) const {

	std::cout << "meow meow" << std::endl;
}