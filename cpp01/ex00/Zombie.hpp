/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 17:31:40 by ialinaok          #+#    #+#             */
/*   Updated: 2023/01/23 18:51:40 by ialinaok         ###   ########.fr       */
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
		Zombie	*newZombie(std::string name);
		void	randomChump(std::string name);
		Zombie(std::string name);
		~Zombie(void);

	private:
		std::string	_name;
		
};

#endif