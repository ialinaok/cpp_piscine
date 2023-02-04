/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:31:05 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/04 19:22:45 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {}

Harl::~Harl(void) {}

void	Harl::complain(std::string level) {

	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*f[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error};
	int	i = 0;

	while (i < 4) {

		if (levels[i] == level)
			break ;
		i++;
	}
	if (i < 4)
		(this->*f[i])();
	else
		std::cout << BL << "I'm curious what delicious milks they have here... I fancy a coconut cappucino!" << D << std::endl;
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