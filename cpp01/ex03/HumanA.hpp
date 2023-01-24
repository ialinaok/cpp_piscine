/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 15:23:10 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/24 16:24:39 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include <string>
#include <iostream>
#include "colors.hpp"
#include "Weapon.hpp"

class	HumanA {

	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA(void);
		void	attack(void);

	private:
		std::string	_name;
		Weapon&		_Weapon;
};

#endif