/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 19:25:12 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/04 20:03:12 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {}

Harl::~Harl(void) {}

void	Harl::complain(std::string level) {

	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i = 0;

	while (i < 4) {

		if (levels[i] == level)
			break ;
		i++;
	}
	switch (i) {

		case (0):
			std::cout << WH << "[ DEBUG ]" << D << std::endl;
			this->debug();
		case (1):
			std::cout << WH << "[ INFO ]" << D << std::endl;
			this->info();
		case (2):
			std::cout << WH << "[ WARNING ]" << D << std::endl;
			this->warning();
		case (3):
			std::cout << WH << "[ ERROR ]" << D << std::endl;
			this->error();
			break ;
		default:
			std::cout << BL << "It's unbelievable you don't make cappucinos here at all... Like, what?" << D << std::endl;
	}
}

void	Harl::debug(void) {

	std::cout << GREEN << "I would like one big cappucino with coconut milk, please!" << D << std::endl;
}

void	Harl::info(void) {

	std::cout << YELL << "I cannot believe that I still have to pay extra to have vegan milk with\
	my coffee! It's so inappropriate to milk money from veganism getting more popular..." << D << std::endl;
}

void	Harl::warning(void) {

	std::cout << PU << "I cannot have my cappucino without coconut milk! I always drink my cappucino with coconut milk!\
	At least make me a cappucino with oat milk!" << D << std::endl;
}

void	Harl::error(void) {

	std::cout << RED << "Wait, what do you mean you don't have ANY plant-based milk alternatives...?" << D << std::endl;
}