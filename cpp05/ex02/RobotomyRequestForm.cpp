/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 10:56:29 by ialinaok          #+#    #+#             */
/*   Updated: 2023/02/28 16:58:35 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45) {

	this->setTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : AForm(src) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &	RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) {

	if (this != &rhs)
		AForm::operator=(rhs);
	return (*this);
}

bool	RobotomyRequestForm::execute(Bureaucrat const & executor) const {

	if (this->checkExecuteRequirements(executor) == false)
		return (false);

	std::cout << BLA << "*🔊 drilling noises 🔊*" << D << std::endl;
	time_t	now = std::time(0);
	if (now % 2 == 0)
		std::cout << CY << this->getTarget() << D << " got robotomized " << GREEN << "successfully" << D << std::endl;
	else
		std::cout << "Robotomy of " << CY << this->getTarget() << RED << " failed" << D << std::endl;
	return (true);
}
