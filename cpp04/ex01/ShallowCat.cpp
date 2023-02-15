/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShallowCat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:56:13 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/15 21:03:32 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShallowCat.hpp"

ShallowCat::ShallowCat() {

	std::cout << YELL << "ShallowCat default constructor called" << D << std::endl;
	this->_type = "ShallowCat";
	this->_brain = new Brain();
}

ShallowCat::ShallowCat(ShallowCat const& src) : Animal::Animal() {

	std::cout << "ShallowCat copy constructor called" << std::endl;
	*this = src;
	// this->_brain = new Brain();
}

ShallowCat::~ShallowCat() {

	std::cout << GREEN << "ShallowCat destructor called" << D << std::endl;
	delete this->_brain;
}

ShallowCat&	ShallowCat::operator=(ShallowCat const& rhs) {

	std::cout << "ShallowCat copy assignment operator called" << std::endl;
	if (this != &rhs) {

		for (int i = 0; i < 100; i++)
			this->_brain->setIdea(rhs._brain->getIdea(i), i);
		this->_type = rhs._type;
	}
	return (*this);
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
