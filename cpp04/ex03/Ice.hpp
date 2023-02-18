/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:53:31 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/18 13:30:54 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

#include <iostream>
#include <string>
#include "AMateria.hpp"

class	Ice : public AMateria {

	public:
		Ice();
		Ice(std::string type);
		Ice(Ice const & src);
		~Ice();
		Ice &	operator=(Ice const & rhs);

		AMateria		*clone() const;
		void			use(ICharacter& target);
};

#endif