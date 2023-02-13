/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:36:12 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/13 17:51:17 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main() {

	std::cout << BLU;
	ClapTrap	Chiara("Chiara");
	std::cout << CY;
	ScavTrap	Sydney("Sydney");
	std::cout << PU;
	FragTrap	Francess("Francess");

	print_table();
	Chiara.status();
	Sydney.status();
	Francess.status();

	std::cout << YELL << "The game begins! " << WH << std::endl;
	Chiara.attack("Kurtis");
	Sydney.beRepaired(4);
	Sydney.attack("Kurtis");
	Francess.attack("Kurtis");
	Francess.beRepaired(12);
	Francess.takeDamage(123);
	Sydney.takeDamage(321);
	Francess.highFivesGuys();

	print_table();
	Chiara.status();
	Sydney.status();
	Francess.status();
}