/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:16:44 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/15 21:00:34 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <string>
#include <iostream>

class	Brain {

	public:
		Brain();
		Brain(Brain const & src);
		~Brain();
		Brain &	operator=(Brain const & rhs);

		const std::string	getIdea(int i) const;
		void				setIdea(const std::string idea, int i);

	private:
		std::string	_ideas[100];
};

// *** COLORS ***//
# define PU "\033[0;35m"
# define RED "\033[0;31m"
# define D "\033[0m"

#endif