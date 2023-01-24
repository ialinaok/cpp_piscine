/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 00:29:05 by ialinaok          #+#    #+#             */
/*   Updated: 2023/01/24 00:37:02 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {

	std::cout << "Constructor Zombie called" << std::endl;
}

Zombie::~Zombie() {

	std::cout << "Destructor Zombie called for " << this->_name << std::endl;
}

void	Zombie::Announce(void) {

	std::cout << PU << this->_name << ": BraiiiiiiinnnzzzZ..." << WH << std::endl;
}

void	Zombie::name_the_zombie(std::string name) {

	this->_name = name;
}