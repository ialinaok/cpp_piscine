/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:56:56 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/18 13:35:42 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {

	// this->_type = "just a materia"; //? this is redundant as this class will never be instantiated
	// std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) {

	this->_type = type; //? this is not redundant, bc this will be inherited in the derived class
						//? so by defining this, we're making sure that derived classes will have this constructor
						//? regardless of whether they will define it themselves or not
	// std::cout << "AMateria parametric constructor called" << std::endl;
}

AMateria::AMateria(AMateria const & src) {

	this->_type = src._type; //? also redundant, it's a better practice to to define 
							 //? the copy constructor and assignment operator overload in the class that manages 
							 //? the resource being copied, rather than in a base class
	// std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria::~AMateria() {

	// std::cout << "AMateria destructor called" << std::endl;
}

AMateria &	AMateria::operator=(AMateria const & rhs) {

	(void) rhs;
	// if (this != &rhs)
	// 	this->_type = rhs._type; //? and this is also redundant
	// std::cout << "AMateria copy assignment operator overload called" << std::endl;
	return (*this);
}

std::string const &	AMateria::getType() const {

	return (this->_type);
}

void		AMateria::use(ICharacter& target) {

	(void)target;
}