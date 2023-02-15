/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:23:49 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/15 20:47:08 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {

	std::cout << BLU << "Dog default constructor called" << D << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(Dog const& src) : Animal::Animal() {

	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}

Dog::~Dog() {

	std::cout << CY << "Dog destructor called" << D << std::endl;
	delete this->_brain;
	this->_brain = new Brain();
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

const std::string	Dog::getOutOfBrain(int i) {

	return (this->_brain->getIdea(i));
}

void				Dog::putIntoBrain(std::string idea, int i) {

	this->_brain->setIdea(idea, i);
}
