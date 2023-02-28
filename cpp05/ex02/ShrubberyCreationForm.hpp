/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 19:02:45 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/28 16:30:16 by ialinaok         ###   ########.fr       */
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

		bool	execute(Bureaucrat const & executor) const;
};

#endif