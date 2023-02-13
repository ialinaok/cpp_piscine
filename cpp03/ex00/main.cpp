/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 19:59:40 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/13 17:46:07 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main() {

	ClapTrap	clappy;
	ClapTrap	Chloe("Chloe");
	ClapTrap	Monika("Monika");
	ClapTrap	secondChloe;

	std::cout << YELL << "Third Chloe decided she wants to be like the first one!" << WH << std::endl;
	secondChloe = Chloe;
	
	print_table();
	clappy.status();
	Chloe.status();
	Monika.status();
	secondChloe.status();

	std::cout << YELL << "The game begins! " << WH << std::endl;
	clappy.attack("Jeff");
	Chloe.takeDamage(2);
	Monika.beRepaired(23);
	secondChloe.attack("Jeff");
	secondChloe.takeDamage(42);

	print_table();
	clappy.status();
	Chloe.status();
	Monika.status();
	secondChloe.status();

	secondChloe.beRepaired(10);
	Monika.attack("Jeff");
	Chloe.attack("Jeff");
	Monika.beRepaired(14);
	Monika.takeDamage(2);
	Monika.beRepaired(3);
	for (int i = 0; i < 6; i++)
		Monika.attack("Jeff");
	Monika.takeDamage(42);

	print_table();
	clappy.status();
	Chloe.status();
	Monika.status();
	secondChloe.status();
}