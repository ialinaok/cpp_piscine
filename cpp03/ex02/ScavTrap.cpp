/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:57:38 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/15 20:25:34 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {

	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_name = "Anonym";
	this->_hp = 100;
	this->_energy = 50;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) {

	std::cout << "ScavTrap parametric constructor called" << std::endl;
	this->_name = name;
	this->_hp = 100;
	this->_energy = 50;
	this->_attack_damage = 20;
}

ScavTrap::~ScavTrap() {

	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& src) : ClapTrap::ClapTrap(src) {

	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const& rhs) {

	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (this != &rhs) {

		this->_name = rhs._name;
		this->_hp = rhs._hp;
		this->_energy = rhs._energy;
		this->_attack_damage = rhs._attack_damage;
	}
	return (*this);
}

void	ScavTrap::guardGate(void) {

	std::cout << BLA << this->_name << " entered a guard-keeping mode! 🛡" << D << std::endl;
}

void	ScavTrap::attack(const std::string& target) {

	if (this->_energy > 0 && this->_hp > 0) {

		std::cout << RED << target << " got attacked by " << this->_name;
		std::cout << " with " << this->_attack_damage << " points of damage! 🎆" << WH << std::endl;
		this->_energy--;
	}
	else
		std::cout << RED << this->_name << " has no energy left to attack! 📛" << WH << std::endl;
}