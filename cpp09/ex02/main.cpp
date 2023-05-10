/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apielasz <apielasz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 16:47:08 by apielasz          #+#    #+#             */
/*   Updated: 2023/05/10 13:02:55 by apielasz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "PmergeMe.hpp"

int main(int argc, char **argv) {

	if (argc < 3) {
		std::cerr << RED "Error: you need to provide at least two numbers" D << std::endl;
		return (1);
	}

	PmergeMe	sort;
	try {
		sort = PmergeMe(&argv[1]);
	}
	catch (std::exception & err) {
		std::cerr << err.what() << std::endl;
	}
	
	sort.letsGo();

	return (0);
}