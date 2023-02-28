/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 22:00:48 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/28 16:30:01 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_H
# define ROBOTOMY_H

#include "AForm.hpp"
#include <time.h>
#include <unistd.h>

class	RobotomyRequestForm : public AForm {

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const & src);
		~RobotomyRequestForm();
		RobotomyRequestForm &	operator=(RobotomyRequestForm const & rhs);

		bool	execute(Bureaucrat const & executor) const;
};

#endif