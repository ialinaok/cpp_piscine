/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:35:12 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/09 18:14:17 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "init.hpp"
#include <iostream>

Init1::Init1(char p1, int p2, float p3) {

	std::cout << "Constructor Init1 called" << std::endl;

	this->a1 = p1;
	std::cout << "This is a1: " << this->a1 << std::endl;
	this->a2 = p2;
	std::cout << "This is a2: " << this->a2 << std::endl;
	this->a3 = p3;
	std::cout << "This is a3: " << this->a3 << std::endl;

	std::cout << ">>> end of Init1 constructor <<<" << std::endl;

	return ;
}

Init1::~Init1(void) {

	std::cout << "Destructor Init1 called" << std::endl;

	return ;
}

// this syntax is called initialization list, this is what should be done
// to avoid problems later, whatever those problems may be, rn Idk
Init2::Init2(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3) {

	std::cout << "Constructor Init2 called" << std::endl;
	std::cout << "This is a1: " << this->a1 << std::endl;
	std::cout << "This is a2: " << this->a2 << std::endl;
	std::cout << "This is a3: " << this->a3 << std::endl;
	std::cout << ">>> end of Init2 constructor <<<" << std::endl;

	return ;
}

Init2::~Init2(void) {

	std::cout << "Destructor Init2 called" << std::endl;

	return ;
}