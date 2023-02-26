/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardon.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 12:24:30 by ialinaok          #+#    #+#             */
/*   Updated: 2023/02/26 12:57:15 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardon.hpp"

PresidentialPardon::PresidentialPardonForm() : AForm("PresidentialPardon", 25, 5) {}

PresidentialPardon::PresidentialPardonForm(std::string target) : AForm("PresidentialPardon", 25, 5) {

	this->setTarget(target);
}

PresidentialPardon::PresidentialPardonForm(PresidentialPardonForm const & src) : AForm(src) {}

PresidentialPardon::~PresidentialPardonForm() {}

PresidentialPardon::PresidentialPardonForm &	operator=(PresidentialPardonForm const & rhs) {

	if (this != &rhs)
		AForm::operator=(rhs);
	return (*this)
}

void	PresidentialPardon::execute(Bureaucrat const & executor) const {

	if (this->checkExecuteRequirements(executor) == false)
		return ;
	std::cout << CY << this->getTarget() << WH << "got pardoned by Zaphod Beeblebrox" << std::endl;
}