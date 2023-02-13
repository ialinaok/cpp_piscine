/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 19:59:40 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/13 12:04:23 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	print_table(void) {

	std::cout << BLA << "---------------------------------------" << std::endl;
	std::cout << BLA << std::left << std::setw(10) << "NAME";
	std::cout << std::left << std::setw(10) << "HP";
	std::cout << std::left << std::setw(10) << "ENERGY";
	std::cout << std::left << std::setw(10) << "ATTACK" << std::endl;
	std::cout << "---------------------------------------" << WH << std::endl;
}

int	main() {

	ClapTrap	clappy;
	ClapTrap	Max("Max");
	ClapTrap	Monika("Monika");
	ClapTrap	secondMax;

	std::cout << YELL << "Third Max decided he wants to be like the first one!" << WH << std::endl;
	secondMax = Max;
	std::cout << YELL << "Currently in the game are:" << WH << std::endl;
	print_table();
	clappy.status();
	Max.status();
	Monika.status();
	secondMax.status();

	std::cout << YELL << "The game begins!" << WH << std::endl;
	clappy.attack("Jeff");
	Max.takeDamage(2);
	Monika.beRepaired(23);
	secondMax.attack("Jeff");
	secondMax.takeDamage(42);

	std::cout << YELL << "Currently in the game are:" << WH << std::endl;
	print_table();
	clappy.status();
	Max.status();
	Monika.status();
	secondMax.status();

	secondMax.beRepaired(10);
	Monika.attack("Jeff");
	Max.attack("Jeff");
	Monika.beRepaired(14);
	Monika.takeDamage(2);
	Monika.beRepaired(3);
	for (int i = 0; i < 6; i++)
		Monika.attack("Jeff");
	Monika.takeDamage(42);

	std::cout << YELL << "Currently in the game are:" << WH << std::endl;
	print_table();
	clappy.status();
	Max.status();
	Monika.status();
	secondMax.status();
}