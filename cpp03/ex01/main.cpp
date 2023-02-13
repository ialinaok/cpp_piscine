/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:21:48 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/13 15:46:10 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {

	std::cout << BLU;
	ClapTrap	Claudia("Claudia");
	std::cout << CY;
	ScavTrap	Selma("Selma");

	print_table();
	Claudia.status();
	Selma.status();

	std::cout << YELL << "The game begins! " << WH << std::endl;
	Claudia.attack("Steve");
	Claudia.beRepaired(14);
	Claudia.takeDamage(3);
	Selma.takeDamage(54);
	Selma.attack("Steve");
	Selma.takeDamage(42);
	Selma.guardGate();
	Selma.beRepaired(20);
	Claudia.attack("Steve");
	Selma.takeDamage(10000);
	Selma.beRepaired(23);

	print_table();
	Claudia.status();
	Selma.status();
}
