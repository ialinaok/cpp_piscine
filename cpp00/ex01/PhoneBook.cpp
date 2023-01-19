/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:11:45 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/19 21:49:09 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int		PhoneBook::_nb_contacts_added = 0;
bool	PhoneBook::_is_full = false;

PhoneBook::PhoneBook(void) {

	// std::cout << "Constructor PhoneBook called" << std::endl;

	return ;
}

PhoneBook::~PhoneBook(void) {

	// std::cout << "Destructor PhoneBook called" << std::endl;

	return ;
}

int	PhoneBook::add_contact_to_array(Contact new_contact, int index) {

	this->_list_of_contacts[index] = new_contact;
	std::cout << "Contact #" << index << " added" << std::endl;
	_nb_contacts_added++;
	if (_nb_contacts_added == 8)
		_is_full = true;
	return (0);
}

Contact	PhoneBook::get_contact(int index) const {

	return (this->_list_of_contacts[index]);
}

int	PhoneBook::get_nb_contacts_added(void) const {

	return (_nb_contacts_added);
}

bool	PhoneBook::get_is_full(void) const {

	return (_is_full);
}

// this function will return true only if there's whspc and one single digit in input.
// pre-check for atoi
bool	PhoneBook::valid_index(std::string str) const {

	int i = 0;

	while (std::isspace(str.c_str()[i]) != 0)
		i++;
	if (std::isdigit(str.c_str()[i]) == 0)
		return (false);
	else
		i++;
	while (std::isspace(str.c_str()[i]) != 0)
		i++;
	if (str.c_str()[i] != '\0')
		return (false);
	return (true);
}

void	PhoneBook::get_contact_data(PhoneBook *the_book, int index) {

	Contact		contact;
	std::string	temp;

	std::cout << "Enter first name" << std::endl << ": ";
	std::getline(std::cin >> std::ws, temp);
	contact.set_first_name(temp);
	std::cout << "Enter last name" << std::endl << ": ";
	std::getline(std::cin >> std::ws, temp);
	contact.set_last_name(temp);
	std::cout << "Enter nickname" << std::endl << ": ";
	std::getline(std::cin >> std::ws, temp);
	contact.set_nickname(temp);
	while (42) {
		
		int	i;

		std::cout << "Enter phone number (without spaces)" << std::endl << ": ";
		std::getline(std::cin >> std::ws, temp);
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
	std::getline(std::cin >> std::ws, temp);
	contact.set_darkest_secret(temp);

	the_book->add_contact_to_array(contact, index);

	return ;
}

void	PhoneBook::search_contacts(PhoneBook *the_book) const {

	int	index = 0;
	std::string	i;

	the_book->print_table(the_book);
	if (the_book->get_nb_contacts_added() == 0) {

		std::cout << std::endl << RED << "PhoneBook is empty - there's no contact info to display. Try adding a contact first!" << WH << std::endl;
		return ;
	}
	if (the_book->get_is_full() == false)
		std::cout << std::endl << YELL << "Please, choose a contact to display [index #0 - #" << the_book->get_nb_contacts_added() - 1 << "]";
	else
		std::cout << std::endl << YELL << "Please, choose a contact to display [index #0 - #7]";
	std::cout << WH << std::endl << ": ";
	std::getline(std::cin >> std::ws, i);
	while (the_book->valid_index(i) == false) {

		std::cout << RED << "This is not a valid index. Please only type one digit.";
		std::cout << WH << std::endl << ": ";
		std::getline(std::cin >> std::ws, i);
	}
	if (the_book->valid_index(i) == true)
		index = std::atoi(i.c_str());
	while (((index < 0 || index > the_book->get_nb_contacts_added() - 1) && the_book->get_is_full() == false) || \
		((index < 0 || index > 7) && the_book->get_is_full() == true)) {

		if (the_book->get_is_full() == false)
			std::cout << RED << "Please, choose index from #0 to #" << the_book->get_nb_contacts_added() - 1;
		else
			std::cout << RED << "Please, choose index from #0 to #7";
		std::cout << WH << std::endl << ": ";
		std::getline(std::cin >> std::ws, i);
		while (the_book->valid_index(i) == false) {

			std::cout << RED << "This is not a valid index. Please only type one digit.";
			std::cout << WH << std::endl << ": ";
			std::getline(std::cin >> std::ws, i);
		}
		if (the_book->valid_index(i) == true)
			index = std::atoi(i.c_str());
	}
	std::cout << std::endl << PU << "First name: " << WH << the_book->get_contact(index).get_first_name() << std::endl;
	std::cout << PU << "Last name: " << WH << the_book->get_contact(index).get_last_name() << std::endl;
	std::cout << PU << "Nickname: " << WH << the_book->get_contact(index).get_nickname() << std::endl;
	std::cout << PU << "Phone number : " << WH << the_book->get_contact(index).get_phone_number() << std::endl;
	std::cout << PU << "Darkest secret: " << WH << the_book->get_contact(index).get_darkest_secret() << std::endl;
}

void	PhoneBook::print_table(PhoneBook *the_book) const {

	int	index = 0;

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

	return ;
}