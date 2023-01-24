/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 15:47:21 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/24 15:55:37 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main() {

	// *** FIRST TEST CASE *** //
	Weapon	club = Weapon("crude spiked club");

	HumanA	bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();

	// *** SECOND TEST CASE *** //
	Weapon	club1 = Weapon("crude spiked club");

	HumanB	jim("Jim");
	jim.setWeapon(club1);
	jim.attack();
	club1.setType("some other type of club");
	jim.attack();
}