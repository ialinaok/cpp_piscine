/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 13:33:26 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/17 13:33:42 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cure_H
# define Cure_H

#include <iostream>
#include <string>
#include "AMateria.hpp"

class	Cure : public AMateria {

	public:
		Cure();
		Cure(std::string type);
		Cure(Cure const & src);
		~Cure();
		Cure &	operator=(Cure const & rhs);

		AMateria		*clone() const;
		void			use(ICharacter& target);
};

#endif