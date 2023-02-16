/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:17:50 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/16 18:02:29 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {

	this->_type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat const& src) : Animal::Animal(src) {

	*this = src;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat() {

	std::cout << "Cat destructor called" << std::endl;
}

Cat&	Cat::operator=(Cat const& rhs) {

	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
	std::cout << "Cat copy assignment operator called" << std::endl;
}

void	Cat::makeSound(void) const {

	std::cout << "meow meow" << std::endl;
}