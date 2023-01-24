/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 00:25:29 by ialinaok          #+#    #+#             */
/*   Updated: 2023/01/24 00:55:44 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>
#include "colors.hpp"

class Zombie {

	public:
		void	Announce(void);
		void	name_the_zombie(std::string name);
		Zombie(void);
		~Zombie(void);

	private:
		std::string	_name;
		
};

Zombie	*zombieHorde(int N, std::string name);

#endif