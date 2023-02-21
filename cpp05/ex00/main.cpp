/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 20:07:21 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/21 19:47:26 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main() {


	Bureaucrat	test;
	Bureaucrat	copy(test);

	std::cout << PU << test << std::endl;
	std::cout << PU << copy << std::endl;

	std::cout << BLA << "----------------------------------" << D << std::endl;
	std::cout << BLA << "-----" << YELL << "TEST DEFAULT CONSTRUCTOR" << BLA << "-----" << std::endl;
	std::cout << BLA << "----------------------------------" << WH << std::endl;

	Bureaucrat	one;

	std::cout << CY << one << std::endl;

	std::cout << BLA << "----------------------------------" << D << std::endl;
	std::cout << BLA << "----" << YELL << "TEST INITIALIZATION EXCEP." << BLA << "----" << std::endl;
	std::cout << BLA << "----------------------------------" << WH << std::endl;

	Bureaucrat	step("Brian", 0);
	Bureaucrat	at("Wilma", 333);
	Bureaucrat	a("Jessica", 1);

	std::cout << BLA << "----------------------------------" << D << std::endl;
	std::cout << BLA << "------" << YELL << "TEST INCREMENT EXCEP." << BLA << "-------" << std::endl;
	std::cout << BLA << "----------------------------------" << WH << std::endl;

	std::cout << GREEN << one << std::endl;
	one.increment();
	std::cout << GREEN << one << std::endl;

	std::cout << PU << a << std::endl;
	a.increment();
	std::cout << PU << a << std::endl;

	std::cout << BLA << "----------------------------------" << D << std::endl;
	std::cout << BLA << "------" << YELL << "TEST DECREMENT EXCEP." << BLA << "-------" << std::endl;
	std::cout << BLA << "----------------------------------" << WH << std::endl;

	std::cout << GREEN << one << std::endl;
	one.decrement();
	std::cout << GREEN << one << std::endl;

	Bureaucrat	time("Winston", 150);
	std::cout << BLU << time << std::endl;
	time.decrement();
	std::cout << BLU << time << std::endl;
}