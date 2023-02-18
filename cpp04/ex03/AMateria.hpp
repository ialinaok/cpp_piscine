/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 19:03:38 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/18 13:25:35 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class	ICharacter;

class	AMateria {

	protected:
		std::string	_type;

	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(AMateria const & src); 				//should write implementation bc this will be called in copy constructor of derived class
		virtual ~AMateria();
		AMateria &	operator=(AMateria const & rhs);	//can write implementation but doesnt make sense as this class will never be able to be instantiated
														//so there will never be objects of the abstract class to be assigned to
														//!BUT
														//if I want to use this line: *this = src; in the copy constructor, I need to write the operator overload anyway
														//if I want to ensure that copy will be deep. compiler can assign a default operator overload, but the copy
														//will be shallow
														//!BUT
														//it's more efficient to assign _type directly in the copy constructor
		

		std::string const &	getType() const; //returns the materia type

		virtual AMateria	*clone() const = 0;			//not correct to write an implementation. derived classes are forced to have their own implementations
		virtual void		use(ICharacter& target);
};

// *** COLORS ***//
# define BLANK "\e[0m"
# define BLA "\033[0;30m"
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELL "\033[0;33m"
# define BLU "\033[0;34m"
# define PU "\033[0;35m"
# define CY "\033[0;36m"
# define WH "\033[0;37m"
# define D "\033[0m"

#endif