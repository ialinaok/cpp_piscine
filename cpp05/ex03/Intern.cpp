/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:19:21 by ialinaok          #+#    #+#             */
/*   Updated: 2023/02/26 17:47:51 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(Intern const & src) { //nothing to copy over

	(void)src;
}

Intern::~Intern() {}

Intern::Intern const &	operator=(Intern const & rhs) { //nothing to assgin

	(void)rhs;
}

AForm	*Intern::makeShrubbery(std::string target) {

	return (new ShrubberyCreationForm(target));
}

AForm	*Intern::makeRobotomy(std::string target) {

	return (new RobotomyRequestForm(target));
}

AForm	*Intern::makePardon(std::string target) {

	return (new PresidentialPardonForm(target));
}

AForm	*Intern::makeForm(std::string form_name, std::string target) {

	int i = 0;
	std::string	arr[3] = {"Shrubbery Creation Form", "Robotomy Request Form", "Presidential Pardon Form"};
	AForm		*(Intern::*f[3])(std::string target) = {
		&Intern::makeShrubbery,
		&Intern::makeRobotomy,
		&Intern::makePardon};

	while (i < 3) {

		if (arr[i] == form_name)
			break ;
		i++;
	}
	if (i < 3)
		(this->*f[i])(target);
	else {

		std::cout << "Intern " << RED << "failed " << D << "to create " << YELL << form_name << D;
		std::cout << " because they're stupid or the form doesn't exist" << std::endl;
	}
}