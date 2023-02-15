/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:31:18 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/15 20:25:18 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap () {

	std::cout << "FragTrap default constructor called" << std::endl;
	this->_name = "Anonym";
	this->_hp = 100;
	this->_energy = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(std::string name) {

	std::cout << "FragTrap parametric constructor called" << std::endl;
	this->_name = name;
	this->_hp = 100;
	this->_energy = 100;
	this->_attack_damage = 30;
}

FragTrap::~FragTrap() {

	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const& src) : ClapTrap::ClapTrap(src) {

	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;
}

FragTrap&	FragTrap::operator=(FragTrap const& rhs) {

	std::cout << "FragTrap copy assignment operator called" << std::endl;
	if (this != &rhs) {

		this->_name = rhs._name;
		this->_hp = rhs._hp;
		this->_energy = rhs._energy;
		this->_attack_damage = rhs._attack_damage;
	}
	return (*this);
}

void	FragTrap::highFivesGuys(void) {

	std::cout << BLA << this->_name << " wants to get a high five! 💃" << D <<std::endl;
}