/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:11:26 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/14 16:53:00 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include <string>
#include <iostream>
#include "Animal.hpp"

class	Dog : public Animal {

	public:
		Dog();
		Dog(Dog const& src);
		~Dog();
		Dog&	operator=(Dog const& rhs);

		void	makeSound(void) const;
};

#endif