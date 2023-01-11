/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nonmember.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:32:13 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/11 17:03:37 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "nonmember.hpp"

//functions declared with static keyword are non-member functions
Nonmember::Nonmember(void) {

	std::cout << "Constructor Nonmember called" << std::endl;
	Nonmember::_nbInst += 1;
	std::cout << ">>> end of constructor <<<" << std::endl;

	return ;
}

Nonmember::~Nonmember(void) {

	std::cout << "Destructor Nonmember called" << std::endl;
	Nonmember::_nbInst -= 1;

	return ;
}

//you cannot use a this-> in a nonmember function
int	Nonmember::getNbInst(void) {

	return (Nonmember::_nbInst);
}

//that's the only way to initialize a nonmember attribute
int	Nonmember::_nbInst = 0;