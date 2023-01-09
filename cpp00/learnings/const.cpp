/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   const.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 18:17:34 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/09 18:40:11 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// haven't used much const so far, const is sth extraordinary. apparently very 
// important. working with as many consts as possible guarantees the program 
// will work fine.

#include <iostream>
#include "const.hpp"

//NOT assigining the f value to pi attribute, but initializing pi with the value of f
Const::Const(float const f) : pi(f), qd(42) {

	std::cout << "Constructor Const called" << std::endl;

	return ;
}

Const::~Const(void) {

	std::cout << "Destructor Const called" << std::endl;

	return ;
}

void	Const::bar(void) const {

	std::cout << "this->pi: " << this->pi << std::endl;
	std::cout << "this->qd: " << this->qd << std::endl;

	// this->qd = 0; //in theory, nothing stops me from doing that, bc qd isn't const
	//BUT --> the member function was defined as const, so you cannot change the current
	//instance, therefore you cannot change qd.

	return ;
}