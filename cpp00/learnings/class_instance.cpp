/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class_instance.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 16:12:31 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/09 17:33:46 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class_instance.hpp"


// this is constructor, and it will be called when our class is instantiated
Sample::Sample(void) {

	std::cout << "Constructor called" << std::endl;

	this->foo = 42; // this is a ptr, so we need -> to access foo member in 
	// our class instance
	std::cout << "this->foo: " << this->foo << std::endl;

	this->bar(); // we can call a function directly from an instance ptr

	std::cout << ">>> this is the last message from constructor <<<" << std::endl;
	return ;
}

Sample::~Sample(void) {

	std::cout << "Destructor called" << std::endl;
	return ;
}

void	Sample::bar(void) {

	std::cout << "Member function bar called" << std::endl;
}

//cpp is lying to you, this function actually takes a ptr to the class instance
//that cpp is always passing so that you can use it in your function