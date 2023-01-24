/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 15:20:42 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/24 16:01:32 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <string>

class	Weapon {

	public:
		Weapon(std::string type);
		~Weapon(void);
		std::string&	getType(void);
		void			setType(std::string new_type);

	private:
		std::string	_type;
};

#endif

// aight I get it - whenever Weapon is changed, we want the weapon in human 
// changed too - so in Human, Weapon needs to be a reference