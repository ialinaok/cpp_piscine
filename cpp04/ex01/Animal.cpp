/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:12:53 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/14 17:52:19 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("typical") {

	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(Animal const& src) {

	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}

Animal::~Animal() {

	std::cout << "Animal destructor called" << std::endl;
}

Animal&	Animal::operator=(Animal const& rhs) {

	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

void	Animal::makeSound(void) const {

	std::cout << "shrieeeeekkkkkgghghshssaashhaaarr" << std::endl;
}

std::string	Animal::getType(void) const {

	return (this->_type);
}