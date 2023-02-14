/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:17:50 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/14 16:53:20 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {

	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(Cat const& src) {

	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}

Cat::~Cat() {

	std::cout << "Cat destructor called" << std::endl;
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