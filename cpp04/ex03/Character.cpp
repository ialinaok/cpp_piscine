/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:43:59 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/17 13:57:36 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("default name") {

	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string name) : _name(name) {

	std::cout << "Character parametric constructor called" << std::endl;
}

Character::Character(Character const & src) {

	if (this != &src)
		for (int i = 0; i < 4; i++)
			this->_inventory[i] = src._inventory[i];
	std::cout << "Character copy constructor called" << std::endl;
}

Character::~Character() {

	std::cout << "Character destructor called" << std::endl;
}

Character &	Character::operator=(Character const & rhs) {

	if (this != &src) {

		for (int i = 0; i < 4; i++)
			this->_inventory[i] = src._inventory[i];
		this->_name = rhs._name;
	}
	std::cout << "Character copy assignemnt operator called" << std::endl;
	return (*this);
}

std::string const &	Character::getName() const; {

	return (this->_name);
}

void	Character::equip(AMateria* m) {

	
}

void	Character::unequip(int idx) {

	
}

void	Character::use(int idx, ICharacter& target) {


	
}