/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 01:03:50 by ialinaok          #+#    #+#             */
/*   Updated: 2023/01/24 01:11:45 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colors.hpp"
#include <iostream>
#include <string>

int	main() {

	std::string	hi = "HI THIS IS BRAIN";
	std::string	*stringPTR = &hi;
	std::string&	stringREF = hi;

	std::cout << "This is the address of string: " << YELL << &hi << std::endl;
	std::cout << WH << "This is the pointer: " << CY << stringPTR << std::endl;
	std::cout << WH << "This is the reference: " << GREEN << &stringREF << std::endl;

	std::cout << WH << "The string: " << PU << hi << std::endl;
	std::cout << WH << "Value pointed to by ptr: " << BL << *stringPTR << std::endl;
	std::cout << WH << "Value pointed to by ref: " << RED << stringREF << std::endl;

	return (0); 
}