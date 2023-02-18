/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 20:07:21 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/18 20:15:51 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main() {

	std::cout << BLA << "----------------------------------" << D << std::endl;
	std::cout << BLA << "-----" << YELL << "TEST DEFAULT CONSTRUCTOR" << BLA << "-----" << std::endl;
	std::cout << BLA << "----------------------------------" << WH << std::endl;

	Bureaucrat	one;

	std::cout << CY << one;

	std::cout << BLA << "----------------------------------" << D << std::endl;
	std::cout << BLA << "----" << YELL << "TEST INITIALIZATION EXCEP." << BLA << "----" << std::endl;
	std::cout << BLA << "----------------------------------" << WH << std::endl;

	Bureaucrat	step("Brian", 0);
	Bureaucrat	at("Wilma", 333);
	Bureaucrat	time("Jessica", 1);

	std::cout << BLA << "----------------------------------" << D << std::endl;
	std::cout << BLA << "------" << YELL << "TEST INCREMENT EXCEP." << BLA << "-------" << std::endl;
	std::cout << BLA << "----------------------------------" << WH << std::endl;

	std::cout << PU << time << std::endl;
	time.increment();
	std::cout << PU << time << std::endl;

}