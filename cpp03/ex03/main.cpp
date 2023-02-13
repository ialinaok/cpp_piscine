/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:03:27 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/13 20:21:18 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void) {

	std::cout << BLU;
	ClapTrap	Cornelia("Cornelia");
	std::cout << CY;
	ScavTrap	Stella("Stella");
	std::cout << PU;
	FragTrap	Frida("Frida");
	std::cout << RED;
	DiamondTrap	Daisy("Daisy");

	print_table();
	Cornelia.status();
	Stella.status();
	Frida.status();
	Daisy.status();

	std::cout << YELL << "The game begins! " << WH << std::endl;
	Daisy.attack("Brian");
	Stella.takeDamage(23);
	Stella.attack("Brian");
	Cornelia.takeDamage(11);
	Cornelia.beRepaired(33);
	Stella.guardGate();
	Frida.highFivesGuys();
	Frida.beRepaired(78);
	Daisy.whoAmI();
	Daisy.takeDamage(123);

	print_table();
	Cornelia.status();
	Stella.status();
	Frida.status();
	Daisy.status();
}