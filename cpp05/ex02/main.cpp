/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 18:23:02 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/26 13:23:17 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardon.hpp"

int	main() {

	Bureaucrat	phill("Phill", 42);
	Bureaucrat	maddie("Maddie", 149);

	std::cout << BLA << "----------------------------" << D << std::endl;
	std::cout << BLA << "----" << YELL << "TEST SHRUBBERY FROM" << BLA << "----" << std::endl;
	std::cout << BLA << "----------------------------" << WH << std::endl;

	ShrubberyCreationForm	shrub("garden");   //sign 145 exec 137
	ShrubberyCreationForm	shrub_ass;
	ShrubberyCreationForm	shrub_copy(shrub);

	std::cout << shrub << std::endl;
//this is just for me to test = operator and cp const., tbr later
	std::cout << shrub_copy << std::endl;
	std::cout << shrub_ass << std::endl;
	shrub_ass = shrub;
	std::cout << shrub << std::endl;
	std::cout << shrub_ass << std::endl;

	maddie.signForm(shrub);
	std::cout << shrub << std::endl;
	shrub.execute(maddie);
	std::cout << shrub << std::endl;
	phill.signForm(shrub);
	std::cout << shrub << std::endl;
	shrub.execute(phill);
	std::cout << shrub << std::endl;

	std::cout << BLA << "----------------------------" << D << std::endl;
	std::cout << BLA << "----" << YELL << "TEST ROBOTOMY FROM" << BLA << "----" << std::endl;
	std::cout << BLA << "----------------------------" << WH << std::endl;

	RobotomyRequestForm	robot("Marvin"); //sign 72 exec 45

	maddie.signForm(robot);
	std::cout << robot << std::endl;
	while (maddie.getGrade() != 70)
		maddie.increment();
	maddie.signForm(robot);
	std::cout << robot << std::endl;
	robot.execute(maddie);
	std::cout << robot << std::endl;
	robot.execute(phill);
	std::cout << robot << std::endl;

	std::cout << BLA << "----------------------------" << D << std::endl;
	std::cout << BLA << "----" << YELL << "TEST PRESIDENTIAL PARDON" << BLA << "----" << std::endl;
	std::cout << BLA << "----------------------------" << WH << std::endl;

	PresidentialPardonForm	pres("Max"); //sign 25, exec 5
	Bureaucrat				assistant("Personal Assistant to President", 2);

	phill.signForm(pres);
	std::cout << pres << std::endl;
	pres.execute(phill);
	std::cout << pres << std::endl;
	assistant.signForm(pres);
	std::cout << pres << std::endl;
	pres.execute(assistant);
	std::cout << pres << std::endl;
}