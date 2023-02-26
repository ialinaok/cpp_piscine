/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 10:56:29 by ialinaok          #+#    #+#             */
/*   Updated: 2023/02/26 11:12:49 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm() {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45) {

	this->setTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : AForm(src) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm &	operator=(RobotomyRequestForm const & rhs) {

	if (this != &rhs)
		AForm::operator=(rhs);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {

	try {

		this->checkExecuteRequirements(executor);
	}
	catch (FormNotSignedException& e) {

		std::cout << RED << "Cannot execute " << YELL << this->getName() << RED << ": form not signed" << std::endl;
		return ;
	}
	catch (GradeTooLowException& ee) {

		std::cout << RED << "Cannot execute " << YELL << this->getName() << RED << ": executor's grade too low" << std::endl;
		return ;
	}
	
}
