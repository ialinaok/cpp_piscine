/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:29:01 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/14 01:45:51 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ADD, SEARCH, EXIT are interpreted in the main.
// I need to then call a function from the member functions accordingly
// each contact is an instance of a contact class, so this class needs to have required fields

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

# define BLANK "\e[0m"
# define BLACK "\033[0;30m"
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELL "\033[0;33m"
# define BL "\033[0;34m"
# define PU "\033[0;35m"
# define CY "\033[0;36m"
# define WH "\033[0;37m"
# define D "\033[0m"

int	add_contact(PhoneBook *the_book, int index);
void	print_PhoneBook(PhoneBook *the_book);

int	main(void) {

	PhoneBook	the_book;
	int	index = 0;
	std::string	command = "START";

	while (command != "EXIT" && index < 3) {

		std::cout << YELL << "Welcome to PhoneBook!" << std::endl << WH;
		std::cout << "Please, enter one of the following commands:";
		std::cout << GREEN << "  [ADD]  " << BL << "[SEARCH]  " << RED << "[EXIT]" << std::endl << WH;
		std::cout << ": ";
		std::cin >> command;
		// ***** ALTERNATIVE SOLUTIONS ***** //
			// getline(std::cin, command);
			// char	arr[10];
			// std::cin.getline(arr, 10);
		while (command != "ADD" && command != "SEARCH" && command != "EXIT") {
			
			std::cout << WH << "Please, enter a correct command" << std::endl << ": ";
			std::cin >> command;
		}
		if (command == "ADD") {

			add_contact(&the_book, index);
			index++;
			if (index == 7)
				index = 0;
		}
	}
	print_PhoneBook(&the_book);
}

void	print_PhoneBook(PhoneBook *the_book) {

	Contact	temp;
	for (int j = 0; j < 3; j++) {

		temp = the_book->get_contact(j);
		std::cout << "Index #" << j << " " << temp.get_first_name() << " " << temp.get_last_name() << " ";
		std::cout << temp.get_nickname() << " " << temp.get_phone_number() << " " << temp.get_darkest_secret() << std::endl;
	}
}

// the way things are now, contact will be deleted! bc it will leave the stack frame or whatever you wanna call it
// oyu need a different way of creating the objects. but, there's no norm, so I could literally just 
int	add_contact(PhoneBook *the_book, int index) {

	Contact		contact;
	std::string	temp;

// *** Getting data *** //
	std::cout << "Enter first name" << std::endl << ": ";
	std::cin >> temp;
	contact.set_first_name(temp);
	std::cout << "Enter last name" << std::endl << ": ";
	std::cin >> temp;
	contact.set_last_name(temp);
	std::cout << "Enter nickname" << std::endl << ": ";
	std::cin >> temp;
	contact.set_nickname(temp);
	// *** Checking if there're only digits in input *** //
	while (42) {
		
		int	i;

		std::cout << "Enter phone number (without spaces)" << std::endl << ": ";
		getline(std::cin >> std::ws, temp);
		for (i = 0; i < (int) temp.length(); i++) {
			if (std::isdigit(temp[i]) == 0 || std::isspace(temp[i]) != 0) {

				std::cout << RED << "Error: Please, use only digits while entering the number!" << WH << std::endl;
				break ;
			}
		}
		if (i == (int) temp.length())
			break ;
	}
	contact.set_phone_number(temp);
	std::cout << "Enter darkest secret" << std::endl << ": ";
	getline(std::cin >> std::ws, temp);
	contact.set_darkest_secret(temp);

// *** Printing data ***/
	std::cout << std::endl << "First name: " << contact.get_first_name() << std::endl;
	std::cout << "Last name: " << contact.get_last_name() << std::endl;
	std::cout << "Nickname: " << contact.get_nickname() << std::endl;
	std::cout << "Phone number: " << contact.get_phone_number() << std::endl;
	std::cout << "Darkest secret: " << contact.get_darkest_secret() << std::endl << std::endl;

// *** Adding contact to list ***//
	the_book->add_contact_to_list(contact, index);

	return (0);
}

// *** why doesn't getline() work after std::cin ? *** //
// I suppose it's because there's still nl char in the cin
// and it's waiting there as a leftover to use. then getline is grabbing nl
// and is happily finishing its job. I have to clear nl/
// take it out somehow. let's give it a try.
// 1) I just saved std::cin to temp before: 
	// std::cin >> temp;
	// std::cout << temp << std::endl;
	// getline(std::cin, temp);
// this is not working - getline is then not getting the first word that's coming after
// 2) ok, so cin is ignoring the whitespace characters and leaves them in the stream 
// as garbage -- that's established. that's why it's taking also the first word from stream:
// is reads nl, word, space - ignores the nl and space and only takes word.
// so a solution would be to clear the stream - can we clear it only from whitespaces?
// YES: std::ws. YUP, IT'S WORKINGGGGG