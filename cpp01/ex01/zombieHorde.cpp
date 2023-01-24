/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 00:33:18 by ialinaok          #+#    #+#             */
/*   Updated: 2023/01/24 00:55:25 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name) {

	Zombie	*horde = new Zombie[N];

	for (int i = 0; i < N; i++)
		horde[i].name_the_zombie(name);
	
	return (horde);
}