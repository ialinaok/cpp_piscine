/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:36:54 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/14 17:57:04 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_H
# define WRONG_ANIMAL_H

#include <string>
#include <iostream>

class	WrongAnimal {

	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const& src);
		virtual ~WrongAnimal();
		WrongAnimal&	operator=(WrongAnimal const& rhs);

		void		makeSound(void) const;
		std::string	getType(void) const;

	protected:
		std::string	_type;
};

#endif