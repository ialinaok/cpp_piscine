/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:11:45 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/13 18:58:32 by apielasz         ###   ########.fr       */
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