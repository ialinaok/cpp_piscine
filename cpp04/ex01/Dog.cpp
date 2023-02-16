/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:23:49 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/16 18:09:00 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {

	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << BLU << "Dog default constructor called" << D << std::endl;
}

Dog::Dog(Dog const& src) : Animal::Animal(src) {

	this->_brain = new Brain(*src._brain);
	this->_type = src._type;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog() {

	delete this->_brain;
	std::cout << CY << "Dog destructor called" << D << std::endl;
}

Dog&	Dog::operator=(Dog const& rhs) {

	if (this != &rhs) {

		*this->_brain = *rhs._brain;
		this->_type = rhs._type;
	}
	std::cout << "Dog copy assignment operator called" << std::endl;
	return (*this);
}

void	Dog::makeSound(void) const {

	std::cout << "woof woof" << std::endl;
}

const std::string	Dog::getOutOfBrain(int i) {

	return (this->_brain->getIdea(i));
}

void				Dog::putIntoBrain(std::string idea, int i) {

	this->_brain->setIdea(idea, i);
}
