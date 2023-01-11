/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointers.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:06:07 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/11 17:08:51 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "pointers.hpp"

Pointers::Pointers(void) : foo(0) {

	std::cout << "Constructor Pointers called" << std::endl;
	std::cout << ">>> end of constructor <<<" << std::endl;

	return ;
}

Pointers::~Pointers(void) {

	std::cout << "Destructor Pointers called" << std::endl;

	return ;
}

void	Pointers::bar(void) const {
	
	std::cout << "Member function bar() called" << std::endl;

	return ;
}