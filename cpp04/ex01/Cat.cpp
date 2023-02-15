/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:17:50 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/15 20:46:54 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {

	std::cout << YELL << "Cat default constructor called" << D << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(Cat const& src) : Animal::Animal() {

	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
	this->_brain = new Brain();
}

Cat::~Cat() {

	std::cout << GREEN << "Cat destructor called" << D << std::endl;
	delete this->_brain;
}

Cat&	Cat::operator=(Cat const& rhs) {

	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
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
