/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:39:05 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/14 17:47:55 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_H
# define WRONG_CAT_H

#include <string>
#include <iostream>
#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal {

	public:
		WrongCat();
		WrongCat(WrongCat const& src);
		~WrongCat();
		WrongCat&	operator=(WrongCat const& rhs);

		void	makeSound(void) const;
};

#endif