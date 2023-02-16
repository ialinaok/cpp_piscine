/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShallowCat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:56:13 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/16 18:04:49 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShallowCat.hpp"

bool ShallowCat::_freed = false;

ShallowCat::ShallowCat() {

	this->_type = "ShallowCat";
	this->_brain = new Brain();
	std::cout << YELL << "ShallowCat default constructor called" << D << std::endl;
}

ShallowCat::ShallowCat(ShallowCat const& src) : Animal::Animal(src) {

	this->_brain = src._brain;
	this->_type = src._type;
	std::cout << YELL << "ShallowCat copy constructor called" << D << std::endl;
}

ShallowCat::~ShallowCat() {

	if (this->_freed == false) {

		delete this->_brain;
		this->_freed = true;
	}
	std::cout << BLU << "ShallowCat destructor called" << D << std::endl;
}

ShallowCat&	ShallowCat::operator=(ShallowCat const& rhs) {

	if (this != &rhs) {

		for (int i = 0; i < 100; i++)
			this->_brain->setIdea(rhs._brain->getIdea(i), i);
		this->_type = rhs._type;
		this->_freed = rhs._freed;
	}
	return (*this);
	std::cout << "ShallowCat copy assignment operator called" << std::endl;
}

void	ShallowCat::makeSound(void) const {

	std::cout << "meow meow" << std::endl;
}

const std::string	ShallowCat::getOutOfBrain(int i) {

	return (this->_brain->getIdea(i));
}

void	ShallowCat::putIntoBrain(std::string idea, int i) {

	this->_brain->setIdea(idea, i);
}

Brain	*ShallowCat::getBrain(void) {

	return (this->_brain);
}