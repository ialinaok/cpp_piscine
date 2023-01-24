/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 15:30:57 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/24 16:31:11 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "colors.hpp"
#include <iostream>

Weapon::Weapon(std::string type) : _type(type) {}

Weapon::~Weapon(void) {}

std::string&	Weapon::getType(void) {

	std::string&	typeRef = this->_type;

	return (typeRef);
}

void	Weapon::setType(std::string new_type) {

	this->_type = new_type;
}