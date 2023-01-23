/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:12:46 by ialinaok          #+#    #+#             */
/*   Updated: 2023/01/23 19:04:53 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {

	std::cout << "Constructor Zombie called for " << this->_name << std::endl;
}

Zombie::~Zombie() {

	std::cout << "Destructor Zombie called for " << this->_name << std::endl;
}

void	Zombie::Announce(void) {

	std::cout << PU << this->_name << ": BraiiiiiiinnnzzzZ..." << WH << std::endl;
}