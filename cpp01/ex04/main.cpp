/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:49:48 by apielasz          #+#    #+#             */
/*   Updated: 2023/02/04 17:25:53 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//*** TESTS TO COPY IN CL ***//
/* --- input validation checking:
./SedIsForLosers
./SedIsForLosers bullshit_name s s
./SedIsForLosers more than three arguments

   --- checking if program works:
./SedIsForLosers champions champions "42 students"
./SedIsForLosers empty_file s1 s2
./SedIsForLosers champions no_occurence_of_me unicorns
*/

#include "sed_is_for_losers.hpp"

int	main(int argc, char **argv) {

	if (argc != 4) {
		
		std::cout << std::endl << YELL << "Please, enter correct parameters  for the program:  " << WH;
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

	std::string	to_replace = argv[2];
	std::string	to_be_replaced_with = argv[3];

	// ifs.open(argv[1]); // -> I don't need to use it, file is already associated with stream,
	// actually, if I use it, the function will fail as you can tell from below test

	//*** this is ios::fail all tests ***//
	// std::cout << CY << "good return: " << ifs.good() << WH << std::endl;
	// std::cout << CY << "eof return: " << ifs.eof() << WH << std::endl;
	// std::cout << CY << "fail return: " << ifs.fail() << WH << std::endl;
	// std::cout << CY << "bad return: " << ifs.bad() << WH << std::endl;
	// std::cout << CY << "rdstate return: " << ifs.rdstate() << WH << std::endl;
	// std::cout << GREEN << "is_open return: " << ifs.is_open() << WH << std::endl;

	//*** this is for creating outfile ***//
	std::string	out_filename = argv[1];
	out_filename += ".replace";
	// std::cout << YELL << "out_filename: " << out_filename << WH << std::endl;
	//*** this is for creating outfile ofs***//
	std::ofstream	ofs(out_filename);

	std::string	buffer;
	std::string	full_buffer;
	// getline(ifs, buffer);
	while (42) {

		std::getline(ifs, buffer);
		// std::cout << "buffer now: " << YELL << buffer << WH << std::endl;

		std::size_t	found = 0;
		while (42) {

			found = buffer.find(to_replace);
			if (found == std::string::npos)
				break ;
			// std::cout << "this is found: " << PU << found << WH << std::endl;
			buffer.erase(found, to_replace.length());
			// std::cout << "this is string after erase(): " << RED << buffer << WH << std::endl;
			buffer.insert(found, to_be_replaced_with);
			// std::cout << "this is string after insert(): " << GREEN << buffer << WH << std::endl;
		}
		ofs << buffer;
		if (ifs.eof() == false)
			ofs << std::endl;
		else
			break ;
	}
	ifs.close();
	ofs.close();

	// *** TEST IF FILE EXISTS *** //
	// std::ifstream	ifs1("colors.hpp");
	// std::ifstream	ifs2("no_exist");
	// std::cout << GREEN << "the existing one's .good()" << WH << ifs1.good() << std::endl;
	// std::cout << RED << "the no exist one's .good()" << WH << ifs2.good() << std::endl;
}