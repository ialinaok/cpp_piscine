/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:11:26 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/15 20:45:29 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal {

	public:
		Dog();
		Dog(Dog const& src);
		~Dog();
		Dog&	operator=(Dog const& rhs);

		void	makeSound(void) const;

		const std::string	getOutOfBrain(int i);
		void				putIntoBrain(std::string idea, int i);

	private:
		Brain	*_brain;
};

#endif