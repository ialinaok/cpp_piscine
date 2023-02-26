/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 18:23:02 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/26 11:00:25 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

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

			RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const & src);
		~RobotomyRequestForm();
		RobotomyRequestForm &	operator=(RobotomyRequestForm const & rhs);


}