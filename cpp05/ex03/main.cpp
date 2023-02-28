/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:51:35 by ialinaok          #+#    #+#             */
/*   Updated: 2023/02/28 16:49:51 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main() {

	Bureaucrat	philip("Philip", 142);
	Bureaucrat	pablo("Pablo", 3);
	Intern		coffeeMaker;
	AForm		*form;

	std::cout << BLA << "-----------------------------------" << D << std::endl;
	form = coffeeMaker.makeForm("some bullshit name", "far away mystical universe");

	std::cout << BLA << "-----------------------------------" << D << std::endl;
	std::cout << BLA << "--------" << WH << "TEST SHRUBBERY FORM" << BLA << "--------" << std::endl;
	std::cout << BLA << "-----------------------------------" << WH << std::endl;

	form = coffeeMaker.makeForm("Shrubbery Creation Form", "far away mystical universe");
	philip.signForm(*form);
	std::cout << *form << std::endl;
	pablo.executeForm(*form);

	delete form;

	std::cout << BLA << "------------------------------------" << D << std::endl;
	std::cout << BLA << "---------" << WH << "TEST ROBOTOMY FORM" << BLA << "---------" << std::endl;
	std::cout << BLA << "------------------------------------" << WH << std::endl;

	form = coffeeMaker.makeForm("Robotomy Request Form", "Wolf of Wolfsburg");
	pablo.signForm(*form);
	std::cout << *form << std::endl;
	pablo.executeForm(*form);

	delete form;

	std::cout << BLA << "------------------------------------" << D << std::endl;
	std::cout << BLA << "------" << WH << "TEST PRESIDENTIAL PARDON" << BLA << "------" << std::endl;
	std::cout << BLA << "------------------------------------" << WH << std::endl;

	form = coffeeMaker.makeForm("Presidential Pardon Form", "Pisciner");
	pablo.signForm(*form);
	std::cout << *form << std::endl;
	pablo.executeForm(*form);

	delete form;
}