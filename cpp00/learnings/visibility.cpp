/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visibility.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialinaok <ialinaok@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:26:07 by ialinaok          #+#    #+#             */
/*   Updated: 2023/01/10 16:34:04 by ialinaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "visibility.hpp"

Visibility::Visibility(void) {

	std::cout << "Constructor Visibility called" << std::endl;

	this->publicFoo = 0;
	std::cout << "this->publicFoo: " << this->publicFoo << std::endl;
	this->_privateFoo = 0;
	std::cout << "this->_privateFoo: " << this->_privateFoo << std::endl;

	this->publicBar();
	this->_privateBar();

	std::cout << ">>> end of Visibility constructor" << std::endl;

	return ;
}

Visibility::~Visibility(void) {

	std::cout << "Destructor Visibility called" << std::endl;

	return ;
}

void	Visibility::publicBar(void) const {

	std::cout << "Member function publicBar() called" << std::endl;
	
	return ;
}

void	Visibility::_privateBar(void) const {

	std::cout << "Member function _privateBar() called" << std::endl;

	return ;
}