/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:11:35 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/16 18:32:41 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include <string>
#include <iostream>
#include "AAnimal.hpp"

class	Cat : public AAnimal {

	public:
		Cat();
		Cat(Cat const& src);
		~Cat();
		Cat&	operator=(Cat const& rhs);

		void	makeSound(void) const;
};

#endif