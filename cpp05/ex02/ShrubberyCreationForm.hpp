/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 19:02:45 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/23 17:10:55 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_H
# define SHRUBBERY_H

#include "AForm.hpp"
#include <fstream>

class	ShrubberyCreationForm : public AForm {

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		~ShrubberyCreationForm();
		ShrubberyCreationForm &	operator=(ShrubberyCreationForm const & rhs);

		void	execute(Bureaucrat const & executor) const;
};

#endif