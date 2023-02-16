/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:12:53 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/16 17:49:12 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("typical") {

	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(Animal const& src) {

	*this = src;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal() {

	std::cout << "Animal destructor called" << std::endl;
}

Animal&	Animal::operator=(Animal const& rhs) {

	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
	std::cout << "Animal copy assignment operator called" << std::endl;
}

void	Animal::makeSound(void) const {

	std::cout << "shrieeeeekkkkkgghghshssaashhaaarr" << std::endl;
}

std::string	Animal::getType(void) const {

	return (this->_type);
}