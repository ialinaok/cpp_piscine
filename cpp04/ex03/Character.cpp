/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:43:59 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/18 13:49:33 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("default name") {

	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	// std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string name) : _name(name) {

	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	// std::cout << "Character parametric constructor called" << std::endl;
}

Character::Character(Character const & src) {

	*this = src; //will be a deep copy, bc of assignment operator overload
	// std::cout << "Character copy constructor called" << std::endl;
}

Character::~Character() {

	for (int i = 0; i < 4; i++)
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	// std::cout << "Character destructor called" << std::endl;
}

Character &	Character::operator=(Character const & rhs) {

	if (this != &rhs) {

		for (int i = 0; i < 4; i++) {
			if (this->_inventory[i] != NULL)
				delete this->_inventory[i];
			if (rhs._inventory[i] != NULL)
				this->_inventory[i] = rhs._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
		}
		this->_name = rhs._name;
	}
	// std::cout << "Character copy assignemnt operator called" << std::endl;
	return (*this);
}

std::string const &	Character::getName() const {

	return (this->_name);
}

void	Character::equip(AMateria* m) {

	for (int i = 0; i < 4; i++) {

		if (this->_inventory[i] == NULL) {

			this->_inventory[i] = m;
			std::cout << YELL << ">>> Item ";
			m->getType() == "ice" ? std::cout << CY : std::cout << GREEN;
			std::cout << m->getType() << YELL << " equipped" << D << std::endl;
			return ;
		}
	}
	std::cout << YELL << ">>> Inventory is full <<<" << D << std::endl;
}

void	Character::unequip(int idx) {

	if (this->_inventory[idx] != NULL && idx < 4) {

		std::cout << YELL << ">>> Item ";
		this->_inventory[idx]->getType() == "ice" ? std::cout << CY : std::cout << GREEN;
		std::cout << this->_inventory[idx]->getType() << YELL << " unequipped <<<" << D << std::endl;
		this->_inventory[idx] = NULL;
	}
	else
		std::cout << YELL << ">>> There's no item to unequip at given slot <<<" << D << std::endl;
}

void	Character::use(int idx, ICharacter& target) {

	if (this->_inventory[idx] != NULL && idx < 4)
		this->_inventory[idx]->use(target);
	else
		std::cout << YELL << ">>> No materia at given index <<<" << D << std::endl;
}

void	Character::showInventory(void) const {

	for (int i = 0; i < 4; i++)
		if (this->_inventory[i]) {

			std::cout << BLA << "Item: ";
			this->_inventory[i]->getType() == "ice" ? std::cout << CY : std::cout << GREEN;
			std::cout << this->_inventory[i]->getType() << BLA << " at slot: " << i << D << std::endl;
		}
}

AMateria	*Character::getAddress(int i) const {

	return (this->_inventory[i]);
}