/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 15:37:00 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/24 16:33:27 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : 
_name(name),
_Weapon(weapon) {}

HumanA::~HumanA(void) {}

void	HumanA::attack(void) {

	std::cout << CY << this->_name << WH << " attacks with their " << RED << this->_Weapon.getType();
	std::cout << WH << std::endl;
}