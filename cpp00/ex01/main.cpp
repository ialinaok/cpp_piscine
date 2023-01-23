/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:29:01 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/19 21:51:19 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void) {

	PhoneBook	the_book;
	int	index = 0;
	std::string	command = "START";

	while (std::strncmp(command.c_str(), "EXIT", 5) != 0) {

		std::cout << std::endl << YELL << "Welcome to PhoneBook!" << std::endl << WH;
		std::cout << "Please, enter one of the following commands:";
		std::cout << GREEN << "  [ADD]  " << BL << "[SEARCH]  " << RED << "[EXIT]" << std::endl << WH;
		std::cout << ": ";
		getline(std::cin >> std::ws, command);
		while (std::strncmp(command.c_str(), "ADD", 4) != 0 && std::strncmp(command.c_str(), "SEARCH", 7) \
				&& std::strncmp(command.c_str(), "EXIT", 5) != 0) {
			
			std::cout << RED << "Please, enter a correct command" << WH << std::endl << ": ";
			std::getline(std::cin >> std::ws, command);
		}
		if (std::strncmp(command.c_str(), "ADD", 4) == 0)
			the_book.get_contact_data(&the_book, index++);
		else if (std::strncmp(command.c_str(), "SEARCH", 7) == 0)
			the_book.search_contacts(&the_book);
		if (index == 8)
				index = 0;
	}
}
