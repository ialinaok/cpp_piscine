/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:11:35 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/15 20:45:42 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal {

	public:
		Cat();
		Cat(Cat const& src);
		~Cat();
		Cat&	operator=(Cat const& rhs);

		void	makeSound(void) const;

		const std::string	getOutOfBrain(int i);
		void				putIntoBrain(std::string idea, int i);

	private:
		Brain	*_brain;
};

#endif