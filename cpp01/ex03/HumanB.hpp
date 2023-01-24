/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 15:27:01 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/24 16:45:28 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include <string>
#include <iostream>
#include "colors.hpp"
#include "Weapon.hpp"

class	HumanB {

	public:
		HumanB(std::string name);
		~HumanB(void);
		void	attack(void);
		void	setWeapon(Weapon& weapon);

	private:
		std::string	_name;
		Weapon		*_Weapon;
};

#endif