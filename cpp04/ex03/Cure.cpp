/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:33:50 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/17 16:43:26 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() {

	this->_type = "cure";
	std::cout << "Cure default constructor called" << std::endl;
}

//this is to protect the "cure" type. it's not actually initializing with "type"
Cure::Cure(std::string type) : AMateria::AMateria(type) {

	this->_type = "cure";
	std::cout << "Cure parametric constructor called" << std::endl;
}

Cure::Cure(Cure const & src) : AMateria::AMateria(src) {

	this->_type = src._type;
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure::~Cure() {

	std::cout << "Cure destructor called" << std::endl;
}

Cure &	Cure::operator=(Cure const & rhs) {

	if (this != &rhs)
		this->_type = rhs._type;
	std::cout << "Cure copy assignemnt operator overload called" << std::endl;
	return (*this);
}

AMateria	*Cure::clone() const {

	return (new Cure("cure"));
}

void		Cure::use(ICharacter& target) {

	std::cout << CY << "* heals " << target.getName() << "'s wounds *" << D << std::endl;
}