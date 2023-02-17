/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:04:22 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/17 20:46:10 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {

	for (int i = 0; i < 4; i++)
		this->_memory[i] = NULL;
	// std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const & src) {

	*this = src;
	// std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource::~MateriaSource() {

	for (int i = 0; i < 4; i++)
		if (this->_memory[i] != NULL)
			delete this->_memory[i];
	// std::cout << "MateriaSource destructor called" << std::endl;
}

MateriaSource &	MateriaSource::operator=(MateriaSource const & rhs) {

	if (this != &rhs) {

		for (int i = 0; i < 4; i++) {
			if (this->_memory[i] != NULL)
				delete this->_memory[i];
			if (rhs._memory[i] != NULL)
				this->_memory[i] = rhs._memory[i]->clone();
			else
				this->_memory[i] = NULL;
		}
	}
	// std::cout << "MateriaSource copy assignment operator overload called" << std::endl;
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m) {

	for (int i = 0; i < 4; i++) {

		if (this->_memory[i] == NULL) {

			this->_memory[i] = m;
			return ;
		}
	}
	std::cout << YELL << ">>> Memory is full <<<" << D << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type) {

	for (int i = 0; i < 4; i++) {

		if (this->_memory[i] && this->_memory[i]->getType() == type) {

			return (this->_memory[i]->clone());
		}
	}
	std::cout << YELL << ">>> Type not found <<<" << std::endl;
	return (NULL);
}
