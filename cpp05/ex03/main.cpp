/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:51:35 by ialinaok          #+#    #+#             */
/*   Updated: 2023/02/26 18:03:24 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardon.hpp"

int	main() {

	Bureaucrat	philip("Philip", 142);
	Bureaucrat	pablo("Pablo", 3);
	Intern		coffeeMaker;
	AForm		*form;

	std::cout << BLA << "----------------------------" << D << std::endl;
	std::cout << BLA << "----" << YELL << "TEST SHRUBBERY FORM" << BLA << "----" << std::endl;
	std::cout << BLA << "----------------------------" << WH << std::endl;

	form = coffeeMaker.makeForm("some bullshit name", "far away mystical universe");
	form = coffeeMaker.makeForm("Shrubbery Creation Form", "far away mystical universe");
	philip.signForm(*form);
	std::cout << *form << std::endl;
	pablo.executeForm(*form);

	delete form;

	std::cout << BLA << "----------------------------" << D << std::endl;
	std::cout << BLA << "----" << YELL << "TEST ROBOTOMY FORM" << BLA << "----" << std::endl;
	std::cout << BLA << "----------------------------" << WH << std::endl;

	form = coffeeMaker.makeForm("Robotomy Request Form", "far away mystical universe");
	pablo.signForm(*form);
	std::cout << *form << std::endl;
	pablo.executeForm(*form);

	delete form;

	std::cout << BLA << "----------------------------" << D << std::endl;
	std::cout << BLA << "----" << YELL << "TEST PARDON FORM" << BLA << "----" << std::endl;
	std::cout << BLA << "----------------------------" << WH << std::endl;

	form = coffeeMaker.makeForm("Presidential Pardon Form", "far away mystical universe");
	pablo.signForm(*form);
	std::cout << *form << std::endl;
	pablo.executeForm(*form);

	delete form;
}