/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 19:59:40 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/12 20:12:58 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main() {

	ClapTrap	clappy;
	ClapTrap	Max("Max");
	ClapTrap	secondMax(Max);
	ClapTrap	thirdMax;

	thirdMax = Max;
	clappy.attack("Max");
	Max.takeDamage(42);
	secondMax.beRepaired(23);
}