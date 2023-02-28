/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 12:24:30 by ialinaok          #+#    #+#             */
/*   Updated: 2023/02/28 16:50:17 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardon", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardon", 25, 5) {

	this->setTarget(target);
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : AForm(src) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &	PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs) {

	if (this != &rhs)
		AForm::operator=(rhs);
	return (*this);
}

bool	PresidentialPardonForm::execute(Bureaucrat const & executor) const {

	if (this->checkExecuteRequirements(executor) == false)
		return (false);
	std::cout << "✨" << CY << this->getTarget() << WH << " got pardoned by Zaphod Beeblebrox ✨" << std::endl;
	return (true);
}