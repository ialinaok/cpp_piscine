/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:56:56 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/17 13:38:41 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("just a materia"){

	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type) {

	std::cout << "AMateria parametric constructor called" << std::endl;
}

AMateria::AMateria(AMateria const & src) : _type(src._type) {

	std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria::~AMateria() {

	std::cout << "AMateria destructor called" << std::endl;
}

AMateria &	AMateria::operator=(AMateria const & rhs) {

	// if (this != &rhs)
	// 	this->_type = rhs._type;
	std::cout << "Copy assignment operator overload called" << std::endl;
	return (*this);
}

std::string const &	AMateria::getType() const {

	return (this->_type);
}

void		AMateria::use(ICharacter& target) {

	std::cout << "default materias behavior" << std::endl;
}