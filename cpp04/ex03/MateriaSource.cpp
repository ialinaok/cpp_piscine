/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:04:22 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/17 16:15:38 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {

	for (int i = 0; i < 4; i++)
		this->_memory[i] = NULL;
	std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const & src) {

	int	i = 0;

	while (src->_memory[i])
		i++;
	if (i == 4)
	std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource::~MateriaSource() {

	std::cout << "MateriaSource destructor called" << std::endl;
}

AMateria &	MateriaSource::operator=(MateriaSource const & rhs) {

	for (int i = 0; i < 4; i++)
		this->_memory[i] = rhs._memory[i];
	std::cout << "MateriaSource copy assignment operator overload called" << std::endl;
}


void MateriaSource::learnMateria(AMateria *m) {

	int	i = 0;

	while (i < 4)
		if (this->_memory[i])
			break;
	if (i == 4)
		std::cout << "MateriaSource memory is full" << std::endl;
	else {

		if (m->getType() == "ice")
			this->_memory[i] = new Ice();
		else if (m->getType() == "cure")
			this->_memory[i] = new Cure();
		*this->_memory[i] = *m;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {

	int i = 0;
	AMateria	*ret;

	while (i < 4)
		if (this->_memory[i]->getType() == type)
			break;
	if (i < 4) {

		std::cout << "Type not found" << std::endl;
		return (0);
	}
	else {

		if (type == "ice")
			this->_memory[i] = new Ice();
		else if (type == "cure")
			this->_memory[i] = new Cure();
		*ret = *this->_memory[i];
	}
	return (ret);
}
