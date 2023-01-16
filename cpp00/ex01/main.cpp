/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:29:01 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/16 18:19:18 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ADD, SEARCH, EXIT are interpreted in the main.
// I need to then call a function from the member functions accordingly
// each contact is an instance of a contact class, so this class needs to have required fields

//TODO - check empty fields, though it seems to be working now

#include <iostream>
#include <string>
#include <iomanip>
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

int		add_contact(PhoneBook *the_book, int index);
void	print_PhoneBook(PhoneBook *the_book);
void	search_contacts(PhoneBook *the_book);

int	main(void) {

	PhoneBook	the_book;
	int	index = 0;
	std::string	command = "START";

	while (command != "EXIT") {

		std::cout << std::endl << YELL << "Welcome to PhoneBook!" << std::endl << WH;
		std::cout << "Please, enter one of the following commands:";
		std::cout << GREEN << "  [ADD]  " << BL << "[SEARCH]  " << RED << "[EXIT]" << std::endl << WH;
		std::cout << ": ";
		std::cin >> command;
		// ***** ALTERNATIVE SOLUTIONS ***** //
			// getline(std::cin, command);
			// char	arr[10];
			// std::cin.getline(arr, 10);
		while (command != "ADD" && command != "SEARCH" && command != "EXIT") {
			
			std::cout << RED << "Please, enter a correct command" << WH << std::endl << ": ";
			std::cin >> command;
		}
		if (command == "ADD")
			add_contact(&the_book, index++);
		else if (command == "SEARCH")
			search_contacts(&the_book);
		if (index == 8)
				index = 0;
	}
	// print_PhoneBook(&the_book);
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

void	search_contacts(PhoneBook *the_book) {

	int	index = 0;
	char	i[10];

	std::cout << std::setw(10) << std::right << "Index" << "|";
	std::cout << std::setw(10) << std::right << "First name" << "|";
	std::cout << std::setw(10) << std::right << "Last name" << "|";
	std::cout << std::setw(10) << std::right << "Nickname" << std::endl;
	while (index < 8) {

		std::cout << std::setw(10) << std::setfill(' ') << index << "|";
		if (the_book->get_contact(index).get_first_name().length() >= 10)
			std::cout << std::setw(9) << std::setfill(' ') << the_book->get_contact(index).get_first_name().substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << std::setfill(' ') << the_book->get_contact(index).get_first_name() << "|";
		if (the_book->get_contact(index).get_last_name().length() >= 10)
			std::cout << std::setw(9) << std::setfill('.') << the_book->get_contact(index).get_last_name().substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << std::setfill(' ') << the_book->get_contact(index).get_last_name() << "|";
		if (the_book->get_contact(index).get_nickname().length() >= 10)
			std::cout << std::setw(9) << std::setfill(' ') << the_book->get_contact(index).get_nickname().substr(0, 9) << "." << std::endl;
		else
			std::cout << std::setw(10) << std::setfill(' ') << the_book->get_contact(index).get_nickname() << std::endl;

		index++;
	}
	std::cout << std::endl << YELL << "Please, choose a contact to display [index #0 - #7]" << WH << std::endl;
	std::cout << ": ";
	std::cin >> i;
	index = std::atoi(i);
	while (index < 0 || index > 7) {
		
		std::cout << RED << "Please, choose index from #0 to #7" << WH << std::endl << ": ";
		std::cin >> i;
		index = std::atoi(i);
	}
	while (the_book->get_contact(index).get_first_name() == "") {

		std::cout << RED << "There's no contact at chosen index. Please, choose another index" << WH << std::endl << ": ";
		std::cin >> i;
		index = std::atoi(i);
		while (index < 0 || index > 7) {
		
			std::cout << RED << "Please, choose index from #0 to #7" << WH << std::endl << ": ";
			std::cin >> i;
			index = std::atoi(i);
	}
	}
	std::cout << std::endl << the_book->get_contact(index).get_first_name() << std::endl;
	std::cout << the_book->get_contact(index).get_last_name() << std::endl;
	std::cout << the_book->get_contact(index).get_nickname() << std::endl;
	std::cout << the_book->get_contact(index).get_phone_number() << std::endl;
	std::cout << the_book->get_contact(index).get_darkest_secret() << std::endl;
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