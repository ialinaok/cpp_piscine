/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:17:50 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/16 18:02:07 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {

	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << YELL << "Cat default constructor called" << D << std::endl;
}

Cat::Cat(Cat const& src) : Animal::Animal(src) {

	this->_brain = new Brain(*src._brain);
	this->_type = src._type;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat() {

	delete this->_brain;
	std::cout << GREEN << "Cat destructor called" << D << std::endl;
}

Cat&	Cat::operator=(Cat const& rhs) {

	if (this != &rhs) {

		*this->_brain = *rhs._brain;
		this->_type = rhs._type;
	}
	std::cout << "Cat copy assignment operator called" << std::endl;
	return (*this);
}

void	Cat::makeSound(void) const {

	std::cout << "meow meow" << std::endl;
}

const std::string	Cat::getOutOfBrain(int i) {

	return (this->_brain->getIdea(i));
}

void				Cat::putIntoBrain(std::string idea, int i) {

	this->_brain->setIdea(idea, i);
}
