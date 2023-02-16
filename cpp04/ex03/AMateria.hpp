/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 19:03:38 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/16 19:09:08 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class	AMateria {

	protected:
		//...

	public:
		AMateria(std::string const & type);
		//...

		std::string const &	getType() const; //returns the materia type

		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter& target);
};

#endif