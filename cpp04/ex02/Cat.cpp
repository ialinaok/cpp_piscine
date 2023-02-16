/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:17:50 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/16 18:50:34 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {

	this->_type = "Cat";
	std::cout << YELL << "Cat default constructor called" << D << std::endl;
}

Cat::Cat(Cat const& src) : AAnimal::AAnimal(src) {

	this->_type = src._type;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat() {

	std::cout << YELL << "Cat destructor called" << D << std::endl;
}

Cat&	Cat::operator=(Cat const& rhs) {

	if (this != &rhs) 
		this->_type = rhs._type;
	std::cout << "Cat copy assignment operator called" << std::endl;
	return (*this);
}

void	Cat::makeSound(void) const {

	std::cout << "meow meow" << std::endl;
}