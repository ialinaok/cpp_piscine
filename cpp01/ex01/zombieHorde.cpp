/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 00:33:18 by ialinaok          #+#    #+#             */
/*   Updated: 2023/02/06 20:06:17 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name) {

	if (N <= 0) {

		std::cout << RED << "Bruh. You cannot make a negative or 0 number of Zombies" << WH << std::endl;
	}
	Zombie	*horde = new Zombie[N];

	for (int i = 0; i < N; i++)
		horde[i].name_the_zombie(name);
	
	return (horde);
}