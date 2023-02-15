/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShallowCat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:55:15 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/15 20:55:41 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHALLOW_CAT_H
# define SHALLOW_CAT_H

#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class	ShallowCat : public Animal {

	public:
		ShallowCat();
		ShallowCat(ShallowCat const& src);
		~ShallowCat();
		ShallowCat&	operator=(ShallowCat const& rhs);

		void	makeSound(void) const;

		const std::string	getOutOfBrain(int i);
		void				putIntoBrain(std::string idea, int i);

	private:
		Brain	*_brain;
};

#endif