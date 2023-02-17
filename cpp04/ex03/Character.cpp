/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:43:59 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/17 16:43:04 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("default name") {

	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	for (int i = 0; i < 4; i++)
		this->_track_alloc[i] = false;
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string name) : _name(name) {

	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	for (int i = 0; i < 4; i++)
		this->_track_alloc[i] = false;
	std::cout << "Character parametric constructor called" << std::endl;
}

Character::Character(Character const & src) {

	if (this != &src) {

		for (int i = 0; i < 4; i++) {

			if (this->_track_alloc[i] == true)
				delete this->_inventory[i];
			if (src._inventory[i]->getType() == "ice")
				this->_inventory[i] = new Ice();
			if (src._inventory[i]->getType() == "cure")
				this->_inventory[i] = new Cure();
			*this->_inventory[i] = *src._inventory[i];
		}
		this->_name = src._name;	
	}
	std::cout << "Character copy constructor called" << std::endl;
}

Character::~Character() {

	for (int i = 0; i < 4; i++) {

		if (this->_track_alloc[i] == true)
			delete this->_inventory[i];
	}
	std::cout << "Character destructor called" << std::endl;
}

Character &	Character::operator=(Character const & rhs) {

	if (this != &rhs) {

		for (int i = 0; i < 4; i++) {
//if there's a Materia in the given slot, there'll be true in track_alloc
			if (this->_track_alloc[i] == true) {

				delete this->_inventory[i];
				if (rhs._inventory[i]->getType() == "ice") {

					this->_inventory[i] = new Ice();
					// this->_track_alloc[i] = true;
				}
				if (rhs._inventory[i]->getType() == "cure") {

					this->_inventory[i] = new Cure();
					// this->_track_alloc[i] = true;
				}
				*this->_inventory[i] = *rhs._inventory[i];
			}
//if there's false in the given slot, we just want to put NULL in there
//we cannot copy *NULL, that's why divided like this
			else
				this->_inventory[i] = NULL;
		}
		this->_name = rhs._name;	
	}
	std::cout << "Character copy assignemnt operator called" << std::endl;
	return (*this);
}

std::string const &	Character::getName() const {

	return (this->_name);
}

void	Character::equip(AMateria* m) {

	int	i = 0;

	while (i < 4) {

		if (this->_track_alloc[i] == false)
			break;
		i++;
	}
	if (i == 4)
		std::cout << "Inventory is full." << std::endl;
	else {

		if (m->getType() == "ice")
			this->_inventory[i] = new Ice();
		else if (m->getType() == "cure")
			this->_inventory[i] = new Cure();
		*this->_inventory[i] = *m;
	}
}

void	Character::unequip(int idx) {

	this->_inventory[idx] = NULL;
	this->_track_alloc[idx] = false;
}

void	Character::use(int idx, ICharacter& target) {

	if (this->_track_alloc[idx] == true)
		this->_inventory[idx]->use(target);
	else
		std::cout << "No materia at given index" << std::endl;
}