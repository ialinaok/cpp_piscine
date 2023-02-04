/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:49:48 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/01 17:54:12 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed_is_for_losers.hpp"
#include "colors.hpp"
#include <fstream>

int	main(int argc, char **argv) {

	std::cout << argv[0] << std::endl;
	if (argc != 4) {
		
		std::cout << std::endl << YELL << "Please, enter parameters  for the program:  " << WH;
		std::cout << "<filename>  <s1>  <s2>" << std::endl << std::endl;
		std::cout << BL << "<filename>" << WH << " is a name of the source file" << std::endl;
		std::cout << BL << "<s1>" << WH << " is a string which occurences will be replaced" << std::endl;
		std::cout << BL << "<s2>" << WH << " is a string with which occurences of <s1> will be replaced" << std::endl;

		return (1);
	}

	std::ifstream	ifs(argv[1]);
	if (ifs.good() == 0) {

		std::cout << RED << "File doesn't exist. Please provide an existing filename" << WH << std::endl;

		return (2);
	}
	std::string	out_filename = argv[1];
	out_filename += ".replace";
	std::cout << YELL << "out_filename: " << out_filename << WH << std::endl;


	
	// *** TEST IF FILE EXISTS *** //
	// std::ifstream	ifs1("colors.hpp");
	// std::ifstream	ifs2("no_exist");
	// std::cout << GREEN << "the existing one's .good()" << WH << ifs1.good() << std::endl;
	// std::cout << RED << "the no exist one's .good()" << WH << ifs2.good() << std::endl;
}