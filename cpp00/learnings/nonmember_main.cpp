/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nonmember_main.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:41:20 by apielasz          #+#    #+#             */
/*   Updated: 2023/01/11 16:50:29 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "nonmember.hpp"

void	f0(void) {
	
	Nonmember	instance;

	std::cout << "Number of instances: " << Nonmember::getNbInst() << std::endl;

	return ;
}
void	f1(void) {
	
	Nonmember	instance;

	std::cout << "Number of instances: " << Nonmember::getNbInst() << std::endl;
	f0();

	return ;
}

int	main(void) {

	std::cout << "Number of instances: " << Nonmember::getNbInst() << std::endl;
	f1();
	std::cout << "Number of instances: " << Nonmember::getNbInst() << std::endl;

	return (0);
}