/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:39:00 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/17 21:14:23 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class	Character : public ICharacter {

	public:
		Character();
		Character(std::string name);
		Character(Character const & src);
		~Character();
		Character &	operator=(Character const & rhs);
	
		std::string const &	getName() const; 
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
		void	showInventory(void) const;
		AMateria	*getAddress(int i) const;

	private:
		std::string	_name;
		AMateria	*_inventory[4];
};

#endif