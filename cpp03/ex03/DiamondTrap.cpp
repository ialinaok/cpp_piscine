/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 19:52:47 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/15 20:27:32 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {

	std::cout << "DiamondTrap constructor called" << std::endl;
	this->_name = "Anonymus";
	this->ClapTrap::_name = "Anonymus_clap_name";
	this->FragTrap::_hp = 100;
	this->ScavTrap::_energy = 50;
	this->FragTrap::_attack_damage = 30;
}

DiamondTrap::DiamondTrap(std::string name) {

	std::cout << "DiamondTrap parametric constructor called" << this->_name << std::endl;
	this->_name = name;
	this->ClapTrap::_name = name + "_clap_name";
	this->FragTrap::_hp = 100;
	this->ScavTrap::_energy = 50;
	this->FragTrap::_attack_damage = 30;
}

DiamondTrap::~DiamondTrap() {

	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const& src) : ClapTrap::ClapTrap(src), ScavTrap::ScavTrap(src), FragTrap::FragTrap(src){

	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = src;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const& rhs) {

	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	if (this != &rhs) {

		this->_name = rhs._name;
		this->_hp = rhs._hp;
		this->_energy = rhs._energy;
		this->_attack_damage = rhs._attack_damage;
	}
	return (*this);
}

void	DiamondTrap::attack(const std::string& target) {

	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void) {

	std::cout << WH << "Hello, I am weird and my two names are: " << PU << this->_name;
	std::cout << " " << CY << this->ClapTrap::_name << "💅" << D << std::endl;
}

void	DiamondTrap::status(void) const {

	std::cout << std::left << std::setw(10) << this->_name;
	this->_hp == 0 ? std::cout << RED << std::left << std::setw(10) << this->_hp << WH :
		std::cout << std::left << std::setw(10) << this->_hp;
	this->_energy == 0 ? std::cout << RED << std::left << std::setw(10) << this->_energy << WH:
		std::cout << std::left << std::setw(10) << this->_energy;
	std::cout << std::left << std::setw(10) << this->_attack_damage<< std::endl;
	std::cout << BLA << "---------------------------------------" << WH << std::endl;
}