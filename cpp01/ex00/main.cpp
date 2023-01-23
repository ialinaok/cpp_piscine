/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:20:15 by ialinaok          #+#    #+#             */
/*   Updated: 2023/01/23 19:08:39 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {

	std::string	zombie1name = "Bob";
	std::string	zombie2name = "Alice";
	std::string	zombie3name = "Max";
	std::string	zombie4name = "Shorty";

// *** ZOMBIE 1 *** //
	std::cout << CY << "First Zombie created on stack" << WH << std::endl;
	Zombie	zombie1(zombie1name);
	std::cout << RED << "Calling Announce()" << WH << std::endl;
	zombie1.Announce();
	std::cout << "----------------------------------------" << std::endl;

// *** ZOMBIE 2 *** //
	std::cout << BL << "Second Zombie created on heap" << WH << std::endl;
	Zombie	*zombie2 = new Zombie(zombie2name);
	
	void	(Zombie::*f_annouce)(void) = NULL;
	f_annouce = &Zombie::Announce;

	std::cout << RED << "Calling Announce()" << WH << std::endl;
	(zombie2->*f_annouce)();

	std::cout << "----------------------------------------" << std::endl;
// *** ZOMBIE 3 *** //
	std::cout << YELL << "Third Zombie created on heap with newZombie()" << WH << std::endl;
	Zombie	*zombie3 = zombie1.newZombie(zombie3name);
	std::cout << RED << "Calling Announce()" << WH << std::endl;
	(zombie3->*f_annouce)();

	std::cout << "----------------------------------------" << std::endl;
// *** ZOMBIE 4 *** //
	std::cout << GREEN << "Fourth Zombie created on stack with randomChump()" << WH << std::endl;
	zombie1.randomChump(zombie4name);

	std::cout << "----------------------------------------" << std::endl;

	delete zombie2;
	delete zombie3;
}