/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:31:40 by ialinaok          #+#    #+#             */
/*   Updated: 2023/01/24 00:58:06 by ialinaok         ###   ########.fr       */
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
		Zombie(std::string name);
		~Zombie(void);

	private:
		std::string	_name;
		
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif