/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:15:00 by ialinaok          #+#    #+#             */
/*   Updated: 2023/02/26 17:52:07 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

#include <string>
#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardon.hpp"

class	Intern {

	public:
		Intern();
		Intern(Intern const & src);
		~Intern();
		Intern const &	operator=(Intern const & rhs);

		AForm	*makeShrubbery(std::string target);
		AForm	*makeRobotomy(std::string target);
		AForm	*makePardon(std::string target);
		AForm	*makeForm(std::string form_name, std::string target);
};

#endif