/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:23:49 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/15 20:30:34 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {

	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(Dog const& src) : Animal::Animal() {

	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}

Dog::~Dog() {

	std::cout << "Dog destructor called" << std::endl;
}

Dog&	Dog::operator=(Dog const& rhs) {

	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

void	Dog::makeSound(void) const {

	std::cout << "woof woof" << std::endl;
}