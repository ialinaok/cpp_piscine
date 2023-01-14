/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:11:45 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/14 01:33:20 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {

	std::cout << "Constructor PhoneBook called" << std::endl;

	return ;
}

PhoneBook::~PhoneBook(void) {

	std::cout << "Destructor PhoneBook called" << std::endl;

	return ;
}

int	PhoneBook::add_contact_to_list(Contact new_contact, int index) {

	this->_list_of_contacts[index] = new_contact;
	std::cout << "Contact #" << index << " added" << std::endl;

	return (0);
}

Contact	PhoneBook::get_contact(int index) const {

	return (this->_list_of_contacts[index]);
}
