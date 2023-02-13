/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:08:20 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/13 12:12:36 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_H
# define SCAV_TRAP_H

#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap {

	public:
		ScavTrap();
		ScavTrap(ScavTrap const& src);
		~ScavTrap();

		void	guardGate();
};

#endif