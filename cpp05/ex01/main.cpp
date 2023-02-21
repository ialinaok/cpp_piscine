/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:22:51 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/21 20:18:21 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main() {

	std::cout << BLA << "----------------------------" << D << std::endl;
	std::cout << BLA << "----" << YELL << "TEST FORM INIT. EXC." << BLA << "----" << std::endl;
	std::cout << BLA << "----------------------------" << WH << std::endl;
	try {

		Form	low("err", 300, 20);
	}
	catch (Form::GradeTooLowException& e) {

		std::cout << RED << "GradeTooLowException caught" << D << std::endl;
	}
	try {

		Form	loww("err", 20, 300);
	}
	catch (Form::GradeTooLowException& e) {

		std::cout << RED << "GradeTooLowException caught" << D << std::endl;
	}
	try {

		Form	high("err", 0, 20);
	}
	catch (Form::GradeTooHighException& e) {

		std::cout << RED << "GradeTooHighException caught" << D << std::endl;
	}
	try {

		Form	highh("err", 20, 0);
	}
	catch (Form::GradeTooHighException& e) {

		std::cout << RED << "GradeTooHighException caught" << D << std::endl;
	}
	std::cout << BLA << "----------------------------" << D << std::endl;
	std::cout << BLA << "----" << YELL << "TEST FORM SIGN. EXC." << BLA << "----" << std::endl;
	std::cout << BLA << "----------------------------" << WH << std::endl;

	Bureaucrat	man("Fred", 42);

	Form		ard("ARD", 100, 42);
	Form		fgf("Fahrgastrechte-Formular", 23, 1);

	man.signForm(ard);
	std::cout << CY << "Before signing: " << D << fgf << std::endl;
	man.signForm(fgf);
	std::cout << CY << "After signing: " << D << fgf << std::endl;
}