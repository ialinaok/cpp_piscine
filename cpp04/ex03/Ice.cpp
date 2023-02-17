/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:55:12 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/17 13:38:29 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() {

	this->_type = "ice";
	std::cout << "Ice default constructor called" << std::endl;
}

//this is to protect the "ice" type. it's not actually initializing with "type"
Ice::Ice(std::string type) : AMateria::AMateria(type) {

	this->_type = "ice";
	std::cout << "Ice parametric constructor called" << std::endl;
}

Ice::Ice(Ice const & src) : AMateria::AMateria(src) {

	this->_type = src._type;
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice::~Ice() {

	std::cout << "Ice destructor called" << std::endl;
}

Ice &	Ice::operator=(Ice const & rhs) {

	// if (this != &rhs)
	// 	this->_type = rhs._type;
	std::cout << "Ice copy assignemnt operator overload called" << std::endl;
}

AMateria	*Ice::clone() const {

	return (new Ice("ice"));
}

void		Ice::use(ICharacter& target) {

	std::cout << CY << "* shoots an ice bolt at " << target << " *" << D << std::endl;
}