/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 18:30:39 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/12 20:11:39 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name((std::string)"Anonym"), _hp(10), _energy(10), _attack_damage(0) {

	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _energy(10), _attack_damage(0) {

	std::cout << "ClapTrap parametric constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {

	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& src) {

	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const& rhs) {

	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_name = rhs._name;
	return (*this);
}

void	ClapTrap::attack(const std::string& target) {

	if (this->_energy > 0 && this->_hp > 0) {

		std::cout << "ClapTrap " << this->_name << " attacks " << target;
		std::cout << " causing " << this->_attack_damage << " points of damage!" << std::endl;
		this->_energy--;
	}
	else
		std::cout << "ClapTrap " << this->_name << " has no energy left to attack!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {

	int	new_hp_value = this->_hp - amount;

	if (this->_hp == 0) {
		
		std::cout << "Give " << this->_name << " a break, they are already done!" << std::endl;
		return ;
	}
	if (new_hp_value < 0) {

		this->_hp = 0;
		std::cout << this->_name << " got destroyed by this devastating attack!" << std::endl;
		return ;
	}
	this->_hp = new_hp_value;
	std::cout << "ClapTrap " << this->_name << " takes damage of " << amount << " points!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {

	if (this->_energy > 0 && this->_hp > 0) {

		std::cout << "ClapTrap " << this->_name << " repairs itself with " << amount << " points!" << std::endl;
		this->_hp += amount;
		this->_energy--;
	}
	else
		std::cout << "ClapTrap " << this->_name << " has no energy to repair!" << std::endl;
}