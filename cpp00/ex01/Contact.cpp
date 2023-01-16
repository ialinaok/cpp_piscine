/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:44:03 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/16 17:52:04 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"

Contact::Contact(void) {

	// std::cout << "Constructor Contact called" << std::endl;

	return ;
}

Contact::~Contact(void) {

	// std::cout << "Destructor Contact called" << std::endl;

	return ;
}

int	Contact::set_first_name(std::string s) {

	this->_first_name = s;

	return (0);
}

int	Contact::set_last_name(std::string s) {

	this->_last_name = s;

	return (0);
}

int	Contact::set_nickname(std::string s) {

	this->_nickname = s;

	return (0);
}

int	Contact::set_phone_number(std::string s) {

	this->_phone_number = s;

	return (0);
}

int	Contact::set_darkest_secret(std::string s) {

	this->_darkest_secret = s;

	return (0);
}

std::string	Contact::get_first_name(void) const {

	return (this->_first_name);
}

std::string	Contact::get_last_name(void) const {

	return (this->_last_name);
}

std::string	Contact::get_nickname(void) const {

	return (this->_nickname);
}

std::string	Contact::get_phone_number(void) const {

	return (this->_phone_number);
}

std::string	Contact::get_darkest_secret(void) const {

	return (this->_darkest_secret);
}