/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 18:30:39 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/13 15:27:53 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name((std::string)"Anonym"), _hp(10), _energy(10), _attack_damage(0) {

	std::cout << "ClapTrap default constructor called for " << this->_name << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _energy(10), _attack_damage(0) {

	std::cout << "ClapTrap parametric constructor called for " << this->_name << std::endl;
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
	if (this != &rhs) {

		this->_name = rhs._name;
		this->_hp = rhs._hp;
		this->_energy = rhs._energy;
		this->_attack_damage = rhs._attack_damage;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target) {

	if (this->_energy > 0 && this->_hp > 0) {

		std::cout << RED << this->_name << " attacks " << target;
		std::cout << " causing " << this->_attack_damage << " points of damage! 💥" << WH << std::endl;
		this->_energy--;
	}
	else
		std::cout << RED << this->_name << " has no energy left to attack! 🥴" << WH << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {

	int	new_hp_value = this->_hp - amount;

	if (this->_hp == 0 || this->_energy == 0) {
		
		std::cout << CY << "Give " << this->_name << " a break, they are already done! ❌" << WH << std::endl;
		return ;
	}
	if (new_hp_value < 0) {

		this->_hp = 0;
		std::cout << CY << this->_name << " got destroyed by this devastating attack! 💀" << WH << std::endl;
		return ;
	}
	this->_hp = new_hp_value;
	std::cout << CY <<  this->_name << " takes damage of " << amount << " points! 👾" << WH << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {

	if (this->_energy > 0 && this->_hp > 0) {

		std::cout << GREEN << this->_name << " repairs themselves with " << amount << " points! 🍄" << WH << std::endl;
		this->_hp += amount;
		this->_energy--;
	}
	else
		std::cout << GREEN << this->_name << " has no energy to repair! 🤕" << WH << std::endl;
}

void	ClapTrap::status(void) const {

	std::cout << std::left << std::setw(10) << this->_name;
	this->_hp == 0 ? std::cout << RED << std::left << std::setw(10) << this->_hp << WH :
		std::cout << std::left << std::setw(10) << this->_hp;
	this->_energy == 0 ? std::cout << RED << std::left << std::setw(10) << this->_energy << WH:
		std::cout << std::left << std::setw(10) << this->_energy;
	std::cout << std::left << std::setw(10) << this->_attack_damage<< std::endl;
	std::cout << BLA << "---------------------------------------" << WH << std::endl;
}

void	print_table(void) {

	std::cout << YELL << "Currently in the game are:" << WH << std::endl;
	std::cout << BLA << "---------------------------------------" << std::endl;
	std::cout << BLA << std::left << std::setw(10) << "NAME";
	std::cout << std::left << std::setw(10) << "HP";
	std::cout << std::left << std::setw(10) << "ENERGY";
	std::cout << std::left << std::setw(10) << "ATTACK" << std::endl;
	std::cout << "---------------------------------------" << WH << std::endl;
}