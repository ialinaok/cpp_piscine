/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 00:37:31 by ialinaok          #+#    #+#             */
/*   Updated: 2023/01/24 01:00:42 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {

	std::string	name = "Max";
	int			horde_count = 12;
	Zombie		*horde;

	std::cout << RED << "Creating a horde of " << horde_count << WH << std::endl;
	horde = zombieHorde(horde_count, name);

	for (int i = 0; i < 12; i++)
		horde[i].Announce();

	delete [] horde;
}