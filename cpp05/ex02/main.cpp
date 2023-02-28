/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 18:23:02 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/28 16:35:20 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main() {

	Bureaucrat	phill("Phill", 42);
	Bureaucrat	maddie("Maddie", 149);

	std::cout << BLA << "-----------------------------------" << D << std::endl;
	std::cout << BLA << "--------" << WH << "TEST SHRUBBERY FORM" << BLA << "--------" << std::endl;
	std::cout << BLA << "-----------------------------------" << WH << std::endl;

	ShrubberyCreationForm	shrub("garden");   //sign 145 exec 137
	ShrubberyCreationForm	shrub_ass;
	ShrubberyCreationForm	shrub_copy(shrub);

	std::cout << shrub << std::endl;

	maddie.signForm(shrub);
	std::cout << shrub << std::endl;
	maddie.executeForm(shrub);
	std::cout << shrub << std::endl;
	phill.signForm(shrub);
	std::cout << shrub << std::endl;
	phill.executeForm(shrub);

	std::cout << BLA << "------------------------------------" << D << std::endl;
	std::cout << BLA << "---------" << WH << "TEST ROBOTOMY FORM" << BLA << "---------" << std::endl;
	std::cout << BLA << "------------------------------------" << WH << std::endl;

	RobotomyRequestForm	robot("Marvin"); //sign 72 exec 45

	std::cout << robot << std::endl;
	maddie.signForm(robot);
	std::cout << robot << std::endl;
	while (maddie.getGrade() != 70)
		maddie.increment();
	std::cout << BLA << "⬆️  Maddie got promoted and her new level is " << PU << maddie.getGrade() << D << std::endl;
	maddie.signForm(robot);
	std::cout << robot << std::endl;
	maddie.executeForm(robot);
	std::cout << robot << std::endl;
	for (int i = 0; i < 10; i++, sleep(1))
		phill.executeForm(robot);

	std::cout << BLA << "------------------------------------" << D << std::endl;
	std::cout << BLA << "------" << WH << "TEST PRESIDENTIAL PARDON" << BLA << "------" << std::endl;
	std::cout << BLA << "------------------------------------" << WH << std::endl;

	PresidentialPardonForm	pres("Max"); //sign 25, exec 5
	Bureaucrat				assistant("Personal Assistant to President", 2);

	phill.signForm(pres);
	std::cout << pres << std::endl;
	phill.executeForm(pres);
	std::cout << pres << std::endl;
	assistant.signForm(pres);
	std::cout << pres << std::endl;
	assistant.executeForm(pres);
}