/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class_instance.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 16:12:31 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/08 16:49:36 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "class_instance.hpp"

Sample::Sample(void) {
	
	std::cout << "Constructor called" << std::endl;
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