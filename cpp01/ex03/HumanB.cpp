/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 15:42:18 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/24 16:45:42 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : 
_name(name),
_Weapon(NULL) {}

HumanB::~HumanB(void) {}

void	HumanB::attack(void) {

	std::cout << YELL << this->_name << WH << " attacks with their " << RED;
	if (this->_Weapon != NULL)
		std::cout << this->_Weapon->getType() << WH << std::endl;
	else
		std::cout << "bad karma they have collected over the years cuz they ain't have no weapons" << WH << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon) {

	this->_Weapon = &weapon;
}

// I am passing the reference - so this is an alias of sth