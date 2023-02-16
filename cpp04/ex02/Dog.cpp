/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:23:49 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/16 18:50:22 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {

	this->_type = "Dog";
	std::cout << BLU << "Dog default constructor called" << D << std::endl;
}

Dog::Dog(Dog const& src) : AAnimal::AAnimal(src) {

	this->_type = src._type;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog() {

	std::cout << BLU << "Dog destructor called" << D << std::endl;
}

Dog&	Dog::operator=(Dog const& rhs) {

	if (this != &rhs)
		this->_type = rhs._type;
	std::cout << "Dog copy assignment operator called" << std::endl;
	return (*this);
}

void	Dog::makeSound(void) const {

	std::cout << "woof woof" << std::endl;
}