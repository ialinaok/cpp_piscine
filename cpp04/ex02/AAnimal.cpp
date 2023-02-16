/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:12:53 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/16 18:23:58 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("typical") {

	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const& src) {

	*this = src;
	std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal::~AAnimal() {

	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal&	AAnimal::operator=(AAnimal const& rhs) {

	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
	std::cout << "AAnimal copy assignment operator called" << std::endl;
}

void	AAnimal::makeSound(void) const {

	std::cout << "shrieeeeekkkkkgghghshssaashhaaarr" << std::endl;
}

std::string	AAnimal::getType(void) const {

	return (this->_type);
}